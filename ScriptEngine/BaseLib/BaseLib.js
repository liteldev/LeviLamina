/*
cjs.js begin, see <https://github.com/callstackexceed/cjs.js>

Copyright 2021 callstackexceed

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/
(function(){
    if(typeof require != "undefined") {
        log('require already exist');
    }

    let coreModules = new Map([]);

    let basePath = 'plugins/';

    let utilPath = {
        normalize(path) {
            let dirs = path.split('/');
            if(dirs[dirs.length - 1] === '') {
                dirs.pop();
            }
            let newDirs = dirs.reduce((newDirs, dir) => {
                switch(dir) {
                case '.':
                    /* no-op */
                    break;
                case '..':
                    if(newDirs.length === 0 || newDirs[newDirs.length - 1] == '..') {
                        newDirs.push('..');
                    } else {
                        newDirs.pop();
                    }
                    break;
                default:
                    newDirs.push(dir);
                    break;
                }
                return newDirs;
            }, []);
            return newDirs.join('/');
        },
        join(...paths) {
            let newPath = paths.map((path)=>{
                return utilPath.normalize(path);
            }).join('/');
            return utilPath.normalize(newPath);
        },
        dirname(path) {
            return path.replace(/\/[^\/]+$/, '');
        },
        split(path) {
            return path.split('/');
        }
    };

    let currentModule = createModule('', null);

    currentModule.path = basePath;

    /*
    ** See https://nodejs.org/api/modules.html#modules_all_together
    */

    function resolveID(id) {
        let currentPath = (currentModule && currentModule.path) || basePath;
        let requestPaths = [];
        let result;
        if(coreModules.has(id)) {
            return coreModules.get(id);
        }
        if(id.startsWith('/')) {
            result = loadAsFile(id);
            if(result != undefined) {
                return result;
            }
            result = loadAsDirectory(id);
            if(result != undefined) {
                return result;
            }
            throw new Error(`${id} not found`);
        }
        if(id.startsWith('./') || id.startsWith('../')) {
            result = loadAsFile(utilPath.join(currentPath, id));
            if(result != undefined) {
                return result;
            }
            result = loadAsDirectory(utilPath.join(currentPath, id));
            if(result != undefined) {
                return result;
            }
            throw new Error(`${utilPath.join(currentPath, id)} not found`);
        }
        if(id.startsWith('#')) {
            result = loadPackageImports(id, currentPath);
            if(result != undefined) {
                return result;
            }
        }
        result = loadPackageSelf(id, currentPath);
        if(result != undefined) {
            return result;
        }
        result = loadNodeModules(id, currentPath);
        if(result != undefined) {
            return result;
        }
        throw new Error(`${id} not found, required by ${(currentModule && currentModule.id)}`);


        function tryFile(path) {
            if(path.startsWith('../')) {
                throw new Error('cannot require file out of root dir');
            }
            path = path.replace(/^\//, '');
            let cjsSelf = 'plugins/cjs.js';
            if(path === cjsSelf) {
                throw new Error('cjs.js is trying to load itself');
            }
            requestPaths.push(path);
            let content = file.readFrom(path);
            if(content == undefined) {
                return undefined;
            }
            if(path.endsWith('.mjs')) {
                throw new Error(`ERROR: cannot require a ESM file ${path}`);
            }
            if(path.endsWith('.json')) {
                throw new Error(`ERROR: cannot require a JSON file ${path}`);
            }
            return {
                path,
                content,
                requestPaths
            }
        }

        function loadAsFile(id) {
            let result;
            result = tryFile(id);
            if(result != undefined) {
                return result;
            }
            result = tryFile(`${id}.js`);
            if(result != undefined) {
                return result;
            }
            result = tryFile(`${id}.cjs`);
            if(result != undefined) {
                return result;
            }
            result = tryFile(`${id}.json`);
            if(result != undefined) {
                throw new Error(`cannot require a JSON file ${id}.mjs`);
            }
            result = tryFile(`${id}.mjs`);
            if(result != undefined) {
                throw new Error(`cannot require a ESM file ${id}.mjs`);
            }
            return undefined;
        }

        function loadIndex(id) {
            let result;
            result = tryFile(utilPath.join(id, 'index.js'));
            if(result != undefined) {
                return result;
            }
            result = tryFile(utilPath.join(id, 'index.cjs'));
            if(result != undefined) {
                return result;
            }
            result = tryFile(utilPath.join(id, 'index.json'));
            if(result != undefined) {
                throw new Error(`cannot require a JSON file ${id}.mjs`);
            }
            result = tryFile(utilPath.join(id, 'index.mjs'));
            if(result != undefined) {
                throw new Error(`cannot require a ESM file ${id}.mjs`);
            }
            return undefined;
        }

        function loadAsDirectory(id) {
            let package = file.readFrom(utilPath.join(id, 'package.json'));
            if(package != undefined) {
                let result;
                package = JSON.parse(package);
                if(!package || !package.main) {
                    return loadIndex(id);
                }
                let m = utilPath.join(id, package.main);
                result = loadAsFile(m);
                if(result != undefined) {
                    return result;
                }
                result = loadIndex(m);
                if(result != undefined) {
                    return result;
                }
                throw new Error(`${m} not found`);
            }
            return loadIndex(id);
        }

        
        function loadNodeModules(id, start) {
            let dirs = node_modules_paths(start);
            let result;
            for(let dir of dirs) {
                result = loadPackagExports(utilPath.join(dir, id));
                if(result != undefined) {
                    return result;
                }
                result = loadAsFile(utilPath.join(dir, id));
                if(result != undefined) {
                    return result;
                }
                result = loadAsDirectory(utilPath.join(dir, id));
                if(result != undefined) {
                    return result;
                }
            }
            return undefined;
        }

        function node_modules_paths(start) {
            let parts = utilPath.split(start);
            let dirs = [''];
            for(let i = parts.length; i >= 0; --i) {
                if(parts[i - 1] === "node_modules") {
                    continue;
                }
                let dir = utilPath.join(...parts.slice(0, i), "node_modules");
                dirs.push(dir);
            }
            return dirs;
        }

        function loadPackageImports(id) {
            //TODO
            let package = file.readFrom(utilPath.join(id, 'package.json'));
            if(package == undefined) {
                return undefined;
            }
            package = JSON.parse(package);
            if(package && package.imports) {
                throw new Error(`cannot resolve imports field of ${id}`);
            }
            return undefined;
        }

        function loadPackagExports(id) {
            //TODO
            let package = file.readFrom(utilPath.join(id, 'package.json'));
            if(package == undefined) {
                return undefined;
            }
            package = JSON.parse(package);
            if(package && package.exports) {
                throw new Error(`cannot resolve exports field of ${id}`);
            }
            return undefined;
        }

        function loadPackageSelf(id) {
            return undefined;
        }
    }

    function createModule(id, parent) {
        return {
            children: [],
            parent,
            exports: {},
            filename: id,
            id,
            isPreloading: false,
            loaded: false,
            path: utilPath.dirname(id),
            paths: undefined,
            require: cjsRequire
        };
    }

    function cjsRequire(id) {
        let parrentModule = currentModule;
        let {path, content} = resolveID(id);
        if(cjsRequire.cache[path] !== undefined) {
            let thisModule = cjsRequire.cache[path];
            if(parrentModule && !parrentModule.children.includes(thisModule)) {
                parrentModule.children.push(thisModule);
            }
            if(thisModule.loaded === false) {
                //TODO
            }
            return thisModule.exports;
        }
        let moduleObject = createModule(path, parrentModule);
        currentModule = moduleObject;
        cjsRequire.cache[path] = moduleObject;
        let code;
        try{
            code = new Function(
                'exports',
                'require',
                'module',
                '__filename',
                '__dirname',
                content
            );
        }catch(e){
            e.stack = e.stack.replace(
                'at new Function (<anonymous>)',
                `at Object.<anonymous> (${moduleObject.id})`
            );
            throw e;
        }
        Object.defineProperty(code, 'name', {value: `@file"${moduleObject.id}"`});
        try{
            code.apply(moduleObject, [
                moduleObject.exports,
                cjsRequire,
                moduleObject,
                path,
                utilPath.dirname(path)
            ]);
        }catch(e) {
            e.stack = e.stack.replace(
                /at Object\.@file"([^"]*)" \(eval at cjsRequire \(:\d+:\d+\), <anonymous>:(\d+):(\d+)\)/g,
                (match, fileName, line, col) => {
                    return `at Object.<anonymous> (${fileName}:${line - 2}:${col})`;
                }
            ).replace(
                /at (\w*) \(eval at cjsRequire \(:\d+:\d+\), <anonymous>:(\d+):(\d+)\)/g,
                (match, functionName, line, col) => {
                    return `at ${functionName} (${line - 2}:${col})`;
                }
            ).replace(/    at cjsRequire \(<anonymous>:\d+:\d+\)\n/g, '');
            throw e;
        }
        currentModule.loaded = true;
        currentModule = parrentModule;
        return moduleObject.exports;
    }

    cjsRequire.main = currentModule;

    cjsRequire.cache = {
        '': currentModule
    };

    cjsRequire.resolve = function resolve(request) {
        let obj = resolveID(request);
        return obj && obj.path;
    }

    cjsRequire.resolve.paths = function paths(request) {
        let obj = resolveID(request);
        return obj && obj.requestPaths;
    }

    globalThis.require = cjsRequire;
})();

/*
cjs.js end
*/



/*
Promise 
*/
(function () {
    const internal = {};
    internal.File = File;
    internal.WSClient = WSClient;

    class FilePromise extends File {
        constructor(path, mode) {
            super(path, mode);
            this.filePath = path; // Becasue this->path in C++ class is private.
        }

        read(cnt, callback) {
            if (callback) {
                return super.read(cnt, callback);
            } else {
                return new Promise((resolve, reject) => {
                    super.read(cnt, (result) => { resolve(result); });
                });
            }
        }
    
        readLine(callback) {
            if (callback) {
                return super.readLine(callback);
            } else {
                return new Promise((resolve, reject) => {
                    super.readLine((result) => { resolve(result); });
                });
            }
        }
    
        readAll(callback) {
            if (callback) {
                return super.readAll(callback);
            } else {
                return new Promise((resolve, reject) => {
                    super.readAll((result) => { resolve(result); });
                });
            }
        }

        write(data, callback) {
            if (callback) {
                return super.write(data, callback);
            } else {
                return new Promise((resolve, reject) => {
                    super.write(data, (result) => { resolve(result); });
                });
            }
        }

        writeLine(str, callback) {
            if (callback) {
                return super.writeLine(str, callback);
            } else {
                return new Promise((resolve, reject) => {
                    super.writeLine(str, (result) => { resolve(result); });
                });
            }
        }

        rename(newName) {
            let parentPath = this.filePath.substr(0, this.filePath.lastIndexOf('/') + 1);
            let newPath = `${parentPath}${newName}`;
            let result = File.rename(this.filePath, newName);
            if (result) {
                this.filePath = newPath;
            }
            return result;
        }

        async remove() {
            return new Promise((resolve, reject) => {
                let result = File.delete(this.filePath);
                super.close();
                resolve(result);
            });
        }

        async copyTo(pathTo) {
            return new Promise((resolve, reject) => {
                let result = File.copy(this.filePath, pathTo);
                resolve(result);
            });
        }

        async moveTo(pathTo) {
            return new Promise((resolve, reject) => {
                let result = File.move(this.filePath, pathTo);
                resolve(result);
            });
        }
    }

    class Directory {
        constructor(path) {
            if (File.checkIsDir(path)) {
                File.createDir(path);
                if (!path.endsWith('/')) {
                    path += '/';
                }
                this.dirPath = path;
            } else {
                throw `${path} is not a directory!`;
            }
        }

        get name() {
            return this.dirPath.substr(this.dirPath.lastIndexOf('/') + 1);
        }

        async children() {
            return new Promise((resolve, reject) => {
                let list = File.getFilesList(this.dirPath);
                let path = this.dirPath;
                let result = [];
                for (const it of list) {
                    result.push({
                        fileName: it,
                        parentPath: path,
                        isDir: function () {
                            return File.checkIsDir(path + it);
                        },
                        toString: function () {
                            return it;
                        },
                        toFile: function () {
                            return new FilePromise(path + it);
                        },
                        toDirectory: function () {
                            return new Directory(path + it);
                        }
                    });
                }
                resolve(result);
            });
        }

        rename(newName) {
            let parentPath = this.dirPath.substr(0, this.dirPath.lastIndexOf('/') + 1);
            let newPath = `${parentPath}${newName}`;
            let result = File.rename(this.dirPath, newName);
            if (result) {
                this.dirPath = newPath;
            }
            return result;
        }

        async remove() {
            return new Promise((resolve, reject) => {
                let result = File.delete(this.dirPath);
                if (result) {
                    this.close();
                }
                resolve(result);
            });
        }

        async copyTo(pathTo) {
            return new Promise((resolve, reject) => {
                let result = File.copy(this.dirPath, pathTo);
                resolve(result);
            });
        }

        async moveTo(pathTo) {
            return new Promise((resolve, reject) => {
                let result = File.move(this.dirPath, pathTo);
                if (result) {
                    this.dirPath = pathTo;
                }
                resolve(result);
            });
        }
    }

    class HttpClient {
        constructor(header) {
            this.header = header;
        }
        
        get header() {
            return this.header;
        }

        set header(value) {
            this.header = value;
        }

        async get(url) {
            return new Promise((resolve, reject) => {
                let res = network.httpGet(url, this.header, (status, result) => {
                    resolve({ status, result });
                });
                if (!res) 
                    reject('Fail to send request!');
            });
        }

        async post(url, data, type) {
            return new Promise((resolve, reject) => {
                let res = network.httpGet(url, this.header, data, type, (status, result) => {
                    resolve({ status, result });
                });
                if (!res)
                    reject('Fail to send request!');
            });
        }

        static async put(url, data, type) {
            return new Promise((resolve, reject) => {
                reject('Method not yet implemented.');
            });
        }

        static async delete(url, data, type) {
            return new Promise((resolve, reject) => {
                reject('Method not yet implemented.');
            });
        }
    }

    class WSClientPromise extends WSClient {
        constructor() {
            super();
        }

        connectAsync(target, callback) {
            if (callback) {
                return super.connectAsync(target, callback);
            } else {
                return new Promise((resolve, reject) => {
                    super.connectAsync(target, (success) => { resolve(success); });
                });
            }
        }

        /**
         * @param { string | ArrayBuffer } data - Data to send.
         * @returns { Promise<boolean> } Is it sent successfully.
         */
        async sendAsync(data) {
            return new Promise((resolve, reject) => {
                resolve(super.send(data));
            });
        }
    }

    async function cmdAsync(cmd, timeLimit) {
        return new Promise((resolve, reject) => {
            system.cmd(
                cmd, 
                (exitcode, output) => { 
                    resolve({ exitcode, output }); 
                }, 
                timeLimit
            );
        });
    }

    async function newProcessAsync(process, timeLimit) {
        return new Promise((resolve, reject) => {
            system.newProcess(
                process, 
                (exitcode, output) => { 
                    resolve({ exitcode, output }); 
                }, 
                timeLimit
            );
        });
    }

    globalThis.internal = internal;

    globalThis.File = FilePromise;
    globalThis.Directory = Directory;
    globalThis.network.HttpClient = HttpClient;
    globalThis.WSClient = WSClientPromise;

    globalThis.system.shellAsync = cmdAsync;
    globalThis.system.newProcessAsync = newProcessAsync;
})();
/*
Promise end
*/



/*
For Compatibility
*/
globalThis.file = File;
globalThis.lxl = ll;
DirectionAngle.prototype.valueOf = DirectionAngle.prototype.toFacing
globalThis.LXL_Block = LLSE_Block
globalThis.LXL_BlockEntity = LLSE_BlockEntity
globalThis.LXL_Container = LLSE_Container
globalThis.LXL_Device = LLSE_Device
globalThis.LXL_Entity = LLSE_Entity
globalThis.LXL_SimpleForm = LLSE_SimpleForm
globalThis.LXL_CustomForm = LLSE_CustomForm
globalThis.LXL_Item = LLSE_Item
globalThis.LXL_Player = LLSE_Player
globalThis.LXL_Objective = LLSE_Objective
