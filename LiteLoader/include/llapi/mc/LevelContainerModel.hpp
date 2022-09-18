/**
 * @file  LevelContainerModel.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelContainerModel.
 *
 */
class LevelContainerModel : public ContainerModel {

#define AFTER_EXTRA
// Add Member There
public:
    inline Actor* getEntity()
    {
        return _getEntity();
    }
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCONTAINERMODEL
public:
    class LevelContainerModel& operator=(class LevelContainerModel const &) = delete;
    LevelContainerModel(class LevelContainerModel const &) = delete;
    LevelContainerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol ?containerContentChanged@LevelContainerModel@@UEAAXH@Z
     * @hash   -812774104
     */
    virtual void containerContentChanged(int);
    /**
     * @vftbl  1
     * @hash   -12570342
     */
    virtual ~LevelContainerModel();
    /**
     * @vftbl  2
     * @symbol ?postInit@LevelContainerModel@@UEAAXXZ
     * @hash   33551947
     */
    virtual void postInit();
    /**
     * @vftbl  3
     * @symbol ?releaseResources@LevelContainerModel@@UEAAXXZ
     * @hash   1647592969
     */
    virtual void releaseResources();
    /**
     * @vftbl  6
     * @hash   -1403860986
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol ?getContainerWeakRef@LevelContainerModel@@UEBA?AVContainerWeakRef@@XZ
     * @hash   -1098465863
     */
    virtual class ContainerWeakRef getContainerWeakRef() const;
    /**
     * @vftbl  12
     * @hash   -334124315
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  14
     * @symbol ?isValid@LevelContainerModel@@UEAA_NXZ
     * @hash   -717448769
     */
    virtual bool isValid();
    /**
     * @vftbl  15
     * @hash   -331353752
     */
    virtual void __unk_vfn_15();
    /**
     * @vftbl  16
     * @hash   -330430231
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  19
     * @hash   -376678356
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  20
     * @symbol ?_getContainer@LevelContainerModel@@EEBAPEAVContainer@@XZ
     * @hash   -1285684109
     */
    virtual class Container * _getContainer() const;
    /**
     * @vftbl  21
     * @symbol ?_getContainerOffset@LevelContainerModel@@MEBAHXZ
     * @hash   -1691824443
     */
    virtual int _getContainerOffset() const;
    /**
     * @vftbl  22
     * @symbol ?_onItemChanged@LevelContainerModel@@MEAAXHAEBVItemStack@@0@Z
     * @hash   -645548024
     */
    virtual void _onItemChanged(int, class ItemStack const &, class ItemStack const &);
    /**
     * @symbol ??0LevelContainerModel@@QEAA@W4ContainerEnumName@@HAEAVPlayer@@W4BlockActorType@@AEBVBlockPos@@W4ContainerCategory@@@Z
     * @hash   1970628248
     */
    MCAPI LevelContainerModel(enum class ContainerEnumName, int, class Player &, enum class BlockActorType, class BlockPos const &, enum class ContainerCategory);
    /**
     * @symbol ??0LevelContainerModel@@QEAA@W4ContainerEnumName@@HAEAVPlayer@@UActorUniqueID@@W4ContainerCategory@@@Z
     * @hash   65172263
     */
    MCAPI LevelContainerModel(enum class ContainerEnumName, int, class Player &, struct ActorUniqueID, enum class ContainerCategory);
    /**
     * @symbol ?getContainerHelper@LevelContainerModel@@SAPEAVContainer@@AEAVPlayer@@AEBUActorUniqueID@@@Z
     * @hash   -185528077
     */
    MCAPI static class Container * getContainerHelper(class Player &, struct ActorUniqueID const &);
    /**
     * @symbol ?getContainerHelper@LevelContainerModel@@SAPEAVContainer@@AEAVPlayer@@W4BlockActorType@@AEBVBlockPos@@@Z
     * @hash   2017547272
     */
    MCAPI static class Container * getContainerHelper(class Player &, enum class BlockActorType, class BlockPos const &);

//private:
    /**
     * @symbol ?_getEntity@LevelContainerModel@@AEBAPEAVActor@@XZ
     * @hash   920644658
     */
    MCAPI class Actor * _getEntity() const;
    /**
     * @symbol ?_refreshSlot@LevelContainerModel@@AEAAXH@Z
     * @hash   1565443285
     */
    MCAPI void _refreshSlot(int);

private:

};