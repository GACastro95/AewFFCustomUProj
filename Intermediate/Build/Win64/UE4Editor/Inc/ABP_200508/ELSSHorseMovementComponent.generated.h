// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ELSSHorseMovementComponent_generated_h
#error "ELSSHorseMovementComponent.generated.h already included, missing '#pragma once' in ELSSHorseMovementComponent.h"
#endif
#define ABP_200508_ELSSHorseMovementComponent_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorseMovementComponent_h_9_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorseMovementComponent_h_9_RPC_WRAPPERS \
	virtual void SendForward_Implementation(float inYaw, bool inBackMoving); \
 \
	DECLARE_FUNCTION(execIsBraking); \
	DECLARE_FUNCTION(execSendForward);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorseMovementComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SendForward_Implementation(float inYaw, bool inBackMoving); \
 \
	DECLARE_FUNCTION(execIsBraking); \
	DECLARE_FUNCTION(execSendForward);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorseMovementComponent_h_9_EVENT_PARMS \
	struct ELSSHorseMovementComponent_eventSendForward_Parms \
	{ \
		float inYaw; \
		bool inBackMoving; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorseMovementComponent_h_9_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorseMovementComponent_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSHorseMovementComponent(); \
	friend struct Z_Construct_UClass_UELSSHorseMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UELSSHorseMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSHorseMovementComponent)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorseMovementComponent_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUELSSHorseMovementComponent(); \
	friend struct Z_Construct_UClass_UELSSHorseMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UELSSHorseMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSHorseMovementComponent)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorseMovementComponent_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSHorseMovementComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSHorseMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSHorseMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSHorseMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSHorseMovementComponent(UELSSHorseMovementComponent&&); \
	NO_API UELSSHorseMovementComponent(const UELSSHorseMovementComponent&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorseMovementComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSHorseMovementComponent(UELSSHorseMovementComponent&&); \
	NO_API UELSSHorseMovementComponent(const UELSSHorseMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSHorseMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSHorseMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSHorseMovementComponent)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorseMovementComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BackMoving() { return STRUCT_OFFSET(UELSSHorseMovementComponent, BackMoving); } \
	FORCEINLINE static uint32 __PPO__Braking() { return STRUCT_OFFSET(UELSSHorseMovementComponent, Braking); } \
	FORCEINLINE static uint32 __PPO__PrevSpeed() { return STRUCT_OFFSET(UELSSHorseMovementComponent, PrevSpeed); } \
	FORCEINLINE static uint32 __PPO__RemainBrakeTime() { return STRUCT_OFFSET(UELSSHorseMovementComponent, RemainBrakeTime); } \
	FORCEINLINE static uint32 __PPO__BrakeDecelerationThoreshold() { return STRUCT_OFFSET(UELSSHorseMovementComponent, BrakeDecelerationThoreshold); } \
	FORCEINLINE static uint32 __PPO__BrakeMinDuration() { return STRUCT_OFFSET(UELSSHorseMovementComponent, BrakeMinDuration); } \
	FORCEINLINE static uint32 __PPO__BrakeMinSpeedRate() { return STRUCT_OFFSET(UELSSHorseMovementComponent, BrakeMinSpeedRate); } \
	FORCEINLINE static uint32 __PPO__LateralInputAccelerationRate() { return STRUCT_OFFSET(UELSSHorseMovementComponent, LateralInputAccelerationRate); } \
	FORCEINLINE static uint32 __PPO__LateralInputAccelerationRateOnBraking() { return STRUCT_OFFSET(UELSSHorseMovementComponent, LateralInputAccelerationRateOnBraking); } \
	FORCEINLINE static uint32 __PPO__BackInputAccelerationRate() { return STRUCT_OFFSET(UELSSHorseMovementComponent, BackInputAccelerationRate); } \
	FORCEINLINE static uint32 __PPO__SteeringCoefOnMaxSpeed() { return STRUCT_OFFSET(UELSSHorseMovementComponent, SteeringCoefOnMaxSpeed); } \
	FORCEINLINE static uint32 __PPO__SteeringForwardRate() { return STRUCT_OFFSET(UELSSHorseMovementComponent, SteeringForwardRate); } \
	FORCEINLINE static uint32 __PPO__InputVectorInterpSpeedForward() { return STRUCT_OFFSET(UELSSHorseMovementComponent, InputVectorInterpSpeedForward); } \
	FORCEINLINE static uint32 __PPO__InputVectorInterpSpeedForwardOnSteering() { return STRUCT_OFFSET(UELSSHorseMovementComponent, InputVectorInterpSpeedForwardOnSteering); } \
	FORCEINLINE static uint32 __PPO__InputVectorInterpSpeedLateral() { return STRUCT_OFFSET(UELSSHorseMovementComponent, InputVectorInterpSpeedLateral); } \
	FORCEINLINE static uint32 __PPO__InputVectorInterpSpeedOnBraking() { return STRUCT_OFFSET(UELSSHorseMovementComponent, InputVectorInterpSpeedOnBraking); } \
	FORCEINLINE static uint32 __PPO__MinInputAccelerationLength() { return STRUCT_OFFSET(UELSSHorseMovementComponent, MinInputAccelerationLength); } \
	FORCEINLINE static uint32 __PPO__PrevInputVector() { return STRUCT_OFFSET(UELSSHorseMovementComponent, PrevInputVector); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorseMovementComponent_h_7_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorseMovementComponent_h_9_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorseMovementComponent_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorseMovementComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorseMovementComponent_h_9_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorseMovementComponent_h_9_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorseMovementComponent_h_9_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorseMovementComponent_h_9_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorseMovementComponent_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorseMovementComponent_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorseMovementComponent_h_9_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorseMovementComponent_h_9_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorseMovementComponent_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorseMovementComponent_h_9_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorseMovementComponent_h_9_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorseMovementComponent_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSHorseMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSHorseMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
