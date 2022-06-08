// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DirectoryPackSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIRECTORYPACKSOURCE
public:
    class DirectoryPackSource& operator=(class DirectoryPackSource const &) = delete;
    DirectoryPackSource(class DirectoryPackSource const &) = delete;
    DirectoryPackSource() = delete;
#endif

public:
    /*0*/ virtual ~DirectoryPackSource();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual class PackSourceReport load(class IPackManifestFactory &, class IContentKeyProvider const &);
    /*
    inline enum PackOrigin getPackOrigin() const{
        enum PackOrigin (DirectoryPackSource::*rv)() const;
        *((void**)&rv) = dlsym("?getPackOrigin@DirectoryPackSource@@UEBA?AW4PackOrigin@@XZ");
        return (this->*rv)();
    }
    inline enum PackType getPackType() const{
        enum PackType (DirectoryPackSource::*rv)() const;
        *((void**)&rv) = dlsym("?getPackType@DirectoryPackSource@@UEBA?AW4PackType@@XZ");
        return (this->*rv)();
    }
    inline  ~DirectoryPackSource(){
         (DirectoryPackSource::*rv)();
        *((void**)&rv) = dlsym("??1DirectoryPackSource@@UEAA@XZ");
        return (this->*rv)();
    }
    inline void forEachPack(class std::function<void (class Pack &)> a0){
        void (DirectoryPackSource::*rv)(class std::function<void (class Pack &)>);
        *((void**)&rv) = dlsym("?forEachPack@DirectoryPackSource@@UEAAXV?$function@$$A6AXAEAVPack@@@Z@std@@@Z");
        return (this->*rv)(std::forward<class std::function<void (class Pack &)>>(a0));
    }
    inline void forEachPackConst(class std::function<void (class Pack const &)> a0) const{
        void (DirectoryPackSource::*rv)(class std::function<void (class Pack const &)>) const;
        *((void**)&rv) = dlsym("?forEachPackConst@DirectoryPackSource@@UEBAXV?$function@$$A6AXAEBVPack@@@Z@std@@@Z");
        return (this->*rv)(std::forward<class std::function<void (class Pack const &)>>(a0));
    }
    */
    MCAPI DirectoryPackSource(class Core::Path const &, enum PackType, enum PackOrigin, bool);
    MCAPI class Core::PathBuffer<std::string> const & getPath() const;
    MCAPI bool removePack(class Core::Path const &);
    MCAPI static void checkAndRemoveIncompletePacks(class Core::Path const &);

protected:

private:

};