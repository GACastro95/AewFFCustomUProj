// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class AActor;
class UWorld;
class ULevelStreaming;
class AELSSPlayerController;
class APlayerController;
class AELSSFadeManager;
class AELSSGameMode;
class AELSSGameState;
class AELSSItemManager;
class AELSSLocatorManager;
class AELSSPlayer;
class AELSSRoundManager;
class AELSSSoundManager;
class AELSSVehicleManager;
class AELSSStorm;
struct FTransform;
class UMeshComponent;
class USoundAtomCue;
#ifdef ABP_200508_ELSSInGameUtility_generated_h
#error "ELSSInGameUtility.generated.h already included, missing '#pragma once' in ELSSInGameUtility.h"
#endif
#define ABP_200508_ELSSInGameUtility_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameUtility_h_29_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameUtility_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddPool); \
	DECLARE_FUNCTION(execAddValidInteractableObjectToGameState); \
	DECLARE_FUNCTION(execCalcRotateAngleToTarget); \
	DECLARE_FUNCTION(execFindSubLevel); \
	DECLARE_FUNCTION(execGetFirstLocalSSPlayerController); \
	DECLARE_FUNCTION(execGetLocalPlayerControllers); \
	DECLARE_FUNCTION(execGetSSElapsedTimeForAnalytics); \
	DECLARE_FUNCTION(execGetSSElapsedTimeFromReadyState); \
	DECLARE_FUNCTION(execGetSSFadeManager); \
	DECLARE_FUNCTION(execGetSSGameMode); \
	DECLARE_FUNCTION(execGetSSGamePlayElapsedTime); \
	DECLARE_FUNCTION(execGetSSGameState); \
	DECLARE_FUNCTION(execGetSSItemManager); \
	DECLARE_FUNCTION(execGetSSLocatorManager); \
	DECLARE_FUNCTION(execGetSSPlayer); \
	DECLARE_FUNCTION(execGetSSPlayerController); \
	DECLARE_FUNCTION(execGetSSRoundManager); \
	DECLARE_FUNCTION(execGetSSRoundTotalTime); \
	DECLARE_FUNCTION(execGetSSSoundManager); \
	DECLARE_FUNCTION(execGetSSVehicleManager); \
	DECLARE_FUNCTION(execGetStorm); \
	DECLARE_FUNCTION(execIsDiffAngleBetweenSelfForwardAndDirTargetWithinRange); \
	DECLARE_FUNCTION(execIsSSModeInGame); \
	DECLARE_FUNCTION(execIsSSModeOutGame); \
	DECLARE_FUNCTION(execNotifySpectatorPremiumFeature); \
	DECLARE_FUNCTION(execRemoveValidInteractableObjectFromGameState); \
	DECLARE_FUNCTION(execScoopFromPool); \
	DECLARE_FUNCTION(execSetSubLevelVisible); \
	DECLARE_FUNCTION(execShouldPlaySoundInSSMode); \
	DECLARE_FUNCTION(execSinkToPool);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameUtility_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddPool); \
	DECLARE_FUNCTION(execAddValidInteractableObjectToGameState); \
	DECLARE_FUNCTION(execCalcRotateAngleToTarget); \
	DECLARE_FUNCTION(execFindSubLevel); \
	DECLARE_FUNCTION(execGetFirstLocalSSPlayerController); \
	DECLARE_FUNCTION(execGetLocalPlayerControllers); \
	DECLARE_FUNCTION(execGetSSElapsedTimeForAnalytics); \
	DECLARE_FUNCTION(execGetSSElapsedTimeFromReadyState); \
	DECLARE_FUNCTION(execGetSSFadeManager); \
	DECLARE_FUNCTION(execGetSSGameMode); \
	DECLARE_FUNCTION(execGetSSGamePlayElapsedTime); \
	DECLARE_FUNCTION(execGetSSGameState); \
	DECLARE_FUNCTION(execGetSSItemManager); \
	DECLARE_FUNCTION(execGetSSLocatorManager); \
	DECLARE_FUNCTION(execGetSSPlayer); \
	DECLARE_FUNCTION(execGetSSPlayerController); \
	DECLARE_FUNCTION(execGetSSRoundManager); \
	DECLARE_FUNCTION(execGetSSRoundTotalTime); \
	DECLARE_FUNCTION(execGetSSSoundManager); \
	DECLARE_FUNCTION(execGetSSVehicleManager); \
	DECLARE_FUNCTION(execGetStorm); \
	DECLARE_FUNCTION(execIsDiffAngleBetweenSelfForwardAndDirTargetWithinRange); \
	DECLARE_FUNCTION(execIsSSModeInGame); \
	DECLARE_FUNCTION(execIsSSModeOutGame); \
	DECLARE_FUNCTION(execNotifySpectatorPremiumFeature); \
	DECLARE_FUNCTION(execRemoveValidInteractableObjectFromGameState); \
	DECLARE_FUNCTION(execScoopFromPool); \
	DECLARE_FUNCTION(execSetSubLevelVisible); \
	DECLARE_FUNCTION(execShouldPlaySoundInSSMode); \
	DECLARE_FUNCTION(execSinkToPool);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameUtility_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSInGameUtility(); \
	friend struct Z_Construct_UClass_UELSSInGameUtility_Statics; \
public: \
	DECLARE_CLASS(UELSSInGameUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSInGameUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameUtility_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUELSSInGameUtility(); \
	friend struct Z_Construct_UClass_UELSSInGameUtility_Statics; \
public: \
	DECLARE_CLASS(UELSSInGameUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSInGameUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameUtility_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSInGameUtility(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSInGameUtility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSInGameUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSInGameUtility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSInGameUtility(UELSSInGameUtility&&); \
	NO_API UELSSInGameUtility(const UELSSInGameUtility&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameUtility_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSInGameUtility(UELSSInGameUtility&&); \
	NO_API UELSSInGameUtility(const UELSSInGameUtility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSInGameUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSInGameUtility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSInGameUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameUtility_h_29_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameUtility_h_27_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameUtility_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameUtility_h_29_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameUtility_h_29_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameUtility_h_29_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameUtility_h_29_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameUtility_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameUtility_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameUtility_h_29_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameUtility_h_29_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameUtility_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameUtility_h_29_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameUtility_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSInGameUtility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSInGameUtility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
