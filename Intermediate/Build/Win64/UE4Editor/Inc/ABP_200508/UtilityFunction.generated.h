// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FIntPoint;
enum class EPlatformType : uint8;
struct FVector;
struct FRotator;
class APlayerController;
class AActor;
#ifdef ABP_200508_UtilityFunction_generated_h
#error "UtilityFunction.generated.h already included, missing '#pragma once' in UtilityFunction.h"
#endif
#define ABP_200508_UtilityFunction_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_UtilityFunction_h_16_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_UtilityFunction_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAdjustFullScreenResolution); \
	DECLARE_FUNCTION(execGetCpuInfo); \
	DECLARE_FUNCTION(execGetGameCameraAspectRatio); \
	DECLARE_FUNCTION(execGetGpuInfo); \
	DECLARE_FUNCTION(execGetMaxSupportedFullscreenResolution); \
	DECLARE_FUNCTION(execGetPlatform); \
	DECLARE_FUNCTION(execGetScreenResolution); \
	DECLARE_FUNCTION(execGetWindowMode); \
	DECLARE_FUNCTION(execIsEditor); \
	DECLARE_FUNCTION(execIsEditor_NotGame); \
	DECLARE_FUNCTION(execIsLoadInGameAnimation); \
	DECLARE_FUNCTION(execIsNullOnlineSubsystem); \
	DECLARE_FUNCTION(execIsPlatformEpic); \
	DECLARE_FUNCTION(execIsPlatformPlayStation); \
	DECLARE_FUNCTION(execIsPlatformSteam); \
	DECLARE_FUNCTION(execIsPlatformWindows); \
	DECLARE_FUNCTION(execIsPlatformXBox); \
	DECLARE_FUNCTION(execIsSamePlatformGroup); \
	DECLARE_FUNCTION(execIsShipping); \
	DECLARE_FUNCTION(execIsSystemEnterAssignCircle); \
	DECLARE_FUNCTION(execIsTestBuild); \
	DECLARE_FUNCTION(execOperationalWidgetManagerCloseAllWidgets); \
	DECLARE_FUNCTION(execPlayLoadingScreen); \
	DECLARE_FUNCTION(execRequiresVirtualKeyboard); \
	DECLARE_FUNCTION(execRotateVectorToTarget); \
	DECLARE_FUNCTION(execSetAntiAliasingQuality); \
	DECLARE_FUNCTION(execSetDLSS_OptionIndex); \
	DECLARE_FUNCTION(execSetEnableDynamicShadow); \
	DECLARE_FUNCTION(execSetEnableLoadingScreen); \
	DECLARE_FUNCTION(execSetEnableVSync); \
	DECLARE_FUNCTION(execSetFoliageQuality); \
	DECLARE_FUNCTION(execSetMotionBlur); \
	DECLARE_FUNCTION(execSetPostPrecessQuality); \
	DECLARE_FUNCTION(execSetResolutionQuality); \
	DECLARE_FUNCTION(execSetResolutionQualityWithWorld); \
	DECLARE_FUNCTION(execSetScreenResolution); \
	DECLARE_FUNCTION(execSetScreenResolutionWithWorld); \
	DECLARE_FUNCTION(execSetShadowQuality); \
	DECLARE_FUNCTION(execSetTextureQuality); \
	DECLARE_FUNCTION(execSetViewDistanceQuality); \
	DECLARE_FUNCTION(execSetWindowMode); \
	DECLARE_FUNCTION(execSetWindowModeWithWorld); \
	DECLARE_FUNCTION(execSetXeSS_OptionIndex); \
	DECLARE_FUNCTION(execSortArray); \
	DECLARE_FUNCTION(execStopLoadingScreen); \
	DECLARE_FUNCTION(execTwoVectorsFromAngle);


#define AewFFCustomUProj_Source_ABP_200508_Public_UtilityFunction_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAdjustFullScreenResolution); \
	DECLARE_FUNCTION(execGetCpuInfo); \
	DECLARE_FUNCTION(execGetGameCameraAspectRatio); \
	DECLARE_FUNCTION(execGetGpuInfo); \
	DECLARE_FUNCTION(execGetMaxSupportedFullscreenResolution); \
	DECLARE_FUNCTION(execGetPlatform); \
	DECLARE_FUNCTION(execGetScreenResolution); \
	DECLARE_FUNCTION(execGetWindowMode); \
	DECLARE_FUNCTION(execIsEditor); \
	DECLARE_FUNCTION(execIsEditor_NotGame); \
	DECLARE_FUNCTION(execIsLoadInGameAnimation); \
	DECLARE_FUNCTION(execIsNullOnlineSubsystem); \
	DECLARE_FUNCTION(execIsPlatformEpic); \
	DECLARE_FUNCTION(execIsPlatformPlayStation); \
	DECLARE_FUNCTION(execIsPlatformSteam); \
	DECLARE_FUNCTION(execIsPlatformWindows); \
	DECLARE_FUNCTION(execIsPlatformXBox); \
	DECLARE_FUNCTION(execIsSamePlatformGroup); \
	DECLARE_FUNCTION(execIsShipping); \
	DECLARE_FUNCTION(execIsSystemEnterAssignCircle); \
	DECLARE_FUNCTION(execIsTestBuild); \
	DECLARE_FUNCTION(execOperationalWidgetManagerCloseAllWidgets); \
	DECLARE_FUNCTION(execPlayLoadingScreen); \
	DECLARE_FUNCTION(execRequiresVirtualKeyboard); \
	DECLARE_FUNCTION(execRotateVectorToTarget); \
	DECLARE_FUNCTION(execSetAntiAliasingQuality); \
	DECLARE_FUNCTION(execSetDLSS_OptionIndex); \
	DECLARE_FUNCTION(execSetEnableDynamicShadow); \
	DECLARE_FUNCTION(execSetEnableLoadingScreen); \
	DECLARE_FUNCTION(execSetEnableVSync); \
	DECLARE_FUNCTION(execSetFoliageQuality); \
	DECLARE_FUNCTION(execSetMotionBlur); \
	DECLARE_FUNCTION(execSetPostPrecessQuality); \
	DECLARE_FUNCTION(execSetResolutionQuality); \
	DECLARE_FUNCTION(execSetResolutionQualityWithWorld); \
	DECLARE_FUNCTION(execSetScreenResolution); \
	DECLARE_FUNCTION(execSetScreenResolutionWithWorld); \
	DECLARE_FUNCTION(execSetShadowQuality); \
	DECLARE_FUNCTION(execSetTextureQuality); \
	DECLARE_FUNCTION(execSetViewDistanceQuality); \
	DECLARE_FUNCTION(execSetWindowMode); \
	DECLARE_FUNCTION(execSetWindowModeWithWorld); \
	DECLARE_FUNCTION(execSetXeSS_OptionIndex); \
	DECLARE_FUNCTION(execSortArray); \
	DECLARE_FUNCTION(execStopLoadingScreen); \
	DECLARE_FUNCTION(execTwoVectorsFromAngle);


#define AewFFCustomUProj_Source_ABP_200508_Public_UtilityFunction_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUtilityFunction(); \
	friend struct Z_Construct_UClass_UUtilityFunction_Statics; \
public: \
	DECLARE_CLASS(UUtilityFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UUtilityFunction)


#define AewFFCustomUProj_Source_ABP_200508_Public_UtilityFunction_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUUtilityFunction(); \
	friend struct Z_Construct_UClass_UUtilityFunction_Statics; \
public: \
	DECLARE_CLASS(UUtilityFunction, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UUtilityFunction)


#define AewFFCustomUProj_Source_ABP_200508_Public_UtilityFunction_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUtilityFunction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUtilityFunction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUtilityFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUtilityFunction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUtilityFunction(UUtilityFunction&&); \
	NO_API UUtilityFunction(const UUtilityFunction&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_UtilityFunction_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUtilityFunction(UUtilityFunction&&); \
	NO_API UUtilityFunction(const UUtilityFunction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUtilityFunction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUtilityFunction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUtilityFunction)


#define AewFFCustomUProj_Source_ABP_200508_Public_UtilityFunction_h_16_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_UtilityFunction_h_14_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_UtilityFunction_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_UtilityFunction_h_16_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_UtilityFunction_h_16_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_UtilityFunction_h_16_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_UtilityFunction_h_16_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_UtilityFunction_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_UtilityFunction_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_UtilityFunction_h_16_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_UtilityFunction_h_16_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_UtilityFunction_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_UtilityFunction_h_16_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_UtilityFunction_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UUtilityFunction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_UtilityFunction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
