// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESSActionDownFaceUpType : uint8;
enum class ESSMoveCommand : uint8;
struct FSSMoveParam;
struct FSSAttackParam;
class UELSSActionStateBase;
struct FSSStateTransitParam;
enum class ESSActionTransitTrigger : uint8;
class AActor;
struct FSSDamageReactionParam;
class UCharacterMovementComponent;
enum class ESSReactionParamCategory : uint8;
struct FELSSActionStateMovementAdjust;
struct FVector;
class UAnimMontage;
struct FTransform;
#ifdef ABP_200508_ELSSActionStatePlayerComponent_generated_h
#error "ELSSActionStatePlayerComponent.generated.h already included, missing '#pragma once' in ELSSActionStatePlayerComponent.h"
#endif
#define ABP_200508_ELSSActionStatePlayerComponent_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStatePlayerComponent_h_28_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStatePlayerComponent_h_28_RPC_WRAPPERS \
	virtual void BeginStateMulticast_Implementation(FSSStateTransitParam const& transitParam); \
	virtual void LandMultiCast_Implementation(uint32 inStateHash, uint32 inServerTransitId); \
 \
	DECLARE_FUNCTION(execBeginAirDamageState); \
	DECLARE_FUNCTION(execBeginBlowState); \
	DECLARE_FUNCTION(execBeginDamageState); \
	DECLARE_FUNCTION(execBeginDamageStateForceDead); \
	DECLARE_FUNCTION(execBeginDamageStateForceKo); \
	DECLARE_FUNCTION(execBeginDownState); \
	DECLARE_FUNCTION(execBeginIdleState); \
	DECLARE_FUNCTION(execBeginMove); \
	DECLARE_FUNCTION(execBeginMoveByExternalParam); \
	DECLARE_FUNCTION(execBeginStateByClass); \
	DECLARE_FUNCTION(execBeginStateByClassNative); \
	DECLARE_FUNCTION(execBeginStateMulticast); \
	DECLARE_FUNCTION(execBeginStateOnTrigger); \
	DECLARE_FUNCTION(execBeginSyncReceiverState); \
	DECLARE_FUNCTION(execChangeReactionParamSpecify); \
	DECLARE_FUNCTION(execChangeReactionParamWaitSituation); \
	DECLARE_FUNCTION(execChangeReactionParamWallHit); \
	DECLARE_FUNCTION(execChangeReactionParamWallOver); \
	DECLARE_FUNCTION(execCheckLocallyControlled); \
	DECLARE_FUNCTION(execExecuteLand); \
	DECLARE_FUNCTION(execExecuteTrigger); \
	DECLARE_FUNCTION(execFindStateByHash); \
	DECLARE_FUNCTION(execFinishMovementAdjust); \
	DECLARE_FUNCTION(execFlushReservedTransit); \
	DECLARE_FUNCTION(execGetAirDamageState); \
	DECLARE_FUNCTION(execGetCurrentMoveCommand); \
	DECLARE_FUNCTION(execGetCurrentMoveId); \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execGetDamageReactionParam); \
	DECLARE_FUNCTION(execGetDamageReactionRowName); \
	DECLARE_FUNCTION(execGetDamageState); \
	DECLARE_FUNCTION(execGetDeadDamageReactionRowName); \
	DECLARE_FUNCTION(execGetDefaultCharaMovement); \
	DECLARE_FUNCTION(execGetDefaultReactionRowName); \
	DECLARE_FUNCTION(execGetDoubleJumpLandState); \
	DECLARE_FUNCTION(execGetDoubleJumpState); \
	DECLARE_FUNCTION(execGetGuardState); \
	DECLARE_FUNCTION(execGetGuardStopState); \
	DECLARE_FUNCTION(execGetIdleState); \
	DECLARE_FUNCTION(execGetJumpState); \
	DECLARE_FUNCTION(execGetKoDamageReactionRowName); \
	DECLARE_FUNCTION(execGetLandState); \
	DECLARE_FUNCTION(execGetMovementAdjust); \
	DECLARE_FUNCTION(execGetPlayableMove); \
	DECLARE_FUNCTION(execGetReceiverState); \
	DECLARE_FUNCTION(execGetReviveState); \
	DECLARE_FUNCTION(execGetRunJumpLandState); \
	DECLARE_FUNCTION(execGetRunJumpState); \
	DECLARE_FUNCTION(execGetStateTimeCount); \
	DECLARE_FUNCTION(execGetTauntState); \
	DECLARE_FUNCTION(execGetWaitSituationState); \
	DECLARE_FUNCTION(execIsActiveInterpIdeal); \
	DECLARE_FUNCTION(execIsAttackState); \
	DECLARE_FUNCTION(execIsBackDamage); \
	DECLARE_FUNCTION(execIsCompleteUseItemState); \
	DECLARE_FUNCTION(execIsDownState); \
	DECLARE_FUNCTION(execIsDrivingHorseVehicleState); \
	DECLARE_FUNCTION(execIsDrivingState); \
	DECLARE_FUNCTION(execIsDrivingWheeledVehicleState); \
	DECLARE_FUNCTION(execIsGuardState); \
	DECLARE_FUNCTION(execIsIdleState); \
	DECLARE_FUNCTION(execIsInAir); \
	DECLARE_FUNCTION(execIsInteractState); \
	DECLARE_FUNCTION(execIsJumpState); \
	DECLARE_FUNCTION(execIsKoIdleState); \
	DECLARE_FUNCTION(execIsLandState); \
	DECLARE_FUNCTION(execIsNearlyIdleState); \
	DECLARE_FUNCTION(execIsPickupVisible); \
	DECLARE_FUNCTION(execIsReactionState); \
	DECLARE_FUNCTION(execIsRunJumpState); \
	DECLARE_FUNCTION(execIsUseItemState); \
	DECLARE_FUNCTION(execIsWaitSituationState); \
	DECLARE_FUNCTION(execLandMultiCast); \
	DECLARE_FUNCTION(execPerformWallHitReaction); \
	DECLARE_FUNCTION(execReplaceMontage); \
	DECLARE_FUNCTION(execReplaceMontageByMove); \
	DECLARE_FUNCTION(execReplaceMontageByPickup); \
	DECLARE_FUNCTION(execReplaceMontageByPlayer); \
	DECLARE_FUNCTION(execReplaceReceiverMontageByMove); \
	DECLARE_FUNCTION(execRequestTransit); \
	DECLARE_FUNCTION(execRestartIfReplaced); \
	DECLARE_FUNCTION(execSetDamageReactionParam); \
	DECLARE_FUNCTION(execSetDisableBlendOut); \
	DECLARE_FUNCTION(execSetDisablePendingTransit); \
	DECLARE_FUNCTION(execSetDisableStateMulticast); \
	DECLARE_FUNCTION(execSetInterpIdealTransform); \
	DECLARE_FUNCTION(execSetMovementAdjust); \
	DECLARE_FUNCTION(execSetupReplacedMontageParam); \
	DECLARE_FUNCTION(execShouldDisableAcceleration); \
	DECLARE_FUNCTION(execStartInterpIdealTransform); \
	DECLARE_FUNCTION(execUpdateDamageReactionParam); \
	DECLARE_FUNCTION(execUpdateInterpolateIdealTransform); \
	DECLARE_FUNCTION(execUpdateLanding);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStatePlayerComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BeginStateMulticast_Implementation(FSSStateTransitParam const& transitParam); \
	virtual void LandMultiCast_Implementation(uint32 inStateHash, uint32 inServerTransitId); \
 \
	DECLARE_FUNCTION(execBeginAirDamageState); \
	DECLARE_FUNCTION(execBeginBlowState); \
	DECLARE_FUNCTION(execBeginDamageState); \
	DECLARE_FUNCTION(execBeginDamageStateForceDead); \
	DECLARE_FUNCTION(execBeginDamageStateForceKo); \
	DECLARE_FUNCTION(execBeginDownState); \
	DECLARE_FUNCTION(execBeginIdleState); \
	DECLARE_FUNCTION(execBeginMove); \
	DECLARE_FUNCTION(execBeginMoveByExternalParam); \
	DECLARE_FUNCTION(execBeginStateByClass); \
	DECLARE_FUNCTION(execBeginStateByClassNative); \
	DECLARE_FUNCTION(execBeginStateMulticast); \
	DECLARE_FUNCTION(execBeginStateOnTrigger); \
	DECLARE_FUNCTION(execBeginSyncReceiverState); \
	DECLARE_FUNCTION(execChangeReactionParamSpecify); \
	DECLARE_FUNCTION(execChangeReactionParamWaitSituation); \
	DECLARE_FUNCTION(execChangeReactionParamWallHit); \
	DECLARE_FUNCTION(execChangeReactionParamWallOver); \
	DECLARE_FUNCTION(execCheckLocallyControlled); \
	DECLARE_FUNCTION(execExecuteLand); \
	DECLARE_FUNCTION(execExecuteTrigger); \
	DECLARE_FUNCTION(execFindStateByHash); \
	DECLARE_FUNCTION(execFinishMovementAdjust); \
	DECLARE_FUNCTION(execFlushReservedTransit); \
	DECLARE_FUNCTION(execGetAirDamageState); \
	DECLARE_FUNCTION(execGetCurrentMoveCommand); \
	DECLARE_FUNCTION(execGetCurrentMoveId); \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execGetDamageReactionParam); \
	DECLARE_FUNCTION(execGetDamageReactionRowName); \
	DECLARE_FUNCTION(execGetDamageState); \
	DECLARE_FUNCTION(execGetDeadDamageReactionRowName); \
	DECLARE_FUNCTION(execGetDefaultCharaMovement); \
	DECLARE_FUNCTION(execGetDefaultReactionRowName); \
	DECLARE_FUNCTION(execGetDoubleJumpLandState); \
	DECLARE_FUNCTION(execGetDoubleJumpState); \
	DECLARE_FUNCTION(execGetGuardState); \
	DECLARE_FUNCTION(execGetGuardStopState); \
	DECLARE_FUNCTION(execGetIdleState); \
	DECLARE_FUNCTION(execGetJumpState); \
	DECLARE_FUNCTION(execGetKoDamageReactionRowName); \
	DECLARE_FUNCTION(execGetLandState); \
	DECLARE_FUNCTION(execGetMovementAdjust); \
	DECLARE_FUNCTION(execGetPlayableMove); \
	DECLARE_FUNCTION(execGetReceiverState); \
	DECLARE_FUNCTION(execGetReviveState); \
	DECLARE_FUNCTION(execGetRunJumpLandState); \
	DECLARE_FUNCTION(execGetRunJumpState); \
	DECLARE_FUNCTION(execGetStateTimeCount); \
	DECLARE_FUNCTION(execGetTauntState); \
	DECLARE_FUNCTION(execGetWaitSituationState); \
	DECLARE_FUNCTION(execIsActiveInterpIdeal); \
	DECLARE_FUNCTION(execIsAttackState); \
	DECLARE_FUNCTION(execIsBackDamage); \
	DECLARE_FUNCTION(execIsCompleteUseItemState); \
	DECLARE_FUNCTION(execIsDownState); \
	DECLARE_FUNCTION(execIsDrivingHorseVehicleState); \
	DECLARE_FUNCTION(execIsDrivingState); \
	DECLARE_FUNCTION(execIsDrivingWheeledVehicleState); \
	DECLARE_FUNCTION(execIsGuardState); \
	DECLARE_FUNCTION(execIsIdleState); \
	DECLARE_FUNCTION(execIsInAir); \
	DECLARE_FUNCTION(execIsInteractState); \
	DECLARE_FUNCTION(execIsJumpState); \
	DECLARE_FUNCTION(execIsKoIdleState); \
	DECLARE_FUNCTION(execIsLandState); \
	DECLARE_FUNCTION(execIsNearlyIdleState); \
	DECLARE_FUNCTION(execIsPickupVisible); \
	DECLARE_FUNCTION(execIsReactionState); \
	DECLARE_FUNCTION(execIsRunJumpState); \
	DECLARE_FUNCTION(execIsUseItemState); \
	DECLARE_FUNCTION(execIsWaitSituationState); \
	DECLARE_FUNCTION(execLandMultiCast); \
	DECLARE_FUNCTION(execPerformWallHitReaction); \
	DECLARE_FUNCTION(execReplaceMontage); \
	DECLARE_FUNCTION(execReplaceMontageByMove); \
	DECLARE_FUNCTION(execReplaceMontageByPickup); \
	DECLARE_FUNCTION(execReplaceMontageByPlayer); \
	DECLARE_FUNCTION(execReplaceReceiverMontageByMove); \
	DECLARE_FUNCTION(execRequestTransit); \
	DECLARE_FUNCTION(execRestartIfReplaced); \
	DECLARE_FUNCTION(execSetDamageReactionParam); \
	DECLARE_FUNCTION(execSetDisableBlendOut); \
	DECLARE_FUNCTION(execSetDisablePendingTransit); \
	DECLARE_FUNCTION(execSetDisableStateMulticast); \
	DECLARE_FUNCTION(execSetInterpIdealTransform); \
	DECLARE_FUNCTION(execSetMovementAdjust); \
	DECLARE_FUNCTION(execSetupReplacedMontageParam); \
	DECLARE_FUNCTION(execShouldDisableAcceleration); \
	DECLARE_FUNCTION(execStartInterpIdealTransform); \
	DECLARE_FUNCTION(execUpdateDamageReactionParam); \
	DECLARE_FUNCTION(execUpdateInterpolateIdealTransform); \
	DECLARE_FUNCTION(execUpdateLanding);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStatePlayerComponent_h_28_EVENT_PARMS \
	struct ELSSActionStatePlayerComponent_eventBeginStateMulticast_Parms \
	{ \
		FSSStateTransitParam transitParam; \
	}; \
	struct ELSSActionStatePlayerComponent_eventLandMultiCast_Parms \
	{ \
		uint32 inStateHash; \
		uint32 inServerTransitId; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStatePlayerComponent_h_28_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStatePlayerComponent_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSActionStatePlayerComponent(); \
	friend struct Z_Construct_UClass_UELSSActionStatePlayerComponent_Statics; \
public: \
	DECLARE_CLASS(UELSSActionStatePlayerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSActionStatePlayerComponent)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStatePlayerComponent_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUELSSActionStatePlayerComponent(); \
	friend struct Z_Construct_UClass_UELSSActionStatePlayerComponent_Statics; \
public: \
	DECLARE_CLASS(UELSSActionStatePlayerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSActionStatePlayerComponent)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStatePlayerComponent_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSActionStatePlayerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSActionStatePlayerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSActionStatePlayerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSActionStatePlayerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSActionStatePlayerComponent(UELSSActionStatePlayerComponent&&); \
	NO_API UELSSActionStatePlayerComponent(const UELSSActionStatePlayerComponent&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStatePlayerComponent_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSActionStatePlayerComponent(UELSSActionStatePlayerComponent&&); \
	NO_API UELSSActionStatePlayerComponent(const UELSSActionStatePlayerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSActionStatePlayerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSActionStatePlayerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSActionStatePlayerComponent)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStatePlayerComponent_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DonePrepare() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, DonePrepare); } \
	FORCEINLINE static uint32 __PPO__States() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, States); } \
	FORCEINLINE static uint32 __PPO__IdleState() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, IdleState); } \
	FORCEINLINE static uint32 __PPO__JumpState() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, JumpState); } \
	FORCEINLINE static uint32 __PPO__HighFlyJumpState() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, HighFlyJumpState); } \
	FORCEINLINE static uint32 __PPO__RunJumpState() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, RunJumpState); } \
	FORCEINLINE static uint32 __PPO__HighFlyRunJumpState() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, HighFlyRunJumpState); } \
	FORCEINLINE static uint32 __PPO__DoubleJumpState() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, DoubleJumpState); } \
	FORCEINLINE static uint32 __PPO__LandState() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, LandState); } \
	FORCEINLINE static uint32 __PPO__RunJumpLandState() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, RunJumpLandState); } \
	FORCEINLINE static uint32 __PPO__DoubleJumpLandState() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, DoubleJumpLandState); } \
	FORCEINLINE static uint32 __PPO__SyncReceiverState() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, SyncReceiverState); } \
	FORCEINLINE static uint32 __PPO__DamageState() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, DamageState); } \
	FORCEINLINE static uint32 __PPO__AirDamageState() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, AirDamageState); } \
	FORCEINLINE static uint32 __PPO__BlowState() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, BlowState); } \
	FORCEINLINE static uint32 __PPO__DownState() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, DownState); } \
	FORCEINLINE static uint32 __PPO__WallHitState() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, WallHitState); } \
	FORCEINLINE static uint32 __PPO__WallOverState() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, WallOverState); } \
	FORCEINLINE static uint32 __PPO__WaitSituationState() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, WaitSituationState); } \
	FORCEINLINE static uint32 __PPO__KoIdleState() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, KoIdleState); } \
	FORCEINLINE static uint32 __PPO__InteractState() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, InteractState); } \
	FORCEINLINE static uint32 __PPO__UseItemState() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, UseItemState); } \
	FORCEINLINE static uint32 __PPO__CompleteUseItemState() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, CompleteUseItemState); } \
	FORCEINLINE static uint32 __PPO__DrivingState() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, DrivingState); } \
	FORCEINLINE static uint32 __PPO__HorseState() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, HorseState); } \
	FORCEINLINE static uint32 __PPO__GunAimState() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, GunAimState); } \
	FORCEINLINE static uint32 __PPO__ThrowWeaponAimState() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, ThrowWeaponAimState); } \
	FORCEINLINE static uint32 __PPO__PutTrapAimState() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, PutTrapAimState); } \
	FORCEINLINE static uint32 __PPO__GuardState() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, GuardState); } \
	FORCEINLINE static uint32 __PPO__GuardStopState() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, GuardStopState); } \
	FORCEINLINE static uint32 __PPO__TauntState() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, TauntState); } \
	FORCEINLINE static uint32 __PPO__ReviveState() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, ReviveState); } \
	FORCEINLINE static uint32 __PPO__StateInsts() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, StateInsts); } \
	FORCEINLINE static uint32 __PPO__LocalState() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, LocalState); } \
	FORCEINLINE static uint32 __PPO__StateTimeCount() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, StateTimeCount); } \
	FORCEINLINE static uint32 __PPO__PrevInAir() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, PrevInAir); } \
	FORCEINLINE static uint32 __PPO__LastRequestId() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, LastRequestId); } \
	FORCEINLINE static uint32 __PPO__LastServerTransitId() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, LastServerTransitId); } \
	FORCEINLINE static uint32 __PPO__LastExecutedServerTransitId() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, LastExecutedServerTransitId); } \
	FORCEINLINE static uint32 __PPO__ReservedTransitParam() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, ReservedTransitParam); } \
	FORCEINLINE static uint32 __PPO__PendingTransits() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, PendingTransits); } \
	FORCEINLINE static uint32 __PPO__bPendingExpired() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, bPendingExpired); } \
	FORCEINLINE static uint32 __PPO__PendingDamageReaction() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, PendingDamageReaction); } \
	FORCEINLINE static uint32 __PPO__DisableStateMulticast() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, DisableStateMulticast); } \
	FORCEINLINE static uint32 __PPO__DisablePendingTransit() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, DisablePendingTransit); } \
	FORCEINLINE static uint32 __PPO__DefaultMovementObj() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, DefaultMovementObj); } \
	FORCEINLINE static uint32 __PPO__DefaultMovementAdjust() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, DefaultMovementAdjust); } \
	FORCEINLINE static uint32 __PPO__MovementAdjustStateHash() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, MovementAdjustStateHash); } \
	FORCEINLINE static uint32 __PPO__CurrentMovementAdjust() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, CurrentMovementAdjust); } \
	FORCEINLINE static uint32 __PPO__MovementAdjustPlayTime() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, MovementAdjustPlayTime); } \
	FORCEINLINE static uint32 __PPO__DisableRepMoveDuration() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, DisableRepMoveDuration); } \
	FORCEINLINE static uint32 __PPO__StartedMove() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, StartedMove); } \
	FORCEINLINE static uint32 __PPO__CurrentMove() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, CurrentMove); } \
	FORCEINLINE static uint32 __PPO__CurrentMoveCommand() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, CurrentMoveCommand); } \
	FORCEINLINE static uint32 __PPO__CurrentMoveParam() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, CurrentMoveParam); } \
	FORCEINLINE static uint32 __PPO__CurrentMoveAttackParams() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, CurrentMoveAttackParams); } \
	FORCEINLINE static uint32 __PPO__PlayerMontageReplaceMap() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, PlayerMontageReplaceMap); } \
	FORCEINLINE static uint32 __PPO__PickupMontageReplaceMap() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, PickupMontageReplaceMap); } \
	FORCEINLINE static uint32 __PPO__DefaultIdleMontage() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, DefaultIdleMontage); } \
	FORCEINLINE static uint32 __PPO__DefaultIdleMontageFemale() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, DefaultIdleMontageFemale); } \
	FORCEINLINE static uint32 __PPO__UseExternalParams() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, UseExternalParams); } \
	FORCEINLINE static uint32 __PPO__PrevUnmovable() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, PrevUnmovable); } \
	FORCEINLINE static uint32 __PPO__DefaultReactionRowName() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, DefaultReactionRowName); } \
	FORCEINLINE static uint32 __PPO__DefaultReactionRowNameBlow() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, DefaultReactionRowNameBlow); } \
	FORCEINLINE static uint32 __PPO__KoDamageReactionRowName() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, KoDamageReactionRowName); } \
	FORCEINLINE static uint32 __PPO__DeadDamageReactionRowName() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, DeadDamageReactionRowName); } \
	FORCEINLINE static uint32 __PPO__CurrentDamageReactionRowName() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, CurrentDamageReactionRowName); } \
	FORCEINLINE static uint32 __PPO__DamageReactionParam() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, DamageReactionParam); } \
	FORCEINLINE static uint32 __PPO__BackDamage() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, BackDamage); } \
	FORCEINLINE static uint32 __PPO__InterpIdeal() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, InterpIdeal); } \
	FORCEINLINE static uint32 __PPO__ActionSpeedRate() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, ActionSpeedRate); } \
	FORCEINLINE static uint32 __PPO__GuardReactionParam() { return STRUCT_OFFSET(UELSSActionStatePlayerComponent, GuardReactionParam); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStatePlayerComponent_h_26_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStatePlayerComponent_h_28_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStatePlayerComponent_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStatePlayerComponent_h_28_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStatePlayerComponent_h_28_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStatePlayerComponent_h_28_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStatePlayerComponent_h_28_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStatePlayerComponent_h_28_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStatePlayerComponent_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStatePlayerComponent_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStatePlayerComponent_h_28_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStatePlayerComponent_h_28_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStatePlayerComponent_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStatePlayerComponent_h_28_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStatePlayerComponent_h_28_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStatePlayerComponent_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSActionStatePlayerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStatePlayerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
