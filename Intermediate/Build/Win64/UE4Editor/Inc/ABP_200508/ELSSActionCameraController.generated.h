// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef ABP_200508_ELSSActionCameraController_generated_h
#error "ELSSActionCameraController.generated.h already included, missing '#pragma once' in ELSSActionCameraController.h"
#endif
#define ABP_200508_ELSSActionCameraController_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionCameraController_h_13_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionCameraController_h_13_RPC_WRAPPERS \
	virtual FVector GetTargetLocation_Implementation() const; \
	virtual void OnBegin_Implementation(); \
	virtual void OnChangeStep_Implementation(int32 inStep); \
	virtual void OnEnd_Implementation(); \
	virtual void OnTick_Implementation(float inDeltaSeconds); \
 \
	DECLARE_FUNCTION(execChangeStep); \
	DECLARE_FUNCTION(execFinish); \
	DECLARE_FUNCTION(execGetCurrentStep); \
	DECLARE_FUNCTION(execGetTargetLocation); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execIsActiveTargetLocation); \
	DECLARE_FUNCTION(execOnBegin); \
	DECLARE_FUNCTION(execOnChangeStep); \
	DECLARE_FUNCTION(execOnEnd); \
	DECLARE_FUNCTION(execOnTick); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execReserveNextStep); \
	DECLARE_FUNCTION(execSetActiveTargetLocation); \
	DECLARE_FUNCTION(execSetTargetLocationToOpponent); \
	DECLARE_FUNCTION(execSetTargetLocationToOwner); \
	DECLARE_FUNCTION(execUpdateOnTick);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionCameraController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FVector GetTargetLocation_Implementation() const; \
	virtual void OnBegin_Implementation(); \
	virtual void OnChangeStep_Implementation(int32 inStep); \
	virtual void OnEnd_Implementation(); \
	virtual void OnTick_Implementation(float inDeltaSeconds); \
 \
	DECLARE_FUNCTION(execChangeStep); \
	DECLARE_FUNCTION(execFinish); \
	DECLARE_FUNCTION(execGetCurrentStep); \
	DECLARE_FUNCTION(execGetTargetLocation); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execIsActiveTargetLocation); \
	DECLARE_FUNCTION(execOnBegin); \
	DECLARE_FUNCTION(execOnChangeStep); \
	DECLARE_FUNCTION(execOnEnd); \
	DECLARE_FUNCTION(execOnTick); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execReserveNextStep); \
	DECLARE_FUNCTION(execSetActiveTargetLocation); \
	DECLARE_FUNCTION(execSetTargetLocationToOpponent); \
	DECLARE_FUNCTION(execSetTargetLocationToOwner); \
	DECLARE_FUNCTION(execUpdateOnTick);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionCameraController_h_13_EVENT_PARMS \
	struct ELSSActionCameraController_eventGetTargetLocation_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELSSActionCameraController_eventGetTargetLocation_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct ELSSActionCameraController_eventOnChangeStep_Parms \
	{ \
		int32 inStep; \
	}; \
	struct ELSSActionCameraController_eventOnTick_Parms \
	{ \
		float inDeltaSeconds; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionCameraController_h_13_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionCameraController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSActionCameraController(); \
	friend struct Z_Construct_UClass_UELSSActionCameraController_Statics; \
public: \
	DECLARE_CLASS(UELSSActionCameraController, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSActionCameraController)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionCameraController_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUELSSActionCameraController(); \
	friend struct Z_Construct_UClass_UELSSActionCameraController_Statics; \
public: \
	DECLARE_CLASS(UELSSActionCameraController, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSActionCameraController)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionCameraController_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSActionCameraController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSActionCameraController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSActionCameraController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSActionCameraController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSActionCameraController(UELSSActionCameraController&&); \
	NO_API UELSSActionCameraController(const UELSSActionCameraController&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionCameraController_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSActionCameraController(UELSSActionCameraController&&); \
	NO_API UELSSActionCameraController(const UELSSActionCameraController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSActionCameraController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSActionCameraController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSActionCameraController)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionCameraController_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActiveTargetLocation() { return STRUCT_OFFSET(UELSSActionCameraController, ActiveTargetLocation); } \
	FORCEINLINE static uint32 __PPO__TargetLocationLerpAlphaSpeed() { return STRUCT_OFFSET(UELSSActionCameraController, TargetLocationLerpAlphaSpeed); } \
	FORCEINLINE static uint32 __PPO__TargetLocationLerpHeightCoef() { return STRUCT_OFFSET(UELSSActionCameraController, TargetLocationLerpHeightCoef); } \
	FORCEINLINE static uint32 __PPO__TargetLocationLerpAlphaTarget() { return STRUCT_OFFSET(UELSSActionCameraController, TargetLocationLerpAlphaTarget); } \
	FORCEINLINE static uint32 __PPO__TargetLocationLerpAlpha() { return STRUCT_OFFSET(UELSSActionCameraController, TargetLocationLerpAlpha); } \
	FORCEINLINE static uint32 __PPO__StatusIsEnableUserRotate() { return STRUCT_OFFSET(UELSSActionCameraController, StatusIsEnableUserRotate); } \
	FORCEINLINE static uint32 __PPO__StatusIsEnableUpdateState() { return STRUCT_OFFSET(UELSSActionCameraController, StatusIsEnableUpdateState); } \
	FORCEINLINE static uint32 __PPO__MainPlayer() { return STRUCT_OFFSET(UELSSActionCameraController, MainPlayer); } \
	FORCEINLINE static uint32 __PPO__OpponentPlayer() { return STRUCT_OFFSET(UELSSActionCameraController, OpponentPlayer); } \
	FORCEINLINE static uint32 __PPO__GameplayCamera() { return STRUCT_OFFSET(UELSSActionCameraController, GameplayCamera); } \
	FORCEINLINE static uint32 __PPO__ParamManager() { return STRUCT_OFFSET(UELSSActionCameraController, ParamManager); } \
	FORCEINLINE static uint32 __PPO__OpponentLocation() { return STRUCT_OFFSET(UELSSActionCameraController, OpponentLocation); } \
	FORCEINLINE static uint32 __PPO__CurrentStep() { return STRUCT_OFFSET(UELSSActionCameraController, CurrentStep); } \
	FORCEINLINE static uint32 __PPO__StatusIsActive() { return STRUCT_OFFSET(UELSSActionCameraController, StatusIsActive); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionCameraController_h_11_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionCameraController_h_13_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionCameraController_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionCameraController_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionCameraController_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionCameraController_h_13_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionCameraController_h_13_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionCameraController_h_13_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionCameraController_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionCameraController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionCameraController_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionCameraController_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionCameraController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionCameraController_h_13_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionCameraController_h_13_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionCameraController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSActionCameraController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSActionCameraController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
