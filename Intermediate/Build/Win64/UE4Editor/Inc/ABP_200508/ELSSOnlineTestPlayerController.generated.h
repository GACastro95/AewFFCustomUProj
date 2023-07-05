// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class AActor;
#ifdef ABP_200508_ELSSOnlineTestPlayerController_generated_h
#error "ELSSOnlineTestPlayerController.generated.h already included, missing '#pragma once' in ELSSOnlineTestPlayerController.h"
#endif
#define ABP_200508_ELSSOnlineTestPlayerController_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestPlayerController_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestPlayerController_h_12_RPC_WRAPPERS \
	virtual void UIPrepare_RPC_Implementation(); \
 \
	DECLARE_FUNCTION(execMoveForward); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execPlayerDisableInput); \
	DECLARE_FUNCTION(execPlayerEnableInput); \
	DECLARE_FUNCTION(execRotLookUp); \
	DECLARE_FUNCTION(execRotTurn); \
	DECLARE_FUNCTION(execUIPrepare_RPC);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestPlayerController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void UIPrepare_RPC_Implementation(); \
 \
	DECLARE_FUNCTION(execMoveForward); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execPlayerDisableInput); \
	DECLARE_FUNCTION(execPlayerEnableInput); \
	DECLARE_FUNCTION(execRotLookUp); \
	DECLARE_FUNCTION(execRotTurn); \
	DECLARE_FUNCTION(execUIPrepare_RPC);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestPlayerController_h_12_EVENT_PARMS \
	struct ELSSOnlineTestPlayerController_eventAddInstantMessage_Parms \
	{ \
		FString inMessage; \
	}; \
	struct ELSSOnlineTestPlayerController_eventOnChangeHP_Parms \
	{ \
		int32 inNewHP; \
		int32 inMaxHP; \
	}; \
	struct ELSSOnlineTestPlayerController_eventRequestHPGauge_Parms \
	{ \
		AActor* InActor; \
		int32 inNewHP; \
		int32 inPrevHP; \
		int32 inMaxHP; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestPlayerController_h_12_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestPlayerController_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSOnlineTestPlayerController(); \
	friend struct Z_Construct_UClass_AELSSOnlineTestPlayerController_Statics; \
public: \
	DECLARE_CLASS(AELSSOnlineTestPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSOnlineTestPlayerController)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestPlayerController_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAELSSOnlineTestPlayerController(); \
	friend struct Z_Construct_UClass_AELSSOnlineTestPlayerController_Statics; \
public: \
	DECLARE_CLASS(AELSSOnlineTestPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSOnlineTestPlayerController)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestPlayerController_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSOnlineTestPlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSOnlineTestPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSOnlineTestPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSOnlineTestPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSOnlineTestPlayerController(AELSSOnlineTestPlayerController&&); \
	NO_API AELSSOnlineTestPlayerController(const AELSSOnlineTestPlayerController&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestPlayerController_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSOnlineTestPlayerController(AELSSOnlineTestPlayerController&&); \
	NO_API AELSSOnlineTestPlayerController(const AELSSOnlineTestPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSOnlineTestPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSOnlineTestPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSOnlineTestPlayerController)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestPlayerController_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__pitchLimit() { return STRUCT_OFFSET(AELSSOnlineTestPlayerController, pitchLimit); } \
	FORCEINLINE static uint32 __PPO__rotSpeedYaw() { return STRUCT_OFFSET(AELSSOnlineTestPlayerController, rotSpeedYaw); } \
	FORCEINLINE static uint32 __PPO__rotSpeedPitch() { return STRUCT_OFFSET(AELSSOnlineTestPlayerController, rotSpeedPitch); } \
	FORCEINLINE static uint32 __PPO__LeftStickInput() { return STRUCT_OFFSET(AELSSOnlineTestPlayerController, LeftStickInput); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestPlayerController_h_10_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestPlayerController_h_12_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestPlayerController_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestPlayerController_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestPlayerController_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestPlayerController_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestPlayerController_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestPlayerController_h_12_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestPlayerController_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestPlayerController_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestPlayerController_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestPlayerController_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestPlayerController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestPlayerController_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestPlayerController_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestPlayerController_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSOnlineTestPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSOnlineTestPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
