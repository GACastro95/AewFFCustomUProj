// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
class UELSSCharacterMovementComponent;
class UAnimMontage;
enum class ESSActionCameraID : uint8;
struct FSSDamageReactionParam;
enum class ESSDamageReceiverState : uint8;
class AActor;
class ACharacter;
class AELSSPlayer;
enum class ESSActionStateSyncMode : uint8;
enum class ESSActionTransitTrigger : uint8;
enum class ESSMoveCommand : uint8;
class UELSSActionStateBase;
class UELSSActionStatePlayerComponent;
class UAnimInstance;
enum class EActionStateMontagePlayResult : uint8;
#ifdef ABP_200508_ELSSActionStateBase_generated_h
#error "ELSSActionStateBase.generated.h already included, missing '#pragma once' in ELSSActionStateBase.h"
#endif
#define ABP_200508_ELSSActionStateBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStateBase_h_28_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStateBase_h_28_RPC_WRAPPERS \
	virtual bool CanDisappear_Implementation() const; \
	virtual bool CanLand_Implementation() const; \
	virtual UAnimMontage* GetCurrentMontage_Implementation() const; \
	virtual ESSDamageReceiverState GetDamageReceiverState_Implementation() const; \
	virtual UAnimMontage* GetFirstMontage_Implementation() const; \
	virtual void GetInvolveDamageAttackId_Implementation(int32& outMoveId, int32& outAttackHitId) const; \
	virtual void GetInvolveFeedbackDamageAttackId_Implementation(int32& outMoveId, int32& outAttackHitId) const; \
	virtual float GetMoveSpeedScale_Implementation() const; \
	virtual UAnimMontage* GetReceiverMontage_Implementation(UAnimMontage* inAttackerMontage); \
	virtual ESSActionStateSyncMode GetSyncMode_Implementation() const; \
	virtual TSubclassOf<UELSSActionStateBase>  GetTransitableState_Implementation(ESSActionTransitTrigger transitTrigger) const; \
	virtual bool IgnoreMovementCorrect_Implementation() const; \
	virtual bool IsAffectedBySlip_Implementation() const; \
	virtual bool IsEnableMovement_Implementation() const; \
	virtual bool IsEnablePickupVisible_Implementation() const; \
	virtual bool IsEnableUpperBodyAnim_Implementation() const; \
	virtual bool IsInAir_Implementation() const; \
	virtual void OnBegin_Implementation(); \
	virtual void OnEnd_Implementation(); \
	virtual void OnLand_Implementation(); \
	virtual void OnMovable_Implementation(); \
	virtual void OnNotifyJumpUp_Implementation(); \
	virtual void OnNotifyMotionEnd_Implementation(); \
	virtual void OnNotifySyncOff_Implementation(); \
	virtual void OnPrePlayFirstMontage_Implementation(); \
	virtual void OnSimulateLand_Implementation(); \
	virtual void OnTick_Implementation(float DeltaTime); \
	virtual void PlayMontage_Implementation(UAnimMontage* inMontage); \
	virtual void ReserveMontage_Implementation(UAnimMontage* inMontage); \
	virtual void StopMontage_Implementation(float BlendOutTime); \
 \
	DECLARE_FUNCTION(execActivate); \
	DECLARE_FUNCTION(execCanDisappear); \
	DECLARE_FUNCTION(execCanLand); \
	DECLARE_FUNCTION(execCheckOwnerLocallyControlled); \
	DECLARE_FUNCTION(execDeactivate); \
	DECLARE_FUNCTION(execDetectSituationHitReaction); \
	DECLARE_FUNCTION(execGetCharacterMovement); \
	DECLARE_FUNCTION(execGetCurrentMontage); \
	DECLARE_FUNCTION(execGetCurrentMontageReplaced); \
	DECLARE_FUNCTION(execGetCurrentMoveActionCameraID); \
	DECLARE_FUNCTION(execGetDamageFallingMontage); \
	DECLARE_FUNCTION(execGetDamageLandMontage); \
	DECLARE_FUNCTION(execGetDamageReactionMontage); \
	DECLARE_FUNCTION(execGetDamageReactionParam); \
	DECLARE_FUNCTION(execGetDamageReceiverState); \
	DECLARE_FUNCTION(execGetFirstMontage); \
	DECLARE_FUNCTION(execGetInvolveDamageAttackId); \
	DECLARE_FUNCTION(execGetInvolveFeedbackDamageAttackId); \
	DECLARE_FUNCTION(execGetMaxLandingLevel); \
	DECLARE_FUNCTION(execGetMoveSpeedScale); \
	DECLARE_FUNCTION(execGetOwnerActor); \
	DECLARE_FUNCTION(execGetOwnerCharacter); \
	DECLARE_FUNCTION(execGetOwnerPlayerCharacter); \
	DECLARE_FUNCTION(execGetPlayingTime); \
	DECLARE_FUNCTION(execGetReceiverMontage); \
	DECLARE_FUNCTION(execGetSyncMode); \
	DECLARE_FUNCTION(execGetTransitableMove); \
	DECLARE_FUNCTION(execGetTransitableState); \
	DECLARE_FUNCTION(execGetTransitableStateDefault); \
	DECLARE_FUNCTION(execIgnoreMovementCorrect); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execIsAffectedBySlip); \
	DECLARE_FUNCTION(execIsEnableFallCancel); \
	DECLARE_FUNCTION(execIsEnableMovement); \
	DECLARE_FUNCTION(execIsEnablePickupVisible); \
	DECLARE_FUNCTION(execIsEnableUpperBodyAnim); \
	DECLARE_FUNCTION(execIsInAir); \
	DECLARE_FUNCTION(execNativeUpdate); \
	DECLARE_FUNCTION(execOnBegin); \
	DECLARE_FUNCTION(execOnEnd); \
	DECLARE_FUNCTION(execOnLand); \
	DECLARE_FUNCTION(execOnMovable); \
	DECLARE_FUNCTION(execOnNotifyJumpUp); \
	DECLARE_FUNCTION(execOnNotifyMotionEnd); \
	DECLARE_FUNCTION(execOnNotifySyncOff); \
	DECLARE_FUNCTION(execOnPrePlayFirstMontage); \
	DECLARE_FUNCTION(execOnSimulateLand); \
	DECLARE_FUNCTION(execOnTick); \
	DECLARE_FUNCTION(execPlayMontage); \
	DECLARE_FUNCTION(execPlayMontageBranch); \
	DECLARE_FUNCTION(execReserveMontage); \
	DECLARE_FUNCTION(execSetEnableCancelTransit); \
	DECLARE_FUNCTION(execSetEnableMovableTransit); \
	DECLARE_FUNCTION(execSetMontageLo); \
	DECLARE_FUNCTION(execSetMontageSt); \
	DECLARE_FUNCTION(execStopMontage); \
	DECLARE_FUNCTION(execUpdateMovementParam);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStateBase_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CanDisappear_Implementation() const; \
	virtual bool CanLand_Implementation() const; \
	virtual UAnimMontage* GetCurrentMontage_Implementation() const; \
	virtual ESSDamageReceiverState GetDamageReceiverState_Implementation() const; \
	virtual UAnimMontage* GetFirstMontage_Implementation() const; \
	virtual void GetInvolveDamageAttackId_Implementation(int32& outMoveId, int32& outAttackHitId) const; \
	virtual void GetInvolveFeedbackDamageAttackId_Implementation(int32& outMoveId, int32& outAttackHitId) const; \
	virtual float GetMoveSpeedScale_Implementation() const; \
	virtual UAnimMontage* GetReceiverMontage_Implementation(UAnimMontage* inAttackerMontage); \
	virtual ESSActionStateSyncMode GetSyncMode_Implementation() const; \
	virtual TSubclassOf<UELSSActionStateBase>  GetTransitableState_Implementation(ESSActionTransitTrigger transitTrigger) const; \
	virtual bool IgnoreMovementCorrect_Implementation() const; \
	virtual bool IsAffectedBySlip_Implementation() const; \
	virtual bool IsEnableMovement_Implementation() const; \
	virtual bool IsEnablePickupVisible_Implementation() const; \
	virtual bool IsEnableUpperBodyAnim_Implementation() const; \
	virtual bool IsInAir_Implementation() const; \
	virtual void OnBegin_Implementation(); \
	virtual void OnEnd_Implementation(); \
	virtual void OnLand_Implementation(); \
	virtual void OnMovable_Implementation(); \
	virtual void OnNotifyJumpUp_Implementation(); \
	virtual void OnNotifyMotionEnd_Implementation(); \
	virtual void OnNotifySyncOff_Implementation(); \
	virtual void OnPrePlayFirstMontage_Implementation(); \
	virtual void OnSimulateLand_Implementation(); \
	virtual void OnTick_Implementation(float DeltaTime); \
	virtual void PlayMontage_Implementation(UAnimMontage* inMontage); \
	virtual void ReserveMontage_Implementation(UAnimMontage* inMontage); \
	virtual void StopMontage_Implementation(float BlendOutTime); \
 \
	DECLARE_FUNCTION(execActivate); \
	DECLARE_FUNCTION(execCanDisappear); \
	DECLARE_FUNCTION(execCanLand); \
	DECLARE_FUNCTION(execCheckOwnerLocallyControlled); \
	DECLARE_FUNCTION(execDeactivate); \
	DECLARE_FUNCTION(execDetectSituationHitReaction); \
	DECLARE_FUNCTION(execGetCharacterMovement); \
	DECLARE_FUNCTION(execGetCurrentMontage); \
	DECLARE_FUNCTION(execGetCurrentMontageReplaced); \
	DECLARE_FUNCTION(execGetCurrentMoveActionCameraID); \
	DECLARE_FUNCTION(execGetDamageFallingMontage); \
	DECLARE_FUNCTION(execGetDamageLandMontage); \
	DECLARE_FUNCTION(execGetDamageReactionMontage); \
	DECLARE_FUNCTION(execGetDamageReactionParam); \
	DECLARE_FUNCTION(execGetDamageReceiverState); \
	DECLARE_FUNCTION(execGetFirstMontage); \
	DECLARE_FUNCTION(execGetInvolveDamageAttackId); \
	DECLARE_FUNCTION(execGetInvolveFeedbackDamageAttackId); \
	DECLARE_FUNCTION(execGetMaxLandingLevel); \
	DECLARE_FUNCTION(execGetMoveSpeedScale); \
	DECLARE_FUNCTION(execGetOwnerActor); \
	DECLARE_FUNCTION(execGetOwnerCharacter); \
	DECLARE_FUNCTION(execGetOwnerPlayerCharacter); \
	DECLARE_FUNCTION(execGetPlayingTime); \
	DECLARE_FUNCTION(execGetReceiverMontage); \
	DECLARE_FUNCTION(execGetSyncMode); \
	DECLARE_FUNCTION(execGetTransitableMove); \
	DECLARE_FUNCTION(execGetTransitableState); \
	DECLARE_FUNCTION(execGetTransitableStateDefault); \
	DECLARE_FUNCTION(execIgnoreMovementCorrect); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execIsAffectedBySlip); \
	DECLARE_FUNCTION(execIsEnableFallCancel); \
	DECLARE_FUNCTION(execIsEnableMovement); \
	DECLARE_FUNCTION(execIsEnablePickupVisible); \
	DECLARE_FUNCTION(execIsEnableUpperBodyAnim); \
	DECLARE_FUNCTION(execIsInAir); \
	DECLARE_FUNCTION(execNativeUpdate); \
	DECLARE_FUNCTION(execOnBegin); \
	DECLARE_FUNCTION(execOnEnd); \
	DECLARE_FUNCTION(execOnLand); \
	DECLARE_FUNCTION(execOnMovable); \
	DECLARE_FUNCTION(execOnNotifyJumpUp); \
	DECLARE_FUNCTION(execOnNotifyMotionEnd); \
	DECLARE_FUNCTION(execOnNotifySyncOff); \
	DECLARE_FUNCTION(execOnPrePlayFirstMontage); \
	DECLARE_FUNCTION(execOnSimulateLand); \
	DECLARE_FUNCTION(execOnTick); \
	DECLARE_FUNCTION(execPlayMontage); \
	DECLARE_FUNCTION(execPlayMontageBranch); \
	DECLARE_FUNCTION(execReserveMontage); \
	DECLARE_FUNCTION(execSetEnableCancelTransit); \
	DECLARE_FUNCTION(execSetEnableMovableTransit); \
	DECLARE_FUNCTION(execSetMontageLo); \
	DECLARE_FUNCTION(execSetMontageSt); \
	DECLARE_FUNCTION(execStopMontage); \
	DECLARE_FUNCTION(execUpdateMovementParam);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStateBase_h_28_EVENT_PARMS \
	struct ELSSActionStateBase_eventCanDisappear_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSActionStateBase_eventCanDisappear_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSActionStateBase_eventCanLand_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSActionStateBase_eventCanLand_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSActionStateBase_eventGetCurrentMontage_Parms \
	{ \
		UAnimMontage* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSActionStateBase_eventGetCurrentMontage_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct ELSSActionStateBase_eventGetDamageReceiverState_Parms \
	{ \
		ESSDamageReceiverState ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSActionStateBase_eventGetDamageReceiverState_Parms() \
			: ReturnValue((ESSDamageReceiverState)0) \
		{ \
		} \
	}; \
	struct ELSSActionStateBase_eventGetFirstMontage_Parms \
	{ \
		UAnimMontage* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSActionStateBase_eventGetFirstMontage_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct ELSSActionStateBase_eventGetInvolveDamageAttackId_Parms \
	{ \
		int32 outMoveId; \
		int32 outAttackHitId; \
	}; \
	struct ELSSActionStateBase_eventGetInvolveFeedbackDamageAttackId_Parms \
	{ \
		int32 outMoveId; \
		int32 outAttackHitId; \
	}; \
	struct ELSSActionStateBase_eventGetMoveSpeedScale_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSActionStateBase_eventGetMoveSpeedScale_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ELSSActionStateBase_eventGetReceiverMontage_Parms \
	{ \
		UAnimMontage* inAttackerMontage; \
		UAnimMontage* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSActionStateBase_eventGetReceiverMontage_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct ELSSActionStateBase_eventGetSyncMode_Parms \
	{ \
		ESSActionStateSyncMode ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSActionStateBase_eventGetSyncMode_Parms() \
			: ReturnValue((ESSActionStateSyncMode)0) \
		{ \
		} \
	}; \
	struct ELSSActionStateBase_eventGetTransitableState_Parms \
	{ \
		ESSActionTransitTrigger transitTrigger; \
		TSubclassOf<UELSSActionStateBase>  ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSActionStateBase_eventGetTransitableState_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct ELSSActionStateBase_eventIgnoreMovementCorrect_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSActionStateBase_eventIgnoreMovementCorrect_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSActionStateBase_eventIsAffectedBySlip_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSActionStateBase_eventIsAffectedBySlip_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSActionStateBase_eventIsEnableMovement_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSActionStateBase_eventIsEnableMovement_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSActionStateBase_eventIsEnablePickupVisible_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSActionStateBase_eventIsEnablePickupVisible_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSActionStateBase_eventIsEnableUpperBodyAnim_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSActionStateBase_eventIsEnableUpperBodyAnim_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSActionStateBase_eventIsInAir_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSActionStateBase_eventIsInAir_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELSSActionStateBase_eventOnTick_Parms \
	{ \
		float DeltaTime; \
	}; \
	struct ELSSActionStateBase_eventPlayMontage_Parms \
	{ \
		UAnimMontage* inMontage; \
	}; \
	struct ELSSActionStateBase_eventReserveMontage_Parms \
	{ \
		UAnimMontage* inMontage; \
	}; \
	struct ELSSActionStateBase_eventStopMontage_Parms \
	{ \
		float BlendOutTime; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStateBase_h_28_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStateBase_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSActionStateBase(); \
	friend struct Z_Construct_UClass_UELSSActionStateBase_Statics; \
public: \
	DECLARE_CLASS(UELSSActionStateBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSActionStateBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStateBase_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUELSSActionStateBase(); \
	friend struct Z_Construct_UClass_UELSSActionStateBase_Statics; \
public: \
	DECLARE_CLASS(UELSSActionStateBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSActionStateBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStateBase_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSActionStateBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSActionStateBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSActionStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSActionStateBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSActionStateBase(UELSSActionStateBase&&); \
	NO_API UELSSActionStateBase(const UELSSActionStateBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStateBase_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSActionStateBase(UELSSActionStateBase&&); \
	NO_API UELSSActionStateBase(const UELSSActionStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSActionStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSActionStateBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSActionStateBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStateBase_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SyncMode() { return STRUCT_OFFSET(UELSSActionStateBase, SyncMode); } \
	FORCEINLINE static uint32 __PPO__MontageSt() { return STRUCT_OFFSET(UELSSActionStateBase, MontageSt); } \
	FORCEINLINE static uint32 __PPO__MontageLo() { return STRUCT_OFFSET(UELSSActionStateBase, MontageLo); } \
	FORCEINLINE static uint32 __PPO__EnableMovement() { return STRUCT_OFFSET(UELSSActionStateBase, EnableMovement); } \
	FORCEINLINE static uint32 __PPO__FallLimitDuration() { return STRUCT_OFFSET(UELSSActionStateBase, FallLimitDuration); } \
	FORCEINLINE static uint32 __PPO__EnableUpperBodyAnim() { return STRUCT_OFFSET(UELSSActionStateBase, EnableUpperBodyAnim); } \
	FORCEINLINE static uint32 __PPO__ContinueInvolveParam() { return STRUCT_OFFSET(UELSSActionStateBase, ContinueInvolveParam); } \
	FORCEINLINE static uint32 __PPO__MovementAdjust() { return STRUCT_OFFSET(UELSSActionStateBase, MovementAdjust); } \
	FORCEINLINE static uint32 __PPO__LastUpdatedMovementAdjustTime() { return STRUCT_OFFSET(UELSSActionStateBase, LastUpdatedMovementAdjustTime); } \
	FORCEINLINE static uint32 __PPO__RotationRateScale() { return STRUCT_OFFSET(UELSSActionStateBase, RotationRateScale); } \
	FORCEINLINE static uint32 __PPO__CollisionHeightScale() { return STRUCT_OFFSET(UELSSActionStateBase, CollisionHeightScale); } \
	FORCEINLINE static uint32 __PPO__CollisionRadiusScale() { return STRUCT_OFFSET(UELSSActionStateBase, CollisionRadiusScale); } \
	FORCEINLINE static uint32 __PPO__MaxLandingLevel() { return STRUCT_OFFSET(UELSSActionStateBase, MaxLandingLevel); } \
	FORCEINLINE static uint32 __PPO__DefaultTransitable() { return STRUCT_OFFSET(UELSSActionStateBase, DefaultTransitable); } \
	FORCEINLINE static uint32 __PPO__CancelTransitable() { return STRUCT_OFFSET(UELSSActionStateBase, CancelTransitable); } \
	FORCEINLINE static uint32 __PPO__PlayingTime() { return STRUCT_OFFSET(UELSSActionStateBase, PlayingTime); } \
	FORCEINLINE static uint32 __PPO__OwnerComponent() { return STRUCT_OFFSET(UELSSActionStateBase, OwnerComponent); } \
	FORCEINLINE static uint32 __PPO__AnimInstance() { return STRUCT_OFFSET(UELSSActionStateBase, AnimInstance); } \
	FORCEINLINE static uint32 __PPO__CurrentMontageReplaced() { return STRUCT_OFFSET(UELSSActionStateBase, CurrentMontageReplaced); } \
	FORCEINLINE static uint32 __PPO__CurrentMontageBeforeReplace() { return STRUCT_OFFSET(UELSSActionStateBase, CurrentMontageBeforeReplace); } \
	FORCEINLINE static uint32 __PPO__ReservedMontage() { return STRUCT_OFFSET(UELSSActionStateBase, ReservedMontage); } \
	FORCEINLINE static uint32 __PPO__EnableCancelTransit() { return STRUCT_OFFSET(UELSSActionStateBase, EnableCancelTransit); } \
	FORCEINLINE static uint32 __PPO__EnableMovableTransit() { return STRUCT_OFFSET(UELSSActionStateBase, EnableMovableTransit); } \
	FORCEINLINE static uint32 __PPO__FallTimeCount() { return STRUCT_OFFSET(UELSSActionStateBase, FallTimeCount); } \
	FORCEINLINE static uint32 __PPO__LandingStarted() { return STRUCT_OFFSET(UELSSActionStateBase, LandingStarted); } \
	FORCEINLINE static uint32 __PPO__DisableBlendOut() { return STRUCT_OFFSET(UELSSActionStateBase, DisableBlendOut); } \
	FORCEINLINE static uint32 __PPO__DamageReceiverState() { return STRUCT_OFFSET(UELSSActionStateBase, DamageReceiverState); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStateBase_h_26_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStateBase_h_28_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStateBase_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStateBase_h_28_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStateBase_h_28_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStateBase_h_28_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStateBase_h_28_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStateBase_h_28_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStateBase_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStateBase_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStateBase_h_28_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStateBase_h_28_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStateBase_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStateBase_h_28_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStateBase_h_28_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStateBase_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSActionStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionStateBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
