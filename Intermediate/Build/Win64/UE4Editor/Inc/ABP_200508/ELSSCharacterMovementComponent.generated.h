// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
struct FSSMoveRequestHistory;
struct FSSMoveResponse;
#ifdef ABP_200508_ELSSCharacterMovementComponent_generated_h
#error "ELSSCharacterMovementComponent.generated.h already included, missing '#pragma once' in ELSSCharacterMovementComponent.h"
#endif
#define ABP_200508_ELSSCharacterMovementComponent_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacterMovementComponent_h_14_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacterMovementComponent_h_14_RPC_WRAPPERS \
	virtual void SSServerMove_Implementation(FSSMoveRequestHistory const& inRequest); \
	virtual void SSServerMoveResponse_Implementation(FSSMoveResponse const& response, int32 inMultiMoved); \
 \
	DECLARE_FUNCTION(execOrientDesiredRotationToAccelerate); \
	DECLARE_FUNCTION(execSetDesiredRotation); \
	DECLARE_FUNCTION(execSSServerMove); \
	DECLARE_FUNCTION(execSSServerMoveResponse);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacterMovementComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SSServerMove_Implementation(FSSMoveRequestHistory const& inRequest); \
	virtual void SSServerMoveResponse_Implementation(FSSMoveResponse const& response, int32 inMultiMoved); \
 \
	DECLARE_FUNCTION(execOrientDesiredRotationToAccelerate); \
	DECLARE_FUNCTION(execSetDesiredRotation); \
	DECLARE_FUNCTION(execSSServerMove); \
	DECLARE_FUNCTION(execSSServerMoveResponse);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacterMovementComponent_h_14_EVENT_PARMS \
	struct ELSSCharacterMovementComponent_eventSSServerMove_Parms \
	{ \
		FSSMoveRequestHistory inRequest; \
	}; \
	struct ELSSCharacterMovementComponent_eventSSServerMoveResponse_Parms \
	{ \
		FSSMoveResponse response; \
		int32 inMultiMoved; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacterMovementComponent_h_14_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacterMovementComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UELSSCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UELSSCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSCharacterMovementComponent)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacterMovementComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUELSSCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UELSSCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UELSSCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSCharacterMovementComponent)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacterMovementComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSCharacterMovementComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSCharacterMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSCharacterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSCharacterMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSCharacterMovementComponent(UELSSCharacterMovementComponent&&); \
	NO_API UELSSCharacterMovementComponent(const UELSSCharacterMovementComponent&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacterMovementComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSCharacterMovementComponent(UELSSCharacterMovementComponent&&); \
	NO_API UELSSCharacterMovementComponent(const UELSSCharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSCharacterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSCharacterMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSCharacterMovementComponent)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacterMovementComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LastRootMotionVelocity() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, LastRootMotionVelocity); } \
	FORCEINLINE static uint32 __PPO__StartedVelocity() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, StartedVelocity); } \
	FORCEINLINE static uint32 __PPO__DesiredRotation() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, DesiredRotation); } \
	FORCEINLINE static uint32 __PPO__DesiredRotationKeepDuration() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, DesiredRotationKeepDuration); } \
	FORCEINLINE static uint32 __PPO__bOrientDesiredRotationToAcc() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, bOrientDesiredRotationToAcc); } \
	FORCEINLINE static uint32 __PPO__LastReceivedServerMoveTimeStamp() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, LastReceivedServerMoveTimeStamp); } \
	FORCEINLINE static uint32 __PPO__IdealServerMoveTimeStamp() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, IdealServerMoveTimeStamp); } \
	FORCEINLINE static uint32 __PPO__ServerMoveDelayCurrent() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, ServerMoveDelayCurrent); } \
	FORCEINLINE static uint32 __PPO__ServerMoveDelayMax() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, ServerMoveDelayMax); } \
	FORCEINLINE static uint32 __PPO__MoveHistory() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, MoveHistory); } \
	FORCEINLINE static uint32 __PPO__MoveHistorySend() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, MoveHistorySend); } \
	FORCEINLINE static uint32 __PPO__RequestTimeStamp() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, RequestTimeStamp); } \
	FORCEINLINE static uint32 __PPO__SavedRtt() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, SavedRtt); } \
	FORCEINLINE static uint32 __PPO__AutonomousDelay() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, AutonomousDelay); } \
	FORCEINLINE static uint32 __PPO__LastPredictTimeStamp() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, LastPredictTimeStamp); } \
	FORCEINLINE static uint32 __PPO__MoveResults() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, MoveResults); } \
	FORCEINLINE static uint32 __PPO__LastReceivedClientMoveResponseTimeStamp() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, LastReceivedClientMoveResponseTimeStamp); } \
	FORCEINLINE static uint32 __PPO__PendingStateRequest() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, PendingStateRequest); } \
	FORCEINLINE static uint32 __PPO__CurrentStateRequestId() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, CurrentStateRequestId); } \
	FORCEINLINE static uint32 __PPO__AwaitStateRequest() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, AwaitStateRequest); } \
	FORCEINLINE static uint32 __PPO__TransitAwaitTimeStamp() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, TransitAwaitTimeStamp); } \
	FORCEINLINE static uint32 __PPO__TransitAwaitingTime() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, TransitAwaitingTime); } \
	FORCEINLINE static uint32 __PPO__AwaitSlowStart() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, AwaitSlowStart); } \
	FORCEINLINE static uint32 __PPO__AwaitSlowFactor() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, AwaitSlowFactor); } \
	FORCEINLINE static uint32 __PPO__PredictSyncRate() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, PredictSyncRate); } \
	FORCEINLINE static uint32 __PPO__LargeDelayThreshold() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, LargeDelayThreshold); } \
	FORCEINLINE static uint32 __PPO__LargeDelayReduceFactor() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, LargeDelayReduceFactor); } \
	FORCEINLINE static uint32 __PPO__DelaySyncRate() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, DelaySyncRate); } \
	FORCEINLINE static uint32 __PPO__DelayInterpSpeed() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, DelayInterpSpeed); } \
	FORCEINLINE static uint32 __PPO__TimeStampOnHitStop() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, TimeStampOnHitStop); } \
	FORCEINLINE static uint32 __PPO__ResponseCorrectLoc() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, ResponseCorrectLoc); } \
	FORCEINLINE static uint32 __PPO__ResponseCorrectYaw() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, ResponseCorrectYaw); } \
	FORCEINLINE static uint32 __PPO__ReservedStateRequest() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, ReservedStateRequest); } \
	FORCEINLINE static uint32 __PPO__ReservedStateRequestTimeStamp() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, ReservedStateRequestTimeStamp); } \
	FORCEINLINE static uint32 __PPO__ReserveRequestDuration() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, ReserveRequestDuration); } \
	FORCEINLINE static uint32 __PPO__OverrideReserveRequestDuration() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, OverrideReserveRequestDuration); } \
	FORCEINLINE static uint32 __PPO__bSimulatedMoving() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, bSimulatedMoving); } \
	FORCEINLINE static uint32 __PPO__ClientUpdatingOnBeginState() { return STRUCT_OFFSET(UELSSCharacterMovementComponent, ClientUpdatingOnBeginState); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacterMovementComponent_h_12_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacterMovementComponent_h_14_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacterMovementComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacterMovementComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacterMovementComponent_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacterMovementComponent_h_14_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacterMovementComponent_h_14_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacterMovementComponent_h_14_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacterMovementComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacterMovementComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacterMovementComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacterMovementComponent_h_14_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacterMovementComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacterMovementComponent_h_14_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacterMovementComponent_h_14_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacterMovementComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSCharacterMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSCharacterMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
