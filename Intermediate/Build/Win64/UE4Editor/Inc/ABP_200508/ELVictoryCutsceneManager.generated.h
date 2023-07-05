// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AELCharacter_Native;
enum class EStickinputDir : uint8;
class UAtomComponent;
class AActor;
struct FTransform;
struct FVector;
struct FRotator;
struct FELInteractiveVictoryCutsceneSpecialSceneParam;
#ifdef ABP_200508_ELVictoryCutsceneManager_generated_h
#error "ELVictoryCutsceneManager.generated.h already included, missing '#pragma once' in ELVictoryCutsceneManager.h"
#endif
#define ABP_200508_ELVictoryCutsceneManager_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManager_h_17_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManager_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnDamageHPEvent); \
	DECLARE_FUNCTION(execOnPlayNormalTauntEvent); \
	DECLARE_FUNCTION(execOnTakeControlBtn); \
	DECLARE_FUNCTION(execSetAtomComponent); \
	DECLARE_FUNCTION(execSetupPlayer); \
	DECLARE_FUNCTION(execStartObserveBreakOut);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManager_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnDamageHPEvent); \
	DECLARE_FUNCTION(execOnPlayNormalTauntEvent); \
	DECLARE_FUNCTION(execOnTakeControlBtn); \
	DECLARE_FUNCTION(execSetAtomComponent); \
	DECLARE_FUNCTION(execSetupPlayer); \
	DECLARE_FUNCTION(execStartObserveBreakOut);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManager_h_17_EVENT_PARMS \
	struct ELVictoryCutsceneManager_eventOnFinishedEvent_EnterEntrance_Parms \
	{ \
		AELCharacter_Native* EnterPlayer; \
	}; \
	struct ELVictoryCutsceneManager_eventSceneCaptureWithTransform_Impl_Parms \
	{ \
		FTransform Transform; \
	}; \
	struct ELVictoryCutsceneManager_eventSetCameraLocationAndRotation_Impl_Parms \
	{ \
		FVector Location; \
		FRotator Rotation; \
	}; \
	struct ELVictoryCutsceneManager_eventStartSpecialScene_Parms \
	{ \
		FELInteractiveVictoryCutsceneSpecialSceneParam SpecialSceneParam; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManager_h_17_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManager_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELVictoryCutsceneManager(); \
	friend struct Z_Construct_UClass_AELVictoryCutsceneManager_Statics; \
public: \
	DECLARE_CLASS(AELVictoryCutsceneManager, AELVictoryCutsceneManagerCore, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELVictoryCutsceneManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManager_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAELVictoryCutsceneManager(); \
	friend struct Z_Construct_UClass_AELVictoryCutsceneManager_Statics; \
public: \
	DECLARE_CLASS(AELVictoryCutsceneManager, AELVictoryCutsceneManagerCore, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELVictoryCutsceneManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManager_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELVictoryCutsceneManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELVictoryCutsceneManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELVictoryCutsceneManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELVictoryCutsceneManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELVictoryCutsceneManager(AELVictoryCutsceneManager&&); \
	NO_API AELVictoryCutsceneManager(const AELVictoryCutsceneManager&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManager_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELVictoryCutsceneManager(AELVictoryCutsceneManager&&); \
	NO_API AELVictoryCutsceneManager(const AELVictoryCutsceneManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELVictoryCutsceneManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELVictoryCutsceneManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELVictoryCutsceneManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManager_h_17_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManager_h_15_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManager_h_17_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManager_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManager_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManager_h_17_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManager_h_17_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManager_h_17_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManager_h_17_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManager_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManager_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManager_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManager_h_17_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManager_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManager_h_17_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManager_h_17_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManager_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELVictoryCutsceneManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELVictoryCutsceneManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
