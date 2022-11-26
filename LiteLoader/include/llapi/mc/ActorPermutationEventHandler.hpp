/**
 * @file  ActorPermutationEventHandler.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorPermutationEventHandler.
 *
 */
class ActorPermutationEventHandler {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORPERMUTATIONEVENTHANDLER
public:
    class ActorPermutationEventHandler& operator=(class ActorPermutationEventHandler const &) = delete;
    ActorPermutationEventHandler(class ActorPermutationEventHandler const &) = delete;
    ActorPermutationEventHandler() = delete;
#endif

public:
    /**
     * @symbol ??0ActorPermutationEventHandler@@QEAA@AEAVActor@@@Z
     * @hash   1934140882
     */
    MCAPI ActorPermutationEventHandler(class Actor &);
    /**
     * @symbol ?checkActiveComponents@ActorPermutationEventHandler@@QEAAXV?$shared_ptr@VActorPermutation@@@std@@@Z
     * @hash   -1136921941
     */
    MCAPI void checkActiveComponents(class std::shared_ptr<class ActorPermutation>);
    /**
     * @symbol ?getPermutationDescriptor@ActorPermutationEventHandler@@QEAAPEAVActorDefinitionDescriptor@@XZ
     * @hash   356080599
     */
    MCAPI class ActorDefinitionDescriptor * getPermutationDescriptor();
    /**
     * @symbol ?hasChanged@ActorPermutationEventHandler@@QEAA_NXZ
     * @hash   744500688
     */
    MCAPI bool hasChanged();
    /**
     * @symbol ?initPermutations@ActorPermutationEventHandler@@QEAAXAEAV?$vector@V?$shared_ptr@VActorPermutation@@@std@@V?$allocator@V?$shared_ptr@VActorPermutation@@@std@@@2@@std@@@Z
     * @hash   -896981541
     */
    MCAPI void initPermutations(std::vector<class std::shared_ptr<class ActorPermutation>> &);
    /**
     * @symbol ?reload@ActorPermutationEventHandler@@QEAAXAEAVRenderParams@@@Z
     * @hash   -846639692
     */
    MCAPI void reload(class RenderParams &);
    /**
     * @symbol ??1ActorPermutationEventHandler@@QEAA@XZ
     * @hash   1234821979
     */
    MCAPI ~ActorPermutationEventHandler();

};