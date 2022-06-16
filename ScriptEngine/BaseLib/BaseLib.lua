-- ---------------------
-- For require
-- ---------------------
package.path = "plugins/lib/?.lua;"..package.path

-- ---------------------
-- Directory Class
-- ---------------------
Directory = {}

function Directory:new(o, patn)
    o = o or {}
    setmetatable(o, self)
    self.__index = self
    if (File.checkIsDir(path)) 
    then
        File.createDir(path)
        self.dirPath = path
    else
        return nil
    end
    return o
end

function Directory:name()
    s = string.reverse(self.dirPath)
    _, i = string.find(s, '/')
    return string.reverse(string.sub(s, 0, i))
end

function Directory:children()
    return File.getFilesList(self.dirPath)
end

function Directory:rename(newName)
    s = string.reverse(self.dirPath)
    _, i = string.find(s, '/')
    str = string.reverse(string.sub(s, i))
    newPath = str..newName
    result = File.rename(self.dirPath, newPath);
    if (result)
    then
        self.dirPath = newPath
    end
    return result
end

function Directory:remove()
    return File.delete(self.dirPath)
end

function Directory:copyTo(pathTo)
    return File.copy(self.dirPath, pathTo)
end

function Directory:moveTo(pathTo)
    return File.move(self.dirPath, pathTo)
end

-- ---------------------
-- For Compatibility
-- ---------------------
file = File
lxl = ll;
-- DirectionAngle.valueOf = DirectionAngle.toFacing
LXL_Block = LLSE_Block
LXL_BlockEntity = LLSE_BlockEntity
LXL_Container = LLSE_Container
LXL_Device = LLSE_Device
LXL_Entity = LLSE_Entity
LXL_SimpleForm = LLSE_SimpleForm
LXL_CustomForm = LLSE_CustomForm
LXL_Item = LLSE_Item
LXL_Player = LLSE_Player
LXL_Objective = LLSE_Objective

