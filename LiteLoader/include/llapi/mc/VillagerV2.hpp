/**
 * @file  VillagerV2.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "VillagerBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VillagerV2.
 *
 */
class VillagerV2 : public VillagerBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VILLAGERV2
public:
    class VillagerV2& operator=(class VillagerV2 const &) = delete;
    VillagerV2(class VillagerV2 const &) = delete;
    VillagerV2() = delete;
#endif

public:
    /**
     * @vftbl  8
     * @symbol ?reloadHardcoded@VillagerV2@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     * @hash   -1211431829
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @hash   -281194708
     */
    virtual ~VillagerV2();
    /**
     * @vftbl  18
     * @symbol ?remove@VillagerV2@@UEAAXXZ
     * @hash   -1413794183
     */
    virtual void remove();
    /**
     * @vftbl  20
     * @symbol ?isRuntimePredictedMovementEnabled@VillagerV2@@UEBA_NXZ
     * @hash   -323474370
     */
    virtual bool isRuntimePredictedMovementEnabled() const;
    /**
     * @vftbl  41
     * @hash   -249160383
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  61
     * @hash   -198636769
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
     * @hash   -134913820
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
     * @vftbl  203
     * @symbol ?buildDebugInfo@VillagerV2@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1142799286
     */
    virtual void buildDebugInfo(std::string &) const;
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
     * @vftbl  238
     * @symbol ?getInteraction@VillagerV2@@UEAA_NAEAVPlayer@@AEAVActorInteraction@@AEBVVec3@@@Z
     * @hash   1652807083
     */
    virtual bool getInteraction(class Player &, class ActorInteraction &, class Vec3 const &);
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
     * @vftbl  253
     * @symbol ?die@VillagerV2@@UEAAXAEBVActorDamageSource@@@Z
     * @hash   986810661
     */
    virtual void die(class ActorDamageSource const &);
    /**
     * @vftbl  267
     * @symbol ?updateEntitySpecificMolangVariables@VillagerV2@@UEAAXAEAVRenderParams@@@Z
     * @hash   -2122446086
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vftbl  269
     * @hash   -1906709211
     */
    virtual void __unk_vfn_269();
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
     * @vftbl  297
     * @symbol ?travel@VillagerV2@@UEAAXMMM@Z
     * @hash   2028003123
     */
    virtual void travel(float, float, float);
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
     * @vftbl  360
     * @symbol ?newServerAiStep@VillagerV2@@UEAAXXZ
     * @hash   -526558916
     */
    virtual void newServerAiStep();
    /**
     * @vftbl  365
     * @hash   -1022899614
     */
    virtual void __unk_vfn_365();
    /**
     * @symbol ??0VillagerV2@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   722122990
     */
    MCAPI VillagerV2(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

};