/**
 * @file  ServerAutoStepSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerAutoStepSystem.
 *
 */
class ServerAutoStepSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERAUTOSTEPSYSTEM
public:
    class ServerAutoStepSystem& operator=(class ServerAutoStepSystem const &) = delete;
    ServerAutoStepSystem(class ServerAutoStepSystem const &) = delete;
    ServerAutoStepSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1581736727
     */
    virtual ~ServerAutoStepSystem();
    /**
     * @vftbl  1
     * @hash   -253879375
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @hash   -1315668094
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol ?tick@ServerAutoStepSystem@@EEAAXAEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UCanStandOnSnowFlag@@@@V?$FlagComponent@UHasLightweightFamilyFlag@@@@V?$FlagComponent@UIsWorldBuilderFlag@@@@V?$FlagComponent@UHorseFlag@@@@V?$FlagComponent@UMobFlag@@@@V?$FlagComponent@UParrotFlag@@@@UVehicleComponent@@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UAutoStepRequestFlag@@@@V?$FlagComponent@UFallingBlockFlag@@@@USynchedActorDataComponent@@V?$FlagComponent@UCollidableMobFlag@@@@@@U?$Read@UActorTypeComponent@@UFallDistanceComponent@@UVehicleComponent@@UMobBodyRotationComponent@@UPassengerComponent@@URenderRotationComponent@@UStandAnimationComponent@@UStateVectorComponent@@UAABBShapeComponent@@UActorHeadRotationComponent@@UActorRotationComponent@@UOffsetsComponent@@USynchedActorDataComponent@@UConstBlockSourceComponent@@UMaxAutoStepComponent@@USpatialEntityFetcherComponent@@@@U?$Write@UAABBShapeComponent@@V?$FlagComponent@UCollidableMobNearFlag@@@@UMoveRequestComponent@@USlideOffsetComponent@@USubBBsComponent@@USideBySidePlaybackBlocksComponent@@@@U?$AddRemove@$$V@@U?$GlobalRead@$$V@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@Z
     * @hash   -168477030
     */
    virtual void tick(class StrictExecutionContext<struct Filter<class FlagComponent<struct CanStandOnSnowFlag>, class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct IsWorldBuilderFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct AutoStepRequestFlag>, class FlagComponent<struct FallingBlockFlag>, struct SynchedActorDataComponent, class FlagComponent<struct CollidableMobFlag>>, struct Read<struct ActorTypeComponent, struct FallDistanceComponent, struct VehicleComponent, struct MobBodyRotationComponent, struct PassengerComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct StateVectorComponent, struct AABBShapeComponent, struct ActorHeadRotationComponent, struct ActorRotationComponent, struct OffsetsComponent, struct SynchedActorDataComponent, struct ConstBlockSourceComponent, struct MaxAutoStepComponent, struct SpatialEntityFetcherComponent>, struct Write<struct AABBShapeComponent, class FlagComponent<struct CollidableMobNearFlag>, struct MoveRequestComponent, struct SlideOffsetComponent, struct SubBBsComponent, struct SideBySidePlaybackBlocksComponent>, struct AddRemove<>, struct GlobalRead<>, struct GlobalWrite<>, struct EntityFactoryT<>> &);
    /**
     * @symbol ?createServerAutoStepSystem@ServerAutoStepSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   704178532
     */
    MCAPI static struct TickingSystemWithInfo createServerAutoStepSystem();
    /**
     * @symbol ?createServerAutoStepSystemSideBySide@ServerAutoStepSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   1963004350
     */
    MCAPI static struct TickingSystemWithInfo createServerAutoStepSystemSideBySide();

};