// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMiniGame_ChipGather;
struct FMiniGame_DamageChallenge;
struct FMiniGame_FindOrange;
struct FMiniGame_FindTheDifference;
struct FMiniGame_HomeRunInfo;
enum class EImmediateMiniGameState : uint8;
struct FMiniGameDebugMenuParam_Common;
struct FMiniGame_ObjectCount;
struct FMiniGame_PentaSais;
struct FMiniGame_SlothSling;
struct FMiniGame_SpotLight;
struct FMiniGame_TracePunch;
struct FMiniGame_TriviaQuiz;
#ifdef ABP_200508_YMiniGameOptions_DebugMenu_generated_h
#error "YMiniGameOptions_DebugMenu.generated.h already included, missing '#pragma once' in YMiniGameOptions_DebugMenu.h"
#endif
#define ABP_200508_YMiniGameOptions_DebugMenu_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_YMiniGameOptions_DebugMenu_h_21_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_YMiniGameOptions_DebugMenu_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisableDebugStateAndTick); \
	DECLARE_FUNCTION(execDisableDebugTick); \
	DECLARE_FUNCTION(execDisableImmidiateMiniGameState); \
	DECLARE_FUNCTION(execGetChipGatherInfo); \
	DECLARE_FUNCTION(execGetDamageChallengeInfo); \
	DECLARE_FUNCTION(execGetDebugMiniGameLevel); \
	DECLARE_FUNCTION(execGetFindOrangeInfo); \
	DECLARE_FUNCTION(execGetFindTheDifferenceInfo); \
	DECLARE_FUNCTION(execGetHomeRunInfo); \
	DECLARE_FUNCTION(execGetImmidiateMiniGameState); \
	DECLARE_FUNCTION(execGetMiniGameDebugMenuParam); \
	DECLARE_FUNCTION(execGetObjectCountInfo); \
	DECLARE_FUNCTION(execGetPentaSaisInfo); \
	DECLARE_FUNCTION(execGetSlothSlingInfo); \
	DECLARE_FUNCTION(execGetSpotLightInfo); \
	DECLARE_FUNCTION(execGetTracePunchInfo); \
	DECLARE_FUNCTION(execGetTriviaQuizInfo); \
	DECLARE_FUNCTION(execIsApplyForDebugMiniGame); \
	DECLARE_FUNCTION(execIsDebugMiniGameParameter); \
	DECLARE_FUNCTION(execIsDebugTick); \
	DECLARE_FUNCTION(execSetCorrectAnswer);


#define AewFFCustomUProj_Source_ABP_200508_Public_YMiniGameOptions_DebugMenu_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisableDebugStateAndTick); \
	DECLARE_FUNCTION(execDisableDebugTick); \
	DECLARE_FUNCTION(execDisableImmidiateMiniGameState); \
	DECLARE_FUNCTION(execGetChipGatherInfo); \
	DECLARE_FUNCTION(execGetDamageChallengeInfo); \
	DECLARE_FUNCTION(execGetDebugMiniGameLevel); \
	DECLARE_FUNCTION(execGetFindOrangeInfo); \
	DECLARE_FUNCTION(execGetFindTheDifferenceInfo); \
	DECLARE_FUNCTION(execGetHomeRunInfo); \
	DECLARE_FUNCTION(execGetImmidiateMiniGameState); \
	DECLARE_FUNCTION(execGetMiniGameDebugMenuParam); \
	DECLARE_FUNCTION(execGetObjectCountInfo); \
	DECLARE_FUNCTION(execGetPentaSaisInfo); \
	DECLARE_FUNCTION(execGetSlothSlingInfo); \
	DECLARE_FUNCTION(execGetSpotLightInfo); \
	DECLARE_FUNCTION(execGetTracePunchInfo); \
	DECLARE_FUNCTION(execGetTriviaQuizInfo); \
	DECLARE_FUNCTION(execIsApplyForDebugMiniGame); \
	DECLARE_FUNCTION(execIsDebugMiniGameParameter); \
	DECLARE_FUNCTION(execIsDebugTick); \
	DECLARE_FUNCTION(execSetCorrectAnswer);


#define AewFFCustomUProj_Source_ABP_200508_Public_YMiniGameOptions_DebugMenu_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUYMiniGameOptions_DebugMenu(); \
	friend struct Z_Construct_UClass_UYMiniGameOptions_DebugMenu_Statics; \
public: \
	DECLARE_CLASS(UYMiniGameOptions_DebugMenu, UELDebugMenuRootBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UYMiniGameOptions_DebugMenu)


#define AewFFCustomUProj_Source_ABP_200508_Public_YMiniGameOptions_DebugMenu_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUYMiniGameOptions_DebugMenu(); \
	friend struct Z_Construct_UClass_UYMiniGameOptions_DebugMenu_Statics; \
public: \
	DECLARE_CLASS(UYMiniGameOptions_DebugMenu, UELDebugMenuRootBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UYMiniGameOptions_DebugMenu)


#define AewFFCustomUProj_Source_ABP_200508_Public_YMiniGameOptions_DebugMenu_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UYMiniGameOptions_DebugMenu(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYMiniGameOptions_DebugMenu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYMiniGameOptions_DebugMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYMiniGameOptions_DebugMenu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UYMiniGameOptions_DebugMenu(UYMiniGameOptions_DebugMenu&&); \
	NO_API UYMiniGameOptions_DebugMenu(const UYMiniGameOptions_DebugMenu&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_YMiniGameOptions_DebugMenu_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UYMiniGameOptions_DebugMenu(UYMiniGameOptions_DebugMenu&&); \
	NO_API UYMiniGameOptions_DebugMenu(const UYMiniGameOptions_DebugMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYMiniGameOptions_DebugMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYMiniGameOptions_DebugMenu); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UYMiniGameOptions_DebugMenu)


#define AewFFCustomUProj_Source_ABP_200508_Public_YMiniGameOptions_DebugMenu_h_21_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_YMiniGameOptions_DebugMenu_h_19_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_YMiniGameOptions_DebugMenu_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_YMiniGameOptions_DebugMenu_h_21_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_YMiniGameOptions_DebugMenu_h_21_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_YMiniGameOptions_DebugMenu_h_21_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_YMiniGameOptions_DebugMenu_h_21_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_YMiniGameOptions_DebugMenu_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_YMiniGameOptions_DebugMenu_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_YMiniGameOptions_DebugMenu_h_21_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_YMiniGameOptions_DebugMenu_h_21_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_YMiniGameOptions_DebugMenu_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_YMiniGameOptions_DebugMenu_h_21_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_YMiniGameOptions_DebugMenu_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UYMiniGameOptions_DebugMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_YMiniGameOptions_DebugMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
