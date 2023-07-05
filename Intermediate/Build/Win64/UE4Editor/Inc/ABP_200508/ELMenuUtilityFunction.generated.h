// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class ELanguageType : uint8;
class UFont;
struct FELWrestlerProfile;
class UMyWrestlerDataObject;
enum class ESelectWreslterSortType : uint8;
struct FMenuSelectWreslterParam;
enum class EWrestlerID_N : uint8;
enum class ETipsLoadingCategory : uint8;
#ifdef ABP_200508_ELMenuUtilityFunction_generated_h
#error "ELMenuUtilityFunction.generated.h already included, missing '#pragma once' in ELMenuUtilityFunction.h"
#endif
#define ABP_200508_ELMenuUtilityFunction_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELMenuUtilityFunction_h_19_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELMenuUtilityFunction_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCalcGridCursor); \
	DECLARE_FUNCTION(execCalcListCursor); \
	DECLARE_FUNCTION(execCalcTileViewScrollIndex); \
	DECLARE_FUNCTION(execChangeEnableInputToAllController); \
	DECLARE_FUNCTION(execChangeEnableInputToHostControllerOnly); \
	DECLARE_FUNCTION(execChangeLanguage); \
	DECLARE_FUNCTION(execChangeUserIndexForKeyboardMouse); \
	DECLARE_FUNCTION(execConvertBodyHeightUnitToFoot); \
	DECLARE_FUNCTION(execConvertBodyWeightUnitToLb); \
	DECLARE_FUNCTION(execGetCurrentLanguage); \
	DECLARE_FUNCTION(execGetCurrentLanguageFont); \
	DECLARE_FUNCTION(execGetMenuEditWrestlerProfile); \
	DECLARE_FUNCTION(execGetMenuSelectWreslterList); \
	DECLARE_FUNCTION(execGetMenuSelectWreslterParamFromWrestlerID); \
	DECLARE_FUNCTION(execGetOnlineUserRankImageIndex); \
	DECLARE_FUNCTION(execGetUserIndexForKeyboard); \
	DECLARE_FUNCTION(execInteger_Sort); \
	DECLARE_FUNCTION(execIsAllControllerEnableInput); \
	DECLARE_FUNCTION(execIsUnlockedItemContent); \
	DECLARE_FUNCTION(execIsValidForceFailedDlcCheck); \
	DECLARE_FUNCTION(execIsValidWrestlerSelectOnKeyboard); \
	DECLARE_FUNCTION(execPlatformTextCheck); \
	DECLARE_FUNCTION(execSetGameFPS); \
	DECLARE_FUNCTION(execSetUserFocusToGameViewport); \
	DECLARE_FUNCTION(execStartTipsLoadingScreen); \
	DECLARE_FUNCTION(execStartTipsLoadingScreenWithOverrideNextLevel);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMenuUtilityFunction_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalcGridCursor); \
	DECLARE_FUNCTION(execCalcListCursor); \
	DECLARE_FUNCTION(execCalcTileViewScrollIndex); \
	DECLARE_FUNCTION(execChangeEnableInputToAllController); \
	DECLARE_FUNCTION(execChangeEnableInputToHostControllerOnly); \
	DECLARE_FUNCTION(execChangeLanguage); \
	DECLARE_FUNCTION(execChangeUserIndexForKeyboardMouse); \
	DECLARE_FUNCTION(execConvertBodyHeightUnitToFoot); \
	DECLARE_FUNCTION(execConvertBodyWeightUnitToLb); \
	DECLARE_FUNCTION(execGetCurrentLanguage); \
	DECLARE_FUNCTION(execGetCurrentLanguageFont); \
	DECLARE_FUNCTION(execGetMenuEditWrestlerProfile); \
	DECLARE_FUNCTION(execGetMenuSelectWreslterList); \
	DECLARE_FUNCTION(execGetMenuSelectWreslterParamFromWrestlerID); \
	DECLARE_FUNCTION(execGetOnlineUserRankImageIndex); \
	DECLARE_FUNCTION(execGetUserIndexForKeyboard); \
	DECLARE_FUNCTION(execInteger_Sort); \
	DECLARE_FUNCTION(execIsAllControllerEnableInput); \
	DECLARE_FUNCTION(execIsUnlockedItemContent); \
	DECLARE_FUNCTION(execIsValidForceFailedDlcCheck); \
	DECLARE_FUNCTION(execIsValidWrestlerSelectOnKeyboard); \
	DECLARE_FUNCTION(execPlatformTextCheck); \
	DECLARE_FUNCTION(execSetGameFPS); \
	DECLARE_FUNCTION(execSetUserFocusToGameViewport); \
	DECLARE_FUNCTION(execStartTipsLoadingScreen); \
	DECLARE_FUNCTION(execStartTipsLoadingScreenWithOverrideNextLevel);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMenuUtilityFunction_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELMenuUtilityFunction(); \
	friend struct Z_Construct_UClass_UELMenuUtilityFunction_Statics; \
public: \
	DECLARE_CLASS(UELMenuUtilityFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELMenuUtilityFunction)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMenuUtilityFunction_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUELMenuUtilityFunction(); \
	friend struct Z_Construct_UClass_UELMenuUtilityFunction_Statics; \
public: \
	DECLARE_CLASS(UELMenuUtilityFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELMenuUtilityFunction)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMenuUtilityFunction_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELMenuUtilityFunction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELMenuUtilityFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELMenuUtilityFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELMenuUtilityFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELMenuUtilityFunction(UELMenuUtilityFunction&&); \
	NO_API UELMenuUtilityFunction(const UELMenuUtilityFunction&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMenuUtilityFunction_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELMenuUtilityFunction(UELMenuUtilityFunction&&); \
	NO_API UELMenuUtilityFunction(const UELMenuUtilityFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELMenuUtilityFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELMenuUtilityFunction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELMenuUtilityFunction)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMenuUtilityFunction_h_19_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELMenuUtilityFunction_h_17_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELMenuUtilityFunction_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMenuUtilityFunction_h_19_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMenuUtilityFunction_h_19_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMenuUtilityFunction_h_19_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMenuUtilityFunction_h_19_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMenuUtilityFunction_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELMenuUtilityFunction_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMenuUtilityFunction_h_19_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMenuUtilityFunction_h_19_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMenuUtilityFunction_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMenuUtilityFunction_h_19_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELMenuUtilityFunction_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELMenuUtilityFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELMenuUtilityFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
