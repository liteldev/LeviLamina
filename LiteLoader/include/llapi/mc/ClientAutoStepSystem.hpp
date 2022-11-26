/**
 * @file  ClientAutoStepSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ClientAutoStepSystem.
 *
 */
class ClientAutoStepSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTAUTOSTEPSYSTEM
public:
    class ClientAutoStepSystem& operator=(class ClientAutoStepSystem const &) = delete;
    ClientAutoStepSystem(class ClientAutoStepSystem const &) = delete;
    ClientAutoStepSystem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -726461025
     */
    virtual ~ClientAutoStepSystem();
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
     * @symbol ?tick@ClientAutoStepSystem@@EEAAXAEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UCanStandOnSnowFlag@@@@V?$FlagComponent@UHasLightweightFamilyFlag@@@@V?$FlagComponent@UIsWorldBuilderFlag@@@@V?$FlagComponent@UHorseFlag@@@@V?$FlagComponent@UMobFlag@@@@V?$FlagComponent@UParrotFlag@@@@UVehicleComponent@@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UAutoStepRequestFlag@@@@V?$FlagComponent@UFallingBlockFlag@@@@USynchedActorDataComponent@@V?$FlagComponent@UCollidableMobFlag@@@@V?$FlagComponent@ULocalPlayerComponentFlag@@@@@@U?$Read@UActorTypeComponent@@UFallDistanceComponent@@UVehicleComponent@@UMobBodyRotationComponent@@UPassengerComponent@@URenderRotationComponent@@UStandAnimationComponent@@UStateVectorComponent@@UAABBShapeComponent@@UActorHeadRotationComponent@@UActorRotationComponent@@UOffsetsComponent@@USynchedActorDataComponent@@UConstBlockSourceComponent@@UMaxAutoStepComponent@@USpatialEntityFetcherComponent@@@@U?$Write@UAABBShapeComponent@@V?$FlagComponent@UCollidableMobNearFlag@@@@UMoveRequestComponent@@USlideOffsetComponent@@USubBBsComponent@@USideBySidePlaybackBlocksComponent@@@@U?$AddRemove@$$V@@U?$GlobalRead@$$V@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@Z
     * @hash   1725459743
     */
    virtual void tick(class StrictExecutionContext<struct Filter<class FlagComponent<struct CanStandOnSnowFlag>, class FlagComponent<struct HasLightweightFamilyFlag>, class FlagComponent<struct IsWorldBuilderFlag>, class FlagComponent<struct HorseFlag>, class FlagComponent<struct MobFlag>, class FlagComponent<struct ParrotFlag>, struct VehicleComponent, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct AutoStepRequestFlag>, class FlagComponent<struct FallingBlockFlag>, struct SynchedActorDataComponent, class FlagComponent<struct CollidableMobFlag>, class FlagComponent<struct LocalPlayerComponentFlag>>, struct Read<struct ActorTypeComponent, struct FallDistanceComponent, struct VehicleComponent, struct MobBodyRotationComponent, struct PassengerComponent, struct RenderRotationComponent, struct StandAnimationComponent, struct StateVectorComponent, struct AABBShapeComponent, struct ActorHeadRotationComponent, struct ActorRotationComponent, struct OffsetsComponent, struct SynchedActorDataComponent, struct ConstBlockSourceComponent, struct MaxAutoStepComponent, struct SpatialEntityFetcherComponent>, struct Write<struct AABBShapeComponent, class FlagComponent<struct CollidableMobNearFlag>, struct MoveRequestComponent, struct SlideOffsetComponent, struct SubBBsComponent, struct SideBySidePlaybackBlocksComponent>, struct AddRemove<>, struct GlobalRead<>, struct GlobalWrite<>, struct EntityFactoryT<>> &);
    /**
     * @symbol ?createClientAutoStepSystem@ClientAutoStepSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   1781709892
     */
    MCAPI static struct TickingSystemWithInfo createClientAutoStepSystem();
    /**
     * @symbol ?createClientAutoStepSystemSideBySide@ClientAutoStepSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   1795313822
     */
    MCAPI static struct TickingSystemWithInfo createClientAutoStepSystemSideBySide();

};