/**
 * @file  ZombieVillager.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Zombie.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ZombieVillager.
 *
 */
class ZombieVillager : public Zombie {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ZOMBIEVILLAGER
public:
    class ZombieVillager& operator=(class ZombieVillager const &) = delete;
    ZombieVillager(class ZombieVillager const &) = delete;
    ZombieVillager() = delete;
#endif

public:
    /**
     * @vftbl  8
     * @symbol ?reloadHardcoded@ZombieVillager@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     * @hash   -1891633855
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @hash   -1294930346
     */
    virtual ~ZombieVillager();
    /**
     * @vftbl  41
     * @hash   -249160383
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  61
     * @hash   -191902081
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl  68
     * @hash   -185437434
     */
    virtual void __unk_vfn_68();
    /**
     * @vftbl  82
     * @hash   -133720258
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl  85
     * @hash   -137684383
     */
    virtual void __unk_vfn_85();
    /**
     * @vftbl  88
     * @hash   -128179132
     */
    virtual void __unk_vfn_88();
    /**
     * @vftbl  96
     * @hash   -108131711
     */
    virtual void __unk_vfn_96();
    /**
     * @vftbl  99
     * @hash   -105361148
     */
    virtual void __unk_vfn_99();
    /**
     * @vftbl  106
     * @hash   1332943623
     */
    virtual void __unk_vfn_106();
    /**
     * @vftbl  108
     * @hash   1334790665
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl  109
     * @hash   1328979498
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl  111
     * @hash   1356955169
     */
    virtual void __unk_vfn_111();
    /**
     * @vftbl  142
     * @symbol ?handleEntityEvent@ZombieVillager@@UEAAXW4ActorEvent@@H@Z
     * @hash   767138138
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl  182
     * @hash   1509264059
     */
    virtual void __unk_vfn_182();
    /**
     * @vftbl  196
     * @hash   1590605982
     */
    virtual void __unk_vfn_196();
    /**
     * @vftbl  222
     * @hash   -2034256014
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl  223
     * @hash   -2020032253
     */
    virtual void __unk_vfn_223();
    /**
     * @vftbl  248
     * @hash   -2007175034
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl  251
     * @hash   -786620466
     */
    virtual void __unk_vfn_251();
    /**
     * @vftbl  269
     * @hash   -1906709211
     */
    virtual void __unk_vfn_269();
    /**
     * @vftbl  273
     * @symbol ?readAdditionalSaveData@ZombieVillager@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -1816090444
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  274
     * @symbol ?addAdditionalSaveData@ZombieVillager@@MEBAXAEAVCompoundTag@@@Z
     * @hash   924634233
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  277
     * @hash   -1873192414
     */
    virtual void __unk_vfn_277();
    /**
     * @vftbl  285
     * @hash   -1895428993
     */
    virtual void __unk_vfn_285();
    /**
     * @vftbl  313
     * @hash   -1210176411
     */
    virtual void __unk_vfn_313();
    /**
     * @vftbl  317
     * @hash   -1157463639
     */
    virtual void __unk_vfn_317();
    /**
     * @vftbl  351
     * @hash   -1055222849
     */
    virtual void __unk_vfn_351();
    /**
     * @vftbl  365
     * @hash   -1022899614
     */
    virtual void __unk_vfn_365();
    /**
     * @symbol ??0ZombieVillager@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   -1903417080
     */
    MCAPI ZombieVillager(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

};