/**
 * @file  PropertyContainer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../PropertyMetadata.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class PropertyContainer.
 *
 */
class PropertyContainer {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROPERTYCONTAINER
public:
    class PropertyContainer& operator=(class PropertyContainer const &) = delete;
    PropertyContainer(class PropertyContainer const &) = delete;
    PropertyContainer() = delete;
#endif

public:
    /**
     * @hash   49189310
     * @symbol  ??0PropertyContainer\@\@QEAA\@V?$not_null\@V?$shared_ptr\@$$CBVPropertyGroup\@\@\@std\@\@\@gsl\@\@AEAVRenderParams\@\@\@Z
     */
    MCAPI PropertyContainer(class gsl::not_null<class std::shared_ptr<class PropertyGroup const>>, class RenderParams &);
    /**
     * @hash   1235000142
     * @symbol  ?addAdditionalSaveDataToCompoundTag\@PropertyContainer\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveDataToCompoundTag(class CompoundTag &) const;
    /**
     * @hash   223353223
     * @symbol  ?addEntryToSyncData\@PropertyContainer\@\@QEBAXAEBVPropertyMetadata\@\@AEAUPropertySyncData\@\@\@Z
     */
    MCAPI void addEntryToSyncData(class PropertyMetadata const &, struct PropertySyncData &) const;
    /**
     * @hash   983864240
     * @symbol  ?getBoolValue\@PropertyContainer\@\@QEBA?AV?$optional\@_N\@std\@\@_K\@Z
     */
    MCAPI class std::optional<bool> getBoolValue(unsigned __int64) const;
    /**
     * @hash   -1270309601
     * @symbol  ?getEnumIndexValue\@PropertyContainer\@\@QEBA?AV?$optional\@_K\@std\@\@_K\@Z
     */
    MCAPI class std::optional<unsigned __int64> getEnumIndexValue(unsigned __int64) const;
    /**
     * @hash   -1508822976
     * @symbol  ?getFloatValue\@PropertyContainer\@\@QEBA?AV?$optional\@M\@std\@\@_K\@Z
     */
    MCAPI class std::optional<float> getFloatValue(unsigned __int64) const;
    /**
     * @hash   329373938
     * @symbol  ?getIntValue\@PropertyContainer\@\@QEBA?AV?$optional\@H\@std\@\@_K\@Z
     */
    MCAPI class std::optional<int> getIntValue(unsigned __int64) const;
    /**
     * @hash   1858957825
     * @symbol  ?getMolangValue\@PropertyContainer\@\@QEBA_N_KAEAUMolangScriptArg\@\@\@Z
     */
    MCAPI bool getMolangValue(unsigned __int64, struct MolangScriptArg &) const;
    /**
     * @hash   -1349708264
     * @symbol  ?readLoadedProperties\@PropertyContainer\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void readLoadedProperties(class CompoundTag const &);
    /**
     * @hash   1821023625
     * @symbol  ?setAliasProperties\@PropertyContainer\@\@QEAAXAEBV?$unordered_map\@VHashedString\@\@V?$shared_ptr\@VTag\@\@\@std\@\@U?$hash\@VHashedString\@\@\@3\@U?$equal_to\@VHashedString\@\@\@3\@V?$allocator\@U?$pair\@$$CBVHashedString\@\@V?$shared_ptr\@VTag\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@1\@Z
     */
    MCAPI void setAliasProperties(class std::unordered_map<class HashedString, class std::shared_ptr<class Tag>, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class std::shared_ptr<class Tag>>>> const &, std::string const &, std::string const &);
    /**
     * @hash   -1440066798
     * @symbol  ?setBoolValue\@PropertyContainer\@\@QEAAX_K_N\@Z
     */
    MCAPI void setBoolValue(unsigned __int64, bool);
    /**
     * @hash   816166343
     * @symbol  ?setEnumIndexValue\@PropertyContainer\@\@QEAAX_K0\@Z
     */
    MCAPI void setEnumIndexValue(unsigned __int64, unsigned __int64);
    /**
     * @hash   1627971712
     * @symbol  ?setFloatValue\@PropertyContainer\@\@QEAAX_KM\@Z
     */
    MCAPI void setFloatValue(unsigned __int64, float);
    /**
     * @hash   1632874034
     * @symbol  ?setIntValue\@PropertyContainer\@\@QEAAX_KH\@Z
     */
    MCAPI void setIntValue(unsigned __int64, int);
    /**
     * @hash   1422040600
     * @symbol  ??1PropertyContainer\@\@QEAA\@XZ
     */
    MCAPI ~PropertyContainer();

//private:
    /**
     * @hash   1435507471
     * @symbol  ?_addDataToCompoundTag\@PropertyContainer\@\@AEBAXAEAVCompoundTag\@\@AEBVPropertyMetadata\@\@\@Z
     */
    MCAPI void _addDataToCompoundTag(class CompoundTag &, class PropertyMetadata const &) const;
    /**
     * @hash   1546970761
     * @symbol  ?_getPropertyTypeArrayIndex\@PropertyContainer\@\@AEBA?AV?$optional\@_K\@std\@\@_KW4ContainedType\@PropertyMetadata\@\@\@Z
     */
    MCAPI class std::optional<unsigned __int64> _getPropertyTypeArrayIndex(unsigned __int64, enum class PropertyMetadata::ContainedType) const;
    /**
     * @hash   1672898744
     * @symbol  ?_readValueFromTag\@PropertyContainer\@\@AEAA_NAEBVPropertyMetadata\@\@AEBVTag\@\@\@Z
     */
    MCAPI bool _readValueFromTag(class PropertyMetadata const &, class Tag const &);
    /**
     * @hash   -1925574483
     * @symbol  ?_trySetEnumIndexByString\@PropertyContainer\@\@AEAA_N_KAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool _trySetEnumIndexByString(unsigned __int64, std::string const &);

private:

};