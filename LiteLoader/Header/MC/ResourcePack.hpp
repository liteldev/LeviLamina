// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ResourcePack {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACK
public:
    class ResourcePack& operator=(class ResourcePack const &) = delete;
    ResourcePack(class ResourcePack const &) = delete;
    ResourcePack() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCEPACK
public:
#endif
    MCAPI ResourcePack(class Pack &);
    MCAPI bool areKnownFilesValid();
    MCAPI void forEachIn(class Core::Path const &, class std::function<void (class Core::Path const &)>, int, bool) const;
    MCAPI void generateAssetSet();
    MCAPI std::string const & getFolderName() const;
    MCAPI double getLoadTime() const;
    MCAPI class PackManifest & getManifest();
    MCAPI enum PackCategory getPackCategory() const;
    MCAPI class mce::UUID const & getPackId() const;
    MCAPI enum PackOrigin getPackOrigin() const;
    MCAPI bool getResource(class Core::Path const &, std::string &, int) const;
    MCAPI class ResourceLocation const & getResourceLocation() const;
    MCAPI int getSubpackCount() const;
    MCAPI std::string const & getSubpackFolderName(int) const;
    MCAPI int getSubpackIndex(std::string const &) const;
    MCAPI class SubpackInfoCollection const & getSubpackInfoStack() const;
    MCAPI class SemVersion const & getVersion() const;
    MCAPI bool hasResource(class Core::Path const &, int) const;
    MCAPI bool isBaseGamePack() const;
    MCAPI bool isSlicePack() const;
    MCAPI bool isType(enum PackType) const;
    MCAPI bool isZipped() const;
    MCAPI void setAsSlicePack();
    MCAPI void setError();
    MCAPI void setLoadTime(double);
    MCAPI void setLocale(std::string const &);
    MCAPI void unregisterDeleteCallback(void *);

//private:
    MCAPI void _createSubpack(struct SubpackInfo const &);
    MCAPI void _createSubpacks();
    MCAPI void _generateIconPath();

private:
    MCAPI static class Core::PathBuffer<std::string> const RESOURCE_PACK_BUG_ICON_PATH;
    MCAPI static class Core::PathBuffer<std::string> const RESOURCE_PACK_ICON_PATH;
    MCAPI static class Core::PathBuffer<std::string> const TEXTURES_LIST_PATH;


};