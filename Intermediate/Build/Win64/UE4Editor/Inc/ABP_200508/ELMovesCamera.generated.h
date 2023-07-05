// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class AELCharacter_Native;
#ifdef ABP_200508_ELMovesCamera_generated_h
#error "ELMovesCamera.generated.h already included, missing '#pragma once' in ELMovesCamera.h"
#endif
#define ABP_200508_ELMovesCamera_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovesCamera_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovesCamera_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDivingLookAtLocation); \
	DECLARE_FUNCTION(execGetLookAtLocation); \
	DECLARE_FUNCTION(execUpdateLocation);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovesCamera_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDivingLookAtLocation); \
	DECLARE_FUNCTION(execGetLookAtLocation); \
	DECLARE_FUNCTION(execUpdateLocation);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovesCamera_h_12_EVENT_PARMS \
	struct ELMovesCamera_eventGetAspectRatio_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELMovesCamera_eventGetAspectRatio_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ELMovesCamera_eventGetCharacters_Parms \
	{ \
		TArray<AELCharacter_Native*> OutCharacters; \
	}; \
	struct ELMovesCamera_eventGetFOVAngle_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELMovesCamera_eventGetFOVAngle_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovesCamera_h_12_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovesCamera_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELMovesCamera(); \
	friend struct Z_Construct_UClass_AELMovesCamera_Statics; \
public: \
	DECLARE_CLASS(AELMovesCamera, AGameplayCamera, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELMovesCamera)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovesCamera_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAELMovesCamera(); \
	friend struct Z_Construct_UClass_AELMovesCamera_Statics; \
public: \
	DECLARE_CLASS(AELMovesCamera, AGameplayCamera, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELMovesCamera)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovesCamera_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELMovesCamera(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELMovesCamera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELMovesCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELMovesCamera); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELMovesCamera(AELMovesCamera&&); \
	NO_API AELMovesCamera(const AELMovesCamera&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovesCamera_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELMovesCamera(AELMovesCamera&&); \
	NO_API AELMovesCamera(const AELMovesCamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELMovesCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELMovesCamera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELMovesCamera)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovesCamera_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GameplayCameraParam() { return STRUCT_OFFSET(AELMovesCamera, GameplayCameraParam); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovesCamera_h_10_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovesCamera_h_12_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovesCamera_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovesCamera_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovesCamera_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovesCamera_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovesCamera_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovesCamera_h_12_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovesCamera_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMovesCamera_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovesCamera_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovesCamera_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovesCamera_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovesCamera_h_12_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovesCamera_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMovesCamera_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELMovesCamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELMovesCamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
