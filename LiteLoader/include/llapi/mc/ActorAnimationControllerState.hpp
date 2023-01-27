/**
 * @file  ActorAnimationControllerState.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorAnimationControllerState.
 *
 */
class ActorAnimationControllerState {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORANIMATIONCONTROLLERSTATE
public:
    class ActorAnimationControllerState& operator=(class ActorAnimationControllerState const &) = delete;
    ActorAnimationControllerState(class ActorAnimationControllerState const &) = delete;
    ActorAnimationControllerState() = delete;
#endif

public:
    /**
     * @hash   -895986664
     * @symbol  ?addAnimation\@ActorAnimationControllerState\@\@QEAAXAEBVHashedString\@\@\@Z
     */
    MCAPI void addAnimation(class HashedString const &);
    /**
     * @hash   -852945315
     * @symbol  ?addAnimation\@ActorAnimationControllerState\@\@QEAAXAEBVHashedString\@\@AEBVExpressionNode\@\@\@Z
     */
    MCAPI void addAnimation(class HashedString const &, class ExpressionNode const &);
    /**
     * @hash   377242465
     * @symbol  ?addBlendTransitionKeyFrame\@ActorAnimationControllerState\@\@QEAAXMM\@Z
     */
    MCAPI void addBlendTransitionKeyFrame(float, float);
    /**
     * @hash   1786321722
     * @symbol  ?addEntryActorEvent\@ActorAnimationControllerState\@\@QEAAAEAVActorAnimationEvent\@\@MAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4CurrentCmdVersion\@\@W4MolangVersion\@\@\@Z
     */
    MCAPI class ActorAnimationEvent & addEntryActorEvent(float, std::string const &, enum class CurrentCmdVersion, enum class MolangVersion);
    /**
     * @hash   1784372248
     * @symbol  ?addExitActorEvent\@ActorAnimationControllerState\@\@QEAAAEAVActorAnimationEvent\@\@MAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4CurrentCmdVersion\@\@W4MolangVersion\@\@\@Z
     */
    MCAPI class ActorAnimationEvent & addExitActorEvent(float, std::string const &, enum class CurrentCmdVersion, enum class MolangVersion);
    /**
     * @hash   -1580509184
     * @symbol  ?addParticleEffect\@ActorAnimationControllerState\@\@QEAAAEAVActorParticleEffect\@\@XZ
     */
    MCAPI class ActorParticleEffect & addParticleEffect();
    /**
     * @hash   -920912788
     * @symbol  ?addSoundEffect\@ActorAnimationControllerState\@\@QEAAAEAVActorSoundEffect\@\@XZ
     */
    MCAPI class ActorSoundEffect & addSoundEffect();
    /**
     * @hash   -2123821328
     * @symbol  ?addTransition\@ActorAnimationControllerState\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0W4MolangVersion\@\@_N\@Z
     */
    MCAPI void addTransition(std::string const &, std::string const &, enum class MolangVersion, bool);
    /**
     * @hash   -598812897
     * @symbol  ?addVariable\@ActorAnimationControllerState\@\@QEAAAEAVStateAnimationVariable\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class StateAnimationVariable & addVariable(std::string const &);
    /**
     * @hash   1283243876
     * @symbol  ?setBlendTransitionTime\@ActorAnimationControllerState\@\@QEAAXM\@Z
     */
    MCAPI void setBlendTransitionTime(float);
    /**
     * @hash   -930611124
     * @symbol  ?setVariables\@ActorAnimationControllerState\@\@QEBAXAEAVRenderParams\@\@\@Z
     */
    MCAPI void setVariables(class RenderParams &) const;

};