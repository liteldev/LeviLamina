/**
 * @file  EnderCrystal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EnderCrystal.
 *
 */
class EnderCrystal : public Actor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDERCRYSTAL
public:
    class EnderCrystal& operator=(class EnderCrystal const &) = delete;
    EnderCrystal(class EnderCrystal const &) = delete;
    EnderCrystal() = delete;
#endif

public:
    /**
     * @vftbl  10
     * @symbol ?reloadHardcoded@EnderCrystal@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     * @hash   152661119
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  11
     * @symbol ?reloadHardcodedClient@EnderCrystal@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     * @hash   -954997878
     */
    virtual void reloadHardcodedClient(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  16
     * @hash   -1697331560
     */
    virtual ~EnderCrystal();
    /**
     * @vftbl  42
     * @hash   -147616318
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  50
     * @symbol ?normalTick@EnderCrystal@@UEAAXXZ
     * @hash   -1818473939
     */
    virtual void normalTick();
    /**
     * @vftbl  63
     * @hash   -96891855
     */
    virtual void __unk_vfn_63();
    /**
     * @vftbl  70
     * @hash   -63575907
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  82
     * @symbol ?getShadowRadius@EnderCrystal@@UEBAMXZ
     * @hash   -1712865160
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl  84
     * @hash   -31252672
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl  87
     * @hash   -35939469
     */
    virtual void __unk_vfn_87();
    /**
     * @vftbl  90
     * @hash   -6317605
     */
    virtual void __unk_vfn_90();
    /**
     * @vftbl  97
     * @symbol ?isPickable@EnderCrystal@@UEAA_NXZ
     * @hash   1296403744
     */
    virtual bool isPickable();
    /**
     * @vftbl  98
     * @hash   -6386797
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl  101
     * @hash   1428946562
     */
    virtual void __unk_vfn_101();
    /**
     * @vftbl  108
     * @hash   1435411209
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl  110
     * @hash   1456652192
     */
    virtual void __unk_vfn_110();
    /**
     * @vftbl  111
     * @hash   1450118353
     */
    virtual void __unk_vfn_111();
    /**
     * @vftbl  113
     * @hash   1459422755
     */
    virtual void __unk_vfn_113();
    /**
     * @vftbl  137
     * @symbol ?isInvulnerableTo@EnderCrystal@@UEBA_NAEBVActorDamageSource@@@Z
     * @hash   -497811284
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @vftbl  183
     * @hash   1602074556
     */
    virtual void __unk_vfn_183();
    /**
     * @vftbl  197
     * @hash   1692150047
     */
    virtual void __unk_vfn_197();
    /**
     * @vftbl  222
     * @hash   -1937633230
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl  223
     * @hash   -1919411709
     */
    virtual void __unk_vfn_223();
    /**
     * @vftbl  245
     * @hash   -1918058621
     */
    virtual void __unk_vfn_245();
    /**
     * @vftbl  248
     * @hash   -511059482
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl  266
     * @hash   -1809581902
     */
    virtual void __unk_vfn_266();
    /**
     * @vftbl  267
     * @symbol ?_hurt@EnderCrystal@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     * @hash   -1878765294
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl  270
     * @symbol ?readAdditionalSaveData@EnderCrystal@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -1866084487
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  271
     * @symbol ?addAdditionalSaveData@EnderCrystal@@UEBAXAEAVCompoundTag@@@Z
     * @hash   109072132
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  274
     * @hash   -1775342433
     */
    virtual void __unk_vfn_274();
    /**
     * @symbol ??0EnderCrystal@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   742746538
     */
    MCAPI EnderCrystal(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?setBeamTarget@EnderCrystal@@QEAAXAEBVBlockPos@@@Z
     * @hash   1741266658
     */
    MCAPI void setBeamTarget(class BlockPos const &);
    /**
     * @symbol ?setCrystalDamagedCallback@EnderCrystal@@QEAAXV?$function@$$A6AXAEAVEnderCrystal@@AEBVActorDamageSource@@@Z@std@@@Z
     * @hash   -1289012264
     */
    MCAPI void setCrystalDamagedCallback(class std::function<void (class EnderCrystal &, class ActorDamageSource const &)>);
    /**
     * @symbol ?HEAL_DISTANCE@EnderCrystal@@2MB
     * @hash   -1220733185
     */
    MCAPI static float const HEAL_DISTANCE;

};