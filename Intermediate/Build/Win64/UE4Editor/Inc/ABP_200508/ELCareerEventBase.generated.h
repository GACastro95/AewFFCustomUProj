// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCareerEventActionInfo;
class UDataTable;
class AActor;
struct FTransform;
enum class EWrestlerID_N : uint8;
enum class ECareerAttireType : uint8;
enum class ECareerRingObject : uint8;
class UCineCameraComponent;
#ifdef ABP_200508_ELCareerEventBase_generated_h
#error "ELCareerEventBase.generated.h already included, missing '#pragma once' in ELCareerEventBase.h"
#endif
#define ABP_200508_ELCareerEventBase_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventBase_h_17_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventBase_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeCameraPosition); \
	DECLARE_FUNCTION(execDebugAnimeSetting); \
	DECLARE_FUNCTION(execDebugChangeCamera); \
	DECLARE_FUNCTION(execDebugChangeMode); \
	DECLARE_FUNCTION(execDebugChangeWrestler); \
	DECLARE_FUNCTION(execDebugInputChangeAsset); \
	DECLARE_FUNCTION(execDebugInputDecision); \
	DECLARE_FUNCTION(execDebugInputForward); \
	DECLARE_FUNCTION(execDebugInputFov); \
	DECLARE_FUNCTION(execDebugInputPitch); \
	DECLARE_FUNCTION(execDebugInputPress); \
	DECLARE_FUNCTION(execDebugInputRight); \
	DECLARE_FUNCTION(execDebugInputUp); \
	DECLARE_FUNCTION(execDebugInputYaw); \
	DECLARE_FUNCTION(execDebugSetting); \
	DECLARE_FUNCTION(execDebugToggleAnimPlayStop); \
	DECLARE_FUNCTION(execSetDataTable_EventCameraPosition); \
	DECLARE_FUNCTION(execSetupProp); \
	DECLARE_FUNCTION(execSetupRingObject); \
	DECLARE_FUNCTION(execSetupWrestler); \
	DECLARE_FUNCTION(execSetWrestlerAnimation);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeCameraPosition); \
	DECLARE_FUNCTION(execDebugAnimeSetting); \
	DECLARE_FUNCTION(execDebugChangeCamera); \
	DECLARE_FUNCTION(execDebugChangeMode); \
	DECLARE_FUNCTION(execDebugChangeWrestler); \
	DECLARE_FUNCTION(execDebugInputChangeAsset); \
	DECLARE_FUNCTION(execDebugInputDecision); \
	DECLARE_FUNCTION(execDebugInputForward); \
	DECLARE_FUNCTION(execDebugInputFov); \
	DECLARE_FUNCTION(execDebugInputPitch); \
	DECLARE_FUNCTION(execDebugInputPress); \
	DECLARE_FUNCTION(execDebugInputRight); \
	DECLARE_FUNCTION(execDebugInputUp); \
	DECLARE_FUNCTION(execDebugInputYaw); \
	DECLARE_FUNCTION(execDebugSetting); \
	DECLARE_FUNCTION(execDebugToggleAnimPlayStop); \
	DECLARE_FUNCTION(execSetDataTable_EventCameraPosition); \
	DECLARE_FUNCTION(execSetupProp); \
	DECLARE_FUNCTION(execSetupRingObject); \
	DECLARE_FUNCTION(execSetupWrestler); \
	DECLARE_FUNCTION(execSetWrestlerAnimation);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventBase_h_17_EVENT_PARMS \
	struct ELCareerEventBase_eventCreateEventProp_Parms \
	{ \
		AActor* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCareerEventBase_eventCreateEventProp_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct ELCareerEventBase_eventCreateEventWrestler_Parms \
	{ \
		FTransform Transform; \
		EWrestlerID_N WrestlerID; \
		ECareerAttireType eAttire; \
		AActor* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCareerEventBase_eventCreateEventWrestler_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct ELCareerEventBase_eventDispRingObject_Parms \
	{ \
		ECareerRingObject eRingObject; \
	}; \
	struct ELCareerEventBase_eventGetCineCameraComponentFromIndex_Parms \
	{ \
		int32 Index; \
		UCineCameraComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCareerEventBase_eventGetCineCameraComponentFromIndex_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct ELCareerEventBase_eventGetCurrentCineCameraComponent_Parms \
	{ \
		UCineCameraComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELCareerEventBase_eventGetCurrentCineCameraComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct ELCareerEventBase_eventSwitchCameraBP_Parms \
	{ \
		int32 Index; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventBase_h_17_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventBase_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELCareerEventBase(); \
	friend struct Z_Construct_UClass_AELCareerEventBase_Statics; \
public: \
	DECLARE_CLASS(AELCareerEventBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELCareerEventBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventBase_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAELCareerEventBase(); \
	friend struct Z_Construct_UClass_AELCareerEventBase_Statics; \
public: \
	DECLARE_CLASS(AELCareerEventBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELCareerEventBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventBase_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELCareerEventBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELCareerEventBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELCareerEventBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELCareerEventBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELCareerEventBase(AELCareerEventBase&&); \
	NO_API AELCareerEventBase(const AELCareerEventBase&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELCareerEventBase(AELCareerEventBase&&); \
	NO_API AELCareerEventBase(const AELCareerEventBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELCareerEventBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELCareerEventBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELCareerEventBase)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventBase_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_DefaultTargetPointList() { return STRUCT_OFFSET(AELCareerEventBase, m_DefaultTargetPointList); } \
	FORCEINLINE static uint32 __PPO__m_CharacterArray() { return STRUCT_OFFSET(AELCareerEventBase, m_CharacterArray); } \
	FORCEINLINE static uint32 __PPO__m_PropArray() { return STRUCT_OFFSET(AELCareerEventBase, m_PropArray); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventBase_h_15_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventBase_h_17_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventBase_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventBase_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventBase_h_17_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventBase_h_17_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventBase_h_17_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventBase_h_17_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventBase_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventBase_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventBase_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventBase_h_17_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventBase_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventBase_h_17_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventBase_h_17_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventBase_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELCareerEventBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELCareerEventBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
