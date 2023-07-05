// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/UtilityFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUtilityFunction() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UUtilityFunction_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UUtilityFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EPlatformType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUtilityFunction::execAdjustFullScreenResolution)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUtilityFunction::AdjustFullScreenResolution(Z_Param__pWorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execGetCpuInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UUtilityFunction::GetCpuInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execGetGameCameraAspectRatio)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UUtilityFunction::GetGameCameraAspectRatio(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execGetGpuInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UUtilityFunction::GetGpuInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execGetMaxSupportedFullscreenResolution)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntPoint*)Z_Param__Result=UUtilityFunction::GetMaxSupportedFullscreenResolution();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execGetPlatform)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPlatformType*)Z_Param__Result=UUtilityFunction::GetPlatform(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execGetScreenResolution)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntPoint*)Z_Param__Result=UUtilityFunction::GetScreenResolution(Z_Param__pWorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execGetWindowMode)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUtilityFunction::GetWindowMode(Z_Param__pWorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execIsEditor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtilityFunction::IsEditor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execIsEditor_NotGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtilityFunction::IsEditor_NotGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execIsLoadInGameAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtilityFunction::IsLoadInGameAnimation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execIsNullOnlineSubsystem)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtilityFunction::IsNullOnlineSubsystem(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execIsPlatformEpic)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtilityFunction::IsPlatformEpic(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execIsPlatformPlayStation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtilityFunction::IsPlatformPlayStation(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execIsPlatformSteam)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtilityFunction::IsPlatformSteam(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execIsPlatformWindows)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtilityFunction::IsPlatformWindows(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execIsPlatformXBox)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtilityFunction::IsPlatformXBox(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execIsSamePlatformGroup)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EPlatformType,Z_Param_Platform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtilityFunction::IsSamePlatformGroup(Z_Param_WorldContextObject,EPlatformType(Z_Param_Platform));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execIsShipping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtilityFunction::IsShipping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execIsSystemEnterAssignCircle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtilityFunction::IsSystemEnterAssignCircle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execIsTestBuild)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtilityFunction::IsTestBuild();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execOperationalWidgetManagerCloseAllWidgets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UUtilityFunction::OperationalWidgetManagerCloseAllWidgets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execPlayLoadingScreen)
	{
		P_GET_UBOOL(Z_Param_bPlayUntilStopped);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlayTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUtilityFunction::PlayLoadingScreen(Z_Param_bPlayUntilStopped,Z_Param_PlayTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execRequiresVirtualKeyboard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtilityFunction::RequiresVirtualKeyboard();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execRotateVectorToTarget)
	{
		P_GET_STRUCT(FVector,Z_Param__StartVec);
		P_GET_STRUCT(FVector,Z_Param__TargetVec);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out__rOutRot);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUtilityFunction::RotateVectorToTarget(Z_Param__StartVec,Z_Param__TargetVec,Z_Param_Out__rOutRot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execSetAntiAliasingQuality)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sQuality);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUtilityFunction::SetAntiAliasingQuality(Z_Param__sQuality);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execSetDLSS_OptionIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUtilityFunction::SetDLSS_OptionIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execSetEnableDynamicShadow)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_UBOOL(Z_Param__bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUtilityFunction::SetEnableDynamicShadow(Z_Param__pWorldContextObject,Z_Param__bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execSetEnableLoadingScreen)
	{
		P_GET_UBOOL(Z_Param__Enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUtilityFunction::SetEnableLoadingScreen(Z_Param__Enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execSetEnableVSync)
	{
		P_GET_UBOOL(Z_Param__bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUtilityFunction::SetEnableVSync(Z_Param__bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execSetFoliageQuality)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sQuality);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUtilityFunction::SetFoliageQuality(Z_Param__sQuality);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execSetMotionBlur)
	{
		P_GET_OBJECT(APlayerController,Z_Param__Controller);
		P_GET_UBOOL(Z_Param__bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUtilityFunction::SetMotionBlur(Z_Param__Controller,Z_Param__bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execSetPostPrecessQuality)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sQuality);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUtilityFunction::SetPostPrecessQuality(Z_Param__sQuality);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execSetResolutionQuality)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param__sQuality);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUtilityFunction::SetResolutionQuality(Z_Param__pWorldContextObject,Z_Param__sQuality);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execSetResolutionQualityWithWorld)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_Quality);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUtilityFunction::SetResolutionQualityWithWorld(Z_Param_WorldContextObject,Z_Param_Quality);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execSetScreenResolution)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_STRUCT(FIntPoint,Z_Param__Resolution);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUtilityFunction::SetScreenResolution(Z_Param__pWorldContextObject,Z_Param__Resolution);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execSetScreenResolutionWithWorld)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FIntPoint,Z_Param_Resolution);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUtilityFunction::SetScreenResolutionWithWorld(Z_Param_WorldContextObject,Z_Param_Resolution);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execSetShadowQuality)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sQuality);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUtilityFunction::SetShadowQuality(Z_Param__sQuality);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execSetTextureQuality)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sQuality);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUtilityFunction::SetTextureQuality(Z_Param__sQuality);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execSetViewDistanceQuality)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__sQuality);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUtilityFunction::SetViewDistanceQuality(Z_Param__sQuality);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execSetWindowMode)
	{
		P_GET_OBJECT(UObject,Z_Param__pWorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param__sMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUtilityFunction::SetWindowMode(Z_Param__pWorldContextObject,Z_Param__sMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execSetWindowModeWithWorld)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_Mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUtilityFunction::SetWindowModeWithWorld(Z_Param_WorldContextObject,Z_Param_Mode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execSetXeSS_OptionIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUtilityFunction::SetXeSS_OptionIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execSortArray)
	{
		P_GET_TARRAY(AActor*,Z_Param__Array);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=UUtilityFunction::SortArray(Z_Param__Array);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execStopLoadingScreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UUtilityFunction::StopLoadingScreen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtilityFunction::execTwoVectorsFromAngle)
	{
		P_GET_STRUCT(FVector,Z_Param__Vec1);
		P_GET_STRUCT(FVector,Z_Param__Vec2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UUtilityFunction::TwoVectorsFromAngle(Z_Param__Vec1,Z_Param__Vec2);
		P_NATIVE_END;
	}
	void UUtilityFunction::StaticRegisterNativesUUtilityFunction()
	{
		UClass* Class = UUtilityFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdjustFullScreenResolution", &UUtilityFunction::execAdjustFullScreenResolution },
			{ "GetCpuInfo", &UUtilityFunction::execGetCpuInfo },
			{ "GetGameCameraAspectRatio", &UUtilityFunction::execGetGameCameraAspectRatio },
			{ "GetGpuInfo", &UUtilityFunction::execGetGpuInfo },
			{ "GetMaxSupportedFullscreenResolution", &UUtilityFunction::execGetMaxSupportedFullscreenResolution },
			{ "GetPlatform", &UUtilityFunction::execGetPlatform },
			{ "GetScreenResolution", &UUtilityFunction::execGetScreenResolution },
			{ "GetWindowMode", &UUtilityFunction::execGetWindowMode },
			{ "IsEditor", &UUtilityFunction::execIsEditor },
			{ "IsEditor_NotGame", &UUtilityFunction::execIsEditor_NotGame },
			{ "IsLoadInGameAnimation", &UUtilityFunction::execIsLoadInGameAnimation },
			{ "IsNullOnlineSubsystem", &UUtilityFunction::execIsNullOnlineSubsystem },
			{ "IsPlatformEpic", &UUtilityFunction::execIsPlatformEpic },
			{ "IsPlatformPlayStation", &UUtilityFunction::execIsPlatformPlayStation },
			{ "IsPlatformSteam", &UUtilityFunction::execIsPlatformSteam },
			{ "IsPlatformWindows", &UUtilityFunction::execIsPlatformWindows },
			{ "IsPlatformXBox", &UUtilityFunction::execIsPlatformXBox },
			{ "IsSamePlatformGroup", &UUtilityFunction::execIsSamePlatformGroup },
			{ "IsShipping", &UUtilityFunction::execIsShipping },
			{ "IsSystemEnterAssignCircle", &UUtilityFunction::execIsSystemEnterAssignCircle },
			{ "IsTestBuild", &UUtilityFunction::execIsTestBuild },
			{ "OperationalWidgetManagerCloseAllWidgets", &UUtilityFunction::execOperationalWidgetManagerCloseAllWidgets },
			{ "PlayLoadingScreen", &UUtilityFunction::execPlayLoadingScreen },
			{ "RequiresVirtualKeyboard", &UUtilityFunction::execRequiresVirtualKeyboard },
			{ "RotateVectorToTarget", &UUtilityFunction::execRotateVectorToTarget },
			{ "SetAntiAliasingQuality", &UUtilityFunction::execSetAntiAliasingQuality },
			{ "SetDLSS_OptionIndex", &UUtilityFunction::execSetDLSS_OptionIndex },
			{ "SetEnableDynamicShadow", &UUtilityFunction::execSetEnableDynamicShadow },
			{ "SetEnableLoadingScreen", &UUtilityFunction::execSetEnableLoadingScreen },
			{ "SetEnableVSync", &UUtilityFunction::execSetEnableVSync },
			{ "SetFoliageQuality", &UUtilityFunction::execSetFoliageQuality },
			{ "SetMotionBlur", &UUtilityFunction::execSetMotionBlur },
			{ "SetPostPrecessQuality", &UUtilityFunction::execSetPostPrecessQuality },
			{ "SetResolutionQuality", &UUtilityFunction::execSetResolutionQuality },
			{ "SetResolutionQualityWithWorld", &UUtilityFunction::execSetResolutionQualityWithWorld },
			{ "SetScreenResolution", &UUtilityFunction::execSetScreenResolution },
			{ "SetScreenResolutionWithWorld", &UUtilityFunction::execSetScreenResolutionWithWorld },
			{ "SetShadowQuality", &UUtilityFunction::execSetShadowQuality },
			{ "SetTextureQuality", &UUtilityFunction::execSetTextureQuality },
			{ "SetViewDistanceQuality", &UUtilityFunction::execSetViewDistanceQuality },
			{ "SetWindowMode", &UUtilityFunction::execSetWindowMode },
			{ "SetWindowModeWithWorld", &UUtilityFunction::execSetWindowModeWithWorld },
			{ "SetXeSS_OptionIndex", &UUtilityFunction::execSetXeSS_OptionIndex },
			{ "SortArray", &UUtilityFunction::execSortArray },
			{ "StopLoadingScreen", &UUtilityFunction::execStopLoadingScreen },
			{ "TwoVectorsFromAngle", &UUtilityFunction::execTwoVectorsFromAngle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUtilityFunction_AdjustFullScreenResolution_Statics
	{
		struct UtilityFunction_eventAdjustFullScreenResolution_Parms
		{
			UObject* _pWorldContextObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUtilityFunction_AdjustFullScreenResolution_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventAdjustFullScreenResolution_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_AdjustFullScreenResolution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_AdjustFullScreenResolution_Statics::NewProp__pWorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_AdjustFullScreenResolution_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_AdjustFullScreenResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "AdjustFullScreenResolution", nullptr, nullptr, sizeof(UtilityFunction_eventAdjustFullScreenResolution_Parms), Z_Construct_UFunction_UUtilityFunction_AdjustFullScreenResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_AdjustFullScreenResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_AdjustFullScreenResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_AdjustFullScreenResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_AdjustFullScreenResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_AdjustFullScreenResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_GetCpuInfo_Statics
	{
		struct UtilityFunction_eventGetCpuInfo_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUtilityFunction_GetCpuInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventGetCpuInfo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_GetCpuInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_GetCpuInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_GetCpuInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_GetCpuInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "GetCpuInfo", nullptr, nullptr, sizeof(UtilityFunction_eventGetCpuInfo_Parms), Z_Construct_UFunction_UUtilityFunction_GetCpuInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_GetCpuInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_GetCpuInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_GetCpuInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_GetCpuInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_GetCpuInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_GetGameCameraAspectRatio_Statics
	{
		struct UtilityFunction_eventGetGameCameraAspectRatio_Parms
		{
			UObject* WorldContextObject;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUtilityFunction_GetGameCameraAspectRatio_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventGetGameCameraAspectRatio_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUtilityFunction_GetGameCameraAspectRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventGetGameCameraAspectRatio_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_GetGameCameraAspectRatio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_GetGameCameraAspectRatio_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_GetGameCameraAspectRatio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_GetGameCameraAspectRatio_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_GetGameCameraAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "GetGameCameraAspectRatio", nullptr, nullptr, sizeof(UtilityFunction_eventGetGameCameraAspectRatio_Parms), Z_Construct_UFunction_UUtilityFunction_GetGameCameraAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_GetGameCameraAspectRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_GetGameCameraAspectRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_GetGameCameraAspectRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_GetGameCameraAspectRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_GetGameCameraAspectRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_GetGpuInfo_Statics
	{
		struct UtilityFunction_eventGetGpuInfo_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUtilityFunction_GetGpuInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventGetGpuInfo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_GetGpuInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_GetGpuInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_GetGpuInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_GetGpuInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "GetGpuInfo", nullptr, nullptr, sizeof(UtilityFunction_eventGetGpuInfo_Parms), Z_Construct_UFunction_UUtilityFunction_GetGpuInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_GetGpuInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_GetGpuInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_GetGpuInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_GetGpuInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_GetGpuInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_GetMaxSupportedFullscreenResolution_Statics
	{
		struct UtilityFunction_eventGetMaxSupportedFullscreenResolution_Parms
		{
			FIntPoint ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUtilityFunction_GetMaxSupportedFullscreenResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventGetMaxSupportedFullscreenResolution_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_GetMaxSupportedFullscreenResolution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_GetMaxSupportedFullscreenResolution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_GetMaxSupportedFullscreenResolution_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_GetMaxSupportedFullscreenResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "GetMaxSupportedFullscreenResolution", nullptr, nullptr, sizeof(UtilityFunction_eventGetMaxSupportedFullscreenResolution_Parms), Z_Construct_UFunction_UUtilityFunction_GetMaxSupportedFullscreenResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_GetMaxSupportedFullscreenResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_GetMaxSupportedFullscreenResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_GetMaxSupportedFullscreenResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_GetMaxSupportedFullscreenResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_GetMaxSupportedFullscreenResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_GetPlatform_Statics
	{
		struct UtilityFunction_eventGetPlatform_Parms
		{
			const UObject* WorldContextObject;
			EPlatformType ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_GetPlatform_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUtilityFunction_GetPlatform_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventGetPlatform_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_GetPlatform_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_GetPlatform_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUtilityFunction_GetPlatform_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUtilityFunction_GetPlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventGetPlatform_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Core_EPlatformType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_GetPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_GetPlatform_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_GetPlatform_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_GetPlatform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_GetPlatform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_GetPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "GetPlatform", nullptr, nullptr, sizeof(UtilityFunction_eventGetPlatform_Parms), Z_Construct_UFunction_UUtilityFunction_GetPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_GetPlatform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_GetPlatform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_GetPlatform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_GetPlatform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_GetPlatform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_GetScreenResolution_Statics
	{
		struct UtilityFunction_eventGetScreenResolution_Parms
		{
			UObject* _pWorldContextObject;
			FIntPoint ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUtilityFunction_GetScreenResolution_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventGetScreenResolution_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUtilityFunction_GetScreenResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventGetScreenResolution_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_GetScreenResolution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_GetScreenResolution_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_GetScreenResolution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_GetScreenResolution_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_GetScreenResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "GetScreenResolution", nullptr, nullptr, sizeof(UtilityFunction_eventGetScreenResolution_Parms), Z_Construct_UFunction_UUtilityFunction_GetScreenResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_GetScreenResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_GetScreenResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_GetScreenResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_GetScreenResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_GetScreenResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_GetWindowMode_Statics
	{
		struct UtilityFunction_eventGetWindowMode_Parms
		{
			UObject* _pWorldContextObject;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUtilityFunction_GetWindowMode_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventGetWindowMode_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtilityFunction_GetWindowMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventGetWindowMode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_GetWindowMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_GetWindowMode_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_GetWindowMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_GetWindowMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_GetWindowMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "GetWindowMode", nullptr, nullptr, sizeof(UtilityFunction_eventGetWindowMode_Parms), Z_Construct_UFunction_UUtilityFunction_GetWindowMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_GetWindowMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_GetWindowMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_GetWindowMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_GetWindowMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_GetWindowMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_IsEditor_Statics
	{
		struct UtilityFunction_eventIsEditor_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUtilityFunction_IsEditor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UtilityFunction_eventIsEditor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtilityFunction_IsEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UtilityFunction_eventIsEditor_Parms), &Z_Construct_UFunction_UUtilityFunction_IsEditor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_IsEditor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_IsEditor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_IsEditor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_IsEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "IsEditor", nullptr, nullptr, sizeof(UtilityFunction_eventIsEditor_Parms), Z_Construct_UFunction_UUtilityFunction_IsEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_IsEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_IsEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_IsEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_IsEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_IsEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_IsEditor_NotGame_Statics
	{
		struct UtilityFunction_eventIsEditor_NotGame_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUtilityFunction_IsEditor_NotGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UtilityFunction_eventIsEditor_NotGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtilityFunction_IsEditor_NotGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UtilityFunction_eventIsEditor_NotGame_Parms), &Z_Construct_UFunction_UUtilityFunction_IsEditor_NotGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_IsEditor_NotGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_IsEditor_NotGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_IsEditor_NotGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_IsEditor_NotGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "IsEditor_NotGame", nullptr, nullptr, sizeof(UtilityFunction_eventIsEditor_NotGame_Parms), Z_Construct_UFunction_UUtilityFunction_IsEditor_NotGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_IsEditor_NotGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_IsEditor_NotGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_IsEditor_NotGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_IsEditor_NotGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_IsEditor_NotGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_IsLoadInGameAnimation_Statics
	{
		struct UtilityFunction_eventIsLoadInGameAnimation_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUtilityFunction_IsLoadInGameAnimation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UtilityFunction_eventIsLoadInGameAnimation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtilityFunction_IsLoadInGameAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UtilityFunction_eventIsLoadInGameAnimation_Parms), &Z_Construct_UFunction_UUtilityFunction_IsLoadInGameAnimation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_IsLoadInGameAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_IsLoadInGameAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_IsLoadInGameAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_IsLoadInGameAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "IsLoadInGameAnimation", nullptr, nullptr, sizeof(UtilityFunction_eventIsLoadInGameAnimation_Parms), Z_Construct_UFunction_UUtilityFunction_IsLoadInGameAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_IsLoadInGameAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_IsLoadInGameAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_IsLoadInGameAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_IsLoadInGameAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_IsLoadInGameAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_IsNullOnlineSubsystem_Statics
	{
		struct UtilityFunction_eventIsNullOnlineSubsystem_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_IsNullOnlineSubsystem_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUtilityFunction_IsNullOnlineSubsystem_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventIsNullOnlineSubsystem_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_IsNullOnlineSubsystem_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_IsNullOnlineSubsystem_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UUtilityFunction_IsNullOnlineSubsystem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UtilityFunction_eventIsNullOnlineSubsystem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtilityFunction_IsNullOnlineSubsystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UtilityFunction_eventIsNullOnlineSubsystem_Parms), &Z_Construct_UFunction_UUtilityFunction_IsNullOnlineSubsystem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_IsNullOnlineSubsystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_IsNullOnlineSubsystem_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_IsNullOnlineSubsystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_IsNullOnlineSubsystem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_IsNullOnlineSubsystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "IsNullOnlineSubsystem", nullptr, nullptr, sizeof(UtilityFunction_eventIsNullOnlineSubsystem_Parms), Z_Construct_UFunction_UUtilityFunction_IsNullOnlineSubsystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_IsNullOnlineSubsystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_IsNullOnlineSubsystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_IsNullOnlineSubsystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_IsNullOnlineSubsystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_IsNullOnlineSubsystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_IsPlatformEpic_Statics
	{
		struct UtilityFunction_eventIsPlatformEpic_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_IsPlatformEpic_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUtilityFunction_IsPlatformEpic_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventIsPlatformEpic_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_IsPlatformEpic_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_IsPlatformEpic_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UUtilityFunction_IsPlatformEpic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UtilityFunction_eventIsPlatformEpic_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtilityFunction_IsPlatformEpic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UtilityFunction_eventIsPlatformEpic_Parms), &Z_Construct_UFunction_UUtilityFunction_IsPlatformEpic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_IsPlatformEpic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_IsPlatformEpic_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_IsPlatformEpic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_IsPlatformEpic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_IsPlatformEpic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "IsPlatformEpic", nullptr, nullptr, sizeof(UtilityFunction_eventIsPlatformEpic_Parms), Z_Construct_UFunction_UUtilityFunction_IsPlatformEpic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_IsPlatformEpic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_IsPlatformEpic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_IsPlatformEpic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_IsPlatformEpic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_IsPlatformEpic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_IsPlatformPlayStation_Statics
	{
		struct UtilityFunction_eventIsPlatformPlayStation_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_IsPlatformPlayStation_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUtilityFunction_IsPlatformPlayStation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventIsPlatformPlayStation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_IsPlatformPlayStation_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_IsPlatformPlayStation_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UUtilityFunction_IsPlatformPlayStation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UtilityFunction_eventIsPlatformPlayStation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtilityFunction_IsPlatformPlayStation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UtilityFunction_eventIsPlatformPlayStation_Parms), &Z_Construct_UFunction_UUtilityFunction_IsPlatformPlayStation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_IsPlatformPlayStation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_IsPlatformPlayStation_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_IsPlatformPlayStation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_IsPlatformPlayStation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_IsPlatformPlayStation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "IsPlatformPlayStation", nullptr, nullptr, sizeof(UtilityFunction_eventIsPlatformPlayStation_Parms), Z_Construct_UFunction_UUtilityFunction_IsPlatformPlayStation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_IsPlatformPlayStation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_IsPlatformPlayStation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_IsPlatformPlayStation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_IsPlatformPlayStation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_IsPlatformPlayStation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_IsPlatformSteam_Statics
	{
		struct UtilityFunction_eventIsPlatformSteam_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_IsPlatformSteam_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUtilityFunction_IsPlatformSteam_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventIsPlatformSteam_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_IsPlatformSteam_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_IsPlatformSteam_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UUtilityFunction_IsPlatformSteam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UtilityFunction_eventIsPlatformSteam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtilityFunction_IsPlatformSteam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UtilityFunction_eventIsPlatformSteam_Parms), &Z_Construct_UFunction_UUtilityFunction_IsPlatformSteam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_IsPlatformSteam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_IsPlatformSteam_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_IsPlatformSteam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_IsPlatformSteam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_IsPlatformSteam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "IsPlatformSteam", nullptr, nullptr, sizeof(UtilityFunction_eventIsPlatformSteam_Parms), Z_Construct_UFunction_UUtilityFunction_IsPlatformSteam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_IsPlatformSteam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_IsPlatformSteam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_IsPlatformSteam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_IsPlatformSteam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_IsPlatformSteam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_IsPlatformWindows_Statics
	{
		struct UtilityFunction_eventIsPlatformWindows_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_IsPlatformWindows_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUtilityFunction_IsPlatformWindows_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventIsPlatformWindows_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_IsPlatformWindows_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_IsPlatformWindows_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UUtilityFunction_IsPlatformWindows_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UtilityFunction_eventIsPlatformWindows_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtilityFunction_IsPlatformWindows_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UtilityFunction_eventIsPlatformWindows_Parms), &Z_Construct_UFunction_UUtilityFunction_IsPlatformWindows_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_IsPlatformWindows_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_IsPlatformWindows_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_IsPlatformWindows_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_IsPlatformWindows_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_IsPlatformWindows_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "IsPlatformWindows", nullptr, nullptr, sizeof(UtilityFunction_eventIsPlatformWindows_Parms), Z_Construct_UFunction_UUtilityFunction_IsPlatformWindows_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_IsPlatformWindows_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_IsPlatformWindows_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_IsPlatformWindows_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_IsPlatformWindows()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_IsPlatformWindows_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_IsPlatformXBox_Statics
	{
		struct UtilityFunction_eventIsPlatformXBox_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_IsPlatformXBox_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUtilityFunction_IsPlatformXBox_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventIsPlatformXBox_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_IsPlatformXBox_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_IsPlatformXBox_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UUtilityFunction_IsPlatformXBox_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UtilityFunction_eventIsPlatformXBox_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtilityFunction_IsPlatformXBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UtilityFunction_eventIsPlatformXBox_Parms), &Z_Construct_UFunction_UUtilityFunction_IsPlatformXBox_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_IsPlatformXBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_IsPlatformXBox_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_IsPlatformXBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_IsPlatformXBox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_IsPlatformXBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "IsPlatformXBox", nullptr, nullptr, sizeof(UtilityFunction_eventIsPlatformXBox_Parms), Z_Construct_UFunction_UUtilityFunction_IsPlatformXBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_IsPlatformXBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_IsPlatformXBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_IsPlatformXBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_IsPlatformXBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_IsPlatformXBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_IsSamePlatformGroup_Statics
	{
		struct UtilityFunction_eventIsSamePlatformGroup_Parms
		{
			const UObject* WorldContextObject;
			EPlatformType Platform;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Platform_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Platform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_IsSamePlatformGroup_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUtilityFunction_IsSamePlatformGroup_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventIsSamePlatformGroup_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_IsSamePlatformGroup_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_IsSamePlatformGroup_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUtilityFunction_IsSamePlatformGroup_Statics::NewProp_Platform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUtilityFunction_IsSamePlatformGroup_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventIsSamePlatformGroup_Parms, Platform), Z_Construct_UEnum_ELITE_Core_EPlatformType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUtilityFunction_IsSamePlatformGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UtilityFunction_eventIsSamePlatformGroup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtilityFunction_IsSamePlatformGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UtilityFunction_eventIsSamePlatformGroup_Parms), &Z_Construct_UFunction_UUtilityFunction_IsSamePlatformGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_IsSamePlatformGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_IsSamePlatformGroup_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_IsSamePlatformGroup_Statics::NewProp_Platform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_IsSamePlatformGroup_Statics::NewProp_Platform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_IsSamePlatformGroup_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_IsSamePlatformGroup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_IsSamePlatformGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "IsSamePlatformGroup", nullptr, nullptr, sizeof(UtilityFunction_eventIsSamePlatformGroup_Parms), Z_Construct_UFunction_UUtilityFunction_IsSamePlatformGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_IsSamePlatformGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_IsSamePlatformGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_IsSamePlatformGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_IsSamePlatformGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_IsSamePlatformGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_IsShipping_Statics
	{
		struct UtilityFunction_eventIsShipping_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUtilityFunction_IsShipping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UtilityFunction_eventIsShipping_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtilityFunction_IsShipping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UtilityFunction_eventIsShipping_Parms), &Z_Construct_UFunction_UUtilityFunction_IsShipping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_IsShipping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_IsShipping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_IsShipping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_IsShipping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "IsShipping", nullptr, nullptr, sizeof(UtilityFunction_eventIsShipping_Parms), Z_Construct_UFunction_UUtilityFunction_IsShipping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_IsShipping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_IsShipping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_IsShipping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_IsShipping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_IsShipping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_IsSystemEnterAssignCircle_Statics
	{
		struct UtilityFunction_eventIsSystemEnterAssignCircle_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUtilityFunction_IsSystemEnterAssignCircle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UtilityFunction_eventIsSystemEnterAssignCircle_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtilityFunction_IsSystemEnterAssignCircle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UtilityFunction_eventIsSystemEnterAssignCircle_Parms), &Z_Construct_UFunction_UUtilityFunction_IsSystemEnterAssignCircle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_IsSystemEnterAssignCircle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_IsSystemEnterAssignCircle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_IsSystemEnterAssignCircle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_IsSystemEnterAssignCircle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "IsSystemEnterAssignCircle", nullptr, nullptr, sizeof(UtilityFunction_eventIsSystemEnterAssignCircle_Parms), Z_Construct_UFunction_UUtilityFunction_IsSystemEnterAssignCircle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_IsSystemEnterAssignCircle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_IsSystemEnterAssignCircle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_IsSystemEnterAssignCircle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_IsSystemEnterAssignCircle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_IsSystemEnterAssignCircle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_IsTestBuild_Statics
	{
		struct UtilityFunction_eventIsTestBuild_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUtilityFunction_IsTestBuild_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UtilityFunction_eventIsTestBuild_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtilityFunction_IsTestBuild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UtilityFunction_eventIsTestBuild_Parms), &Z_Construct_UFunction_UUtilityFunction_IsTestBuild_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_IsTestBuild_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_IsTestBuild_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_IsTestBuild_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_IsTestBuild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "IsTestBuild", nullptr, nullptr, sizeof(UtilityFunction_eventIsTestBuild_Parms), Z_Construct_UFunction_UUtilityFunction_IsTestBuild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_IsTestBuild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_IsTestBuild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_IsTestBuild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_IsTestBuild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_IsTestBuild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_OperationalWidgetManagerCloseAllWidgets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_OperationalWidgetManagerCloseAllWidgets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_OperationalWidgetManagerCloseAllWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "OperationalWidgetManagerCloseAllWidgets", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_OperationalWidgetManagerCloseAllWidgets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_OperationalWidgetManagerCloseAllWidgets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_OperationalWidgetManagerCloseAllWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_OperationalWidgetManagerCloseAllWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_PlayLoadingScreen_Statics
	{
		struct UtilityFunction_eventPlayLoadingScreen_Parms
		{
			bool bPlayUntilStopped;
			float PlayTime;
		};
		static void NewProp_bPlayUntilStopped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayUntilStopped;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUtilityFunction_PlayLoadingScreen_Statics::NewProp_bPlayUntilStopped_SetBit(void* Obj)
	{
		((UtilityFunction_eventPlayLoadingScreen_Parms*)Obj)->bPlayUntilStopped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtilityFunction_PlayLoadingScreen_Statics::NewProp_bPlayUntilStopped = { "bPlayUntilStopped", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UtilityFunction_eventPlayLoadingScreen_Parms), &Z_Construct_UFunction_UUtilityFunction_PlayLoadingScreen_Statics::NewProp_bPlayUntilStopped_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUtilityFunction_PlayLoadingScreen_Statics::NewProp_PlayTime = { "PlayTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventPlayLoadingScreen_Parms, PlayTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_PlayLoadingScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_PlayLoadingScreen_Statics::NewProp_bPlayUntilStopped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_PlayLoadingScreen_Statics::NewProp_PlayTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_PlayLoadingScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_PlayLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "PlayLoadingScreen", nullptr, nullptr, sizeof(UtilityFunction_eventPlayLoadingScreen_Parms), Z_Construct_UFunction_UUtilityFunction_PlayLoadingScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_PlayLoadingScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_PlayLoadingScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_PlayLoadingScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_PlayLoadingScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_PlayLoadingScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_RequiresVirtualKeyboard_Statics
	{
		struct UtilityFunction_eventRequiresVirtualKeyboard_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUtilityFunction_RequiresVirtualKeyboard_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UtilityFunction_eventRequiresVirtualKeyboard_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtilityFunction_RequiresVirtualKeyboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UtilityFunction_eventRequiresVirtualKeyboard_Parms), &Z_Construct_UFunction_UUtilityFunction_RequiresVirtualKeyboard_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_RequiresVirtualKeyboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_RequiresVirtualKeyboard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_RequiresVirtualKeyboard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_RequiresVirtualKeyboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "RequiresVirtualKeyboard", nullptr, nullptr, sizeof(UtilityFunction_eventRequiresVirtualKeyboard_Parms), Z_Construct_UFunction_UUtilityFunction_RequiresVirtualKeyboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_RequiresVirtualKeyboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_RequiresVirtualKeyboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_RequiresVirtualKeyboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_RequiresVirtualKeyboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_RequiresVirtualKeyboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_RotateVectorToTarget_Statics
	{
		struct UtilityFunction_eventRotateVectorToTarget_Parms
		{
			FVector _StartVec;
			FVector _TargetVec;
			FRotator _rOutRot;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__StartVec;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__TargetVec;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rOutRot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUtilityFunction_RotateVectorToTarget_Statics::NewProp__StartVec = { "_StartVec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventRotateVectorToTarget_Parms, _StartVec), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUtilityFunction_RotateVectorToTarget_Statics::NewProp__TargetVec = { "_TargetVec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventRotateVectorToTarget_Parms, _TargetVec), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUtilityFunction_RotateVectorToTarget_Statics::NewProp__rOutRot = { "_rOutRot", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventRotateVectorToTarget_Parms, _rOutRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_RotateVectorToTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_RotateVectorToTarget_Statics::NewProp__StartVec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_RotateVectorToTarget_Statics::NewProp__TargetVec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_RotateVectorToTarget_Statics::NewProp__rOutRot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_RotateVectorToTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_RotateVectorToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "RotateVectorToTarget", nullptr, nullptr, sizeof(UtilityFunction_eventRotateVectorToTarget_Parms), Z_Construct_UFunction_UUtilityFunction_RotateVectorToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_RotateVectorToTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_RotateVectorToTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_RotateVectorToTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_RotateVectorToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_RotateVectorToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_SetAntiAliasingQuality_Statics
	{
		struct UtilityFunction_eventSetAntiAliasingQuality_Parms
		{
			int32 _sQuality;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sQuality;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtilityFunction_SetAntiAliasingQuality_Statics::NewProp__sQuality = { "_sQuality", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventSetAntiAliasingQuality_Parms, _sQuality), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_SetAntiAliasingQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_SetAntiAliasingQuality_Statics::NewProp__sQuality,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_SetAntiAliasingQuality_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_SetAntiAliasingQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "SetAntiAliasingQuality", nullptr, nullptr, sizeof(UtilityFunction_eventSetAntiAliasingQuality_Parms), Z_Construct_UFunction_UUtilityFunction_SetAntiAliasingQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SetAntiAliasingQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_SetAntiAliasingQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SetAntiAliasingQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_SetAntiAliasingQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_SetAntiAliasingQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_SetDLSS_OptionIndex_Statics
	{
		struct UtilityFunction_eventSetDLSS_OptionIndex_Parms
		{
			int32 Index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtilityFunction_SetDLSS_OptionIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventSetDLSS_OptionIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_SetDLSS_OptionIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_SetDLSS_OptionIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_SetDLSS_OptionIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_SetDLSS_OptionIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "SetDLSS_OptionIndex", nullptr, nullptr, sizeof(UtilityFunction_eventSetDLSS_OptionIndex_Parms), Z_Construct_UFunction_UUtilityFunction_SetDLSS_OptionIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SetDLSS_OptionIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_SetDLSS_OptionIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SetDLSS_OptionIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_SetDLSS_OptionIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_SetDLSS_OptionIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_SetEnableDynamicShadow_Statics
	{
		struct UtilityFunction_eventSetEnableDynamicShadow_Parms
		{
			UObject* _pWorldContextObject;
			bool _bEnable;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static void NewProp__bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUtilityFunction_SetEnableDynamicShadow_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventSetEnableDynamicShadow_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUtilityFunction_SetEnableDynamicShadow_Statics::NewProp__bEnable_SetBit(void* Obj)
	{
		((UtilityFunction_eventSetEnableDynamicShadow_Parms*)Obj)->_bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtilityFunction_SetEnableDynamicShadow_Statics::NewProp__bEnable = { "_bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UtilityFunction_eventSetEnableDynamicShadow_Parms), &Z_Construct_UFunction_UUtilityFunction_SetEnableDynamicShadow_Statics::NewProp__bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_SetEnableDynamicShadow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_SetEnableDynamicShadow_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_SetEnableDynamicShadow_Statics::NewProp__bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_SetEnableDynamicShadow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_SetEnableDynamicShadow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "SetEnableDynamicShadow", nullptr, nullptr, sizeof(UtilityFunction_eventSetEnableDynamicShadow_Parms), Z_Construct_UFunction_UUtilityFunction_SetEnableDynamicShadow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SetEnableDynamicShadow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_SetEnableDynamicShadow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SetEnableDynamicShadow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_SetEnableDynamicShadow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_SetEnableDynamicShadow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_SetEnableLoadingScreen_Statics
	{
		struct UtilityFunction_eventSetEnableLoadingScreen_Parms
		{
			bool _Enable;
		};
		static void NewProp__Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUtilityFunction_SetEnableLoadingScreen_Statics::NewProp__Enable_SetBit(void* Obj)
	{
		((UtilityFunction_eventSetEnableLoadingScreen_Parms*)Obj)->_Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtilityFunction_SetEnableLoadingScreen_Statics::NewProp__Enable = { "_Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UtilityFunction_eventSetEnableLoadingScreen_Parms), &Z_Construct_UFunction_UUtilityFunction_SetEnableLoadingScreen_Statics::NewProp__Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_SetEnableLoadingScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_SetEnableLoadingScreen_Statics::NewProp__Enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_SetEnableLoadingScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_SetEnableLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "SetEnableLoadingScreen", nullptr, nullptr, sizeof(UtilityFunction_eventSetEnableLoadingScreen_Parms), Z_Construct_UFunction_UUtilityFunction_SetEnableLoadingScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SetEnableLoadingScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_SetEnableLoadingScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SetEnableLoadingScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_SetEnableLoadingScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_SetEnableLoadingScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_SetEnableVSync_Statics
	{
		struct UtilityFunction_eventSetEnableVSync_Parms
		{
			bool _bEnable;
		};
		static void NewProp__bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUtilityFunction_SetEnableVSync_Statics::NewProp__bEnable_SetBit(void* Obj)
	{
		((UtilityFunction_eventSetEnableVSync_Parms*)Obj)->_bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtilityFunction_SetEnableVSync_Statics::NewProp__bEnable = { "_bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UtilityFunction_eventSetEnableVSync_Parms), &Z_Construct_UFunction_UUtilityFunction_SetEnableVSync_Statics::NewProp__bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_SetEnableVSync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_SetEnableVSync_Statics::NewProp__bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_SetEnableVSync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_SetEnableVSync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "SetEnableVSync", nullptr, nullptr, sizeof(UtilityFunction_eventSetEnableVSync_Parms), Z_Construct_UFunction_UUtilityFunction_SetEnableVSync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SetEnableVSync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_SetEnableVSync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SetEnableVSync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_SetEnableVSync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_SetEnableVSync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_SetFoliageQuality_Statics
	{
		struct UtilityFunction_eventSetFoliageQuality_Parms
		{
			int32 _sQuality;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sQuality;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtilityFunction_SetFoliageQuality_Statics::NewProp__sQuality = { "_sQuality", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventSetFoliageQuality_Parms, _sQuality), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_SetFoliageQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_SetFoliageQuality_Statics::NewProp__sQuality,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_SetFoliageQuality_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_SetFoliageQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "SetFoliageQuality", nullptr, nullptr, sizeof(UtilityFunction_eventSetFoliageQuality_Parms), Z_Construct_UFunction_UUtilityFunction_SetFoliageQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SetFoliageQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_SetFoliageQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SetFoliageQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_SetFoliageQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_SetFoliageQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_SetMotionBlur_Statics
	{
		struct UtilityFunction_eventSetMotionBlur_Parms
		{
			APlayerController* _Controller;
			bool _bEnable;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__Controller;
		static void NewProp__bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bEnable;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUtilityFunction_SetMotionBlur_Statics::NewProp__Controller = { "_Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventSetMotionBlur_Parms, _Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUtilityFunction_SetMotionBlur_Statics::NewProp__bEnable_SetBit(void* Obj)
	{
		((UtilityFunction_eventSetMotionBlur_Parms*)Obj)->_bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtilityFunction_SetMotionBlur_Statics::NewProp__bEnable = { "_bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UtilityFunction_eventSetMotionBlur_Parms), &Z_Construct_UFunction_UUtilityFunction_SetMotionBlur_Statics::NewProp__bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUtilityFunction_SetMotionBlur_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UtilityFunction_eventSetMotionBlur_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUtilityFunction_SetMotionBlur_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UtilityFunction_eventSetMotionBlur_Parms), &Z_Construct_UFunction_UUtilityFunction_SetMotionBlur_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_SetMotionBlur_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_SetMotionBlur_Statics::NewProp__Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_SetMotionBlur_Statics::NewProp__bEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_SetMotionBlur_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_SetMotionBlur_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_SetMotionBlur_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "SetMotionBlur", nullptr, nullptr, sizeof(UtilityFunction_eventSetMotionBlur_Parms), Z_Construct_UFunction_UUtilityFunction_SetMotionBlur_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SetMotionBlur_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_SetMotionBlur_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SetMotionBlur_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_SetMotionBlur()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_SetMotionBlur_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_SetPostPrecessQuality_Statics
	{
		struct UtilityFunction_eventSetPostPrecessQuality_Parms
		{
			int32 _sQuality;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sQuality;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtilityFunction_SetPostPrecessQuality_Statics::NewProp__sQuality = { "_sQuality", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventSetPostPrecessQuality_Parms, _sQuality), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_SetPostPrecessQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_SetPostPrecessQuality_Statics::NewProp__sQuality,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_SetPostPrecessQuality_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_SetPostPrecessQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "SetPostPrecessQuality", nullptr, nullptr, sizeof(UtilityFunction_eventSetPostPrecessQuality_Parms), Z_Construct_UFunction_UUtilityFunction_SetPostPrecessQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SetPostPrecessQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_SetPostPrecessQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SetPostPrecessQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_SetPostPrecessQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_SetPostPrecessQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_SetResolutionQuality_Statics
	{
		struct UtilityFunction_eventSetResolutionQuality_Parms
		{
			UObject* _pWorldContextObject;
			int32 _sQuality;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sQuality;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUtilityFunction_SetResolutionQuality_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventSetResolutionQuality_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtilityFunction_SetResolutionQuality_Statics::NewProp__sQuality = { "_sQuality", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventSetResolutionQuality_Parms, _sQuality), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_SetResolutionQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_SetResolutionQuality_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_SetResolutionQuality_Statics::NewProp__sQuality,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_SetResolutionQuality_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_SetResolutionQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "SetResolutionQuality", nullptr, nullptr, sizeof(UtilityFunction_eventSetResolutionQuality_Parms), Z_Construct_UFunction_UUtilityFunction_SetResolutionQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SetResolutionQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_SetResolutionQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SetResolutionQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_SetResolutionQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_SetResolutionQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_SetResolutionQualityWithWorld_Statics
	{
		struct UtilityFunction_eventSetResolutionQualityWithWorld_Parms
		{
			UObject* WorldContextObject;
			int32 Quality;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quality;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUtilityFunction_SetResolutionQualityWithWorld_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventSetResolutionQualityWithWorld_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtilityFunction_SetResolutionQualityWithWorld_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventSetResolutionQualityWithWorld_Parms, Quality), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_SetResolutionQualityWithWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_SetResolutionQualityWithWorld_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_SetResolutionQualityWithWorld_Statics::NewProp_Quality,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_SetResolutionQualityWithWorld_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_SetResolutionQualityWithWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "SetResolutionQualityWithWorld", nullptr, nullptr, sizeof(UtilityFunction_eventSetResolutionQualityWithWorld_Parms), Z_Construct_UFunction_UUtilityFunction_SetResolutionQualityWithWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SetResolutionQualityWithWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_SetResolutionQualityWithWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SetResolutionQualityWithWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_SetResolutionQualityWithWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_SetResolutionQualityWithWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_SetScreenResolution_Statics
	{
		struct UtilityFunction_eventSetScreenResolution_Parms
		{
			UObject* _pWorldContextObject;
			FIntPoint _Resolution;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Resolution;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUtilityFunction_SetScreenResolution_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventSetScreenResolution_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUtilityFunction_SetScreenResolution_Statics::NewProp__Resolution = { "_Resolution", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventSetScreenResolution_Parms, _Resolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_SetScreenResolution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_SetScreenResolution_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_SetScreenResolution_Statics::NewProp__Resolution,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_SetScreenResolution_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_SetScreenResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "SetScreenResolution", nullptr, nullptr, sizeof(UtilityFunction_eventSetScreenResolution_Parms), Z_Construct_UFunction_UUtilityFunction_SetScreenResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SetScreenResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_SetScreenResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SetScreenResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_SetScreenResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_SetScreenResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_SetScreenResolutionWithWorld_Statics
	{
		struct UtilityFunction_eventSetScreenResolutionWithWorld_Parms
		{
			UObject* WorldContextObject;
			FIntPoint Resolution;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Resolution;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUtilityFunction_SetScreenResolutionWithWorld_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventSetScreenResolutionWithWorld_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUtilityFunction_SetScreenResolutionWithWorld_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventSetScreenResolutionWithWorld_Parms, Resolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_SetScreenResolutionWithWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_SetScreenResolutionWithWorld_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_SetScreenResolutionWithWorld_Statics::NewProp_Resolution,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_SetScreenResolutionWithWorld_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_SetScreenResolutionWithWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "SetScreenResolutionWithWorld", nullptr, nullptr, sizeof(UtilityFunction_eventSetScreenResolutionWithWorld_Parms), Z_Construct_UFunction_UUtilityFunction_SetScreenResolutionWithWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SetScreenResolutionWithWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_SetScreenResolutionWithWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SetScreenResolutionWithWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_SetScreenResolutionWithWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_SetScreenResolutionWithWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_SetShadowQuality_Statics
	{
		struct UtilityFunction_eventSetShadowQuality_Parms
		{
			int32 _sQuality;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sQuality;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtilityFunction_SetShadowQuality_Statics::NewProp__sQuality = { "_sQuality", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventSetShadowQuality_Parms, _sQuality), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_SetShadowQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_SetShadowQuality_Statics::NewProp__sQuality,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_SetShadowQuality_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_SetShadowQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "SetShadowQuality", nullptr, nullptr, sizeof(UtilityFunction_eventSetShadowQuality_Parms), Z_Construct_UFunction_UUtilityFunction_SetShadowQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SetShadowQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_SetShadowQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SetShadowQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_SetShadowQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_SetShadowQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_SetTextureQuality_Statics
	{
		struct UtilityFunction_eventSetTextureQuality_Parms
		{
			int32 _sQuality;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sQuality;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtilityFunction_SetTextureQuality_Statics::NewProp__sQuality = { "_sQuality", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventSetTextureQuality_Parms, _sQuality), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_SetTextureQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_SetTextureQuality_Statics::NewProp__sQuality,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_SetTextureQuality_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_SetTextureQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "SetTextureQuality", nullptr, nullptr, sizeof(UtilityFunction_eventSetTextureQuality_Parms), Z_Construct_UFunction_UUtilityFunction_SetTextureQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SetTextureQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_SetTextureQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SetTextureQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_SetTextureQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_SetTextureQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_SetViewDistanceQuality_Statics
	{
		struct UtilityFunction_eventSetViewDistanceQuality_Parms
		{
			int32 _sQuality;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sQuality;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtilityFunction_SetViewDistanceQuality_Statics::NewProp__sQuality = { "_sQuality", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventSetViewDistanceQuality_Parms, _sQuality), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_SetViewDistanceQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_SetViewDistanceQuality_Statics::NewProp__sQuality,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_SetViewDistanceQuality_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_SetViewDistanceQuality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "SetViewDistanceQuality", nullptr, nullptr, sizeof(UtilityFunction_eventSetViewDistanceQuality_Parms), Z_Construct_UFunction_UUtilityFunction_SetViewDistanceQuality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SetViewDistanceQuality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_SetViewDistanceQuality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SetViewDistanceQuality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_SetViewDistanceQuality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_SetViewDistanceQuality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_SetWindowMode_Statics
	{
		struct UtilityFunction_eventSetWindowMode_Parms
		{
			UObject* _pWorldContextObject;
			int32 _sMode;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pWorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__sMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUtilityFunction_SetWindowMode_Statics::NewProp__pWorldContextObject = { "_pWorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventSetWindowMode_Parms, _pWorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtilityFunction_SetWindowMode_Statics::NewProp__sMode = { "_sMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventSetWindowMode_Parms, _sMode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_SetWindowMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_SetWindowMode_Statics::NewProp__pWorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_SetWindowMode_Statics::NewProp__sMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_SetWindowMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
		{ "WorldContext", "_pWorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_SetWindowMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "SetWindowMode", nullptr, nullptr, sizeof(UtilityFunction_eventSetWindowMode_Parms), Z_Construct_UFunction_UUtilityFunction_SetWindowMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SetWindowMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_SetWindowMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SetWindowMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_SetWindowMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_SetWindowMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_SetWindowModeWithWorld_Statics
	{
		struct UtilityFunction_eventSetWindowModeWithWorld_Parms
		{
			UObject* WorldContextObject;
			int32 Mode;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Mode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUtilityFunction_SetWindowModeWithWorld_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventSetWindowModeWithWorld_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtilityFunction_SetWindowModeWithWorld_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventSetWindowModeWithWorld_Parms, Mode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_SetWindowModeWithWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_SetWindowModeWithWorld_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_SetWindowModeWithWorld_Statics::NewProp_Mode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_SetWindowModeWithWorld_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_SetWindowModeWithWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "SetWindowModeWithWorld", nullptr, nullptr, sizeof(UtilityFunction_eventSetWindowModeWithWorld_Parms), Z_Construct_UFunction_UUtilityFunction_SetWindowModeWithWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SetWindowModeWithWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_SetWindowModeWithWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SetWindowModeWithWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_SetWindowModeWithWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_SetWindowModeWithWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_SetXeSS_OptionIndex_Statics
	{
		struct UtilityFunction_eventSetXeSS_OptionIndex_Parms
		{
			int32 Index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtilityFunction_SetXeSS_OptionIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventSetXeSS_OptionIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_SetXeSS_OptionIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_SetXeSS_OptionIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_SetXeSS_OptionIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_SetXeSS_OptionIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "SetXeSS_OptionIndex", nullptr, nullptr, sizeof(UtilityFunction_eventSetXeSS_OptionIndex_Parms), Z_Construct_UFunction_UUtilityFunction_SetXeSS_OptionIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SetXeSS_OptionIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_SetXeSS_OptionIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SetXeSS_OptionIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_SetXeSS_OptionIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_SetXeSS_OptionIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_SortArray_Statics
	{
		struct UtilityFunction_eventSortArray_Parms
		{
			TArray<AActor*> _Array;
			TArray<AActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__Array_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__Array;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUtilityFunction_SortArray_Statics::NewProp__Array_Inner = { "_Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUtilityFunction_SortArray_Statics::NewProp__Array = { "_Array", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventSortArray_Parms, _Array), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUtilityFunction_SortArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUtilityFunction_SortArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventSortArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_SortArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_SortArray_Statics::NewProp__Array_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_SortArray_Statics::NewProp__Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_SortArray_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_SortArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_SortArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_SortArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "SortArray", nullptr, nullptr, sizeof(UtilityFunction_eventSortArray_Parms), Z_Construct_UFunction_UUtilityFunction_SortArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SortArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_SortArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_SortArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_SortArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_SortArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_StopLoadingScreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_StopLoadingScreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_StopLoadingScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "StopLoadingScreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_StopLoadingScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_StopLoadingScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_StopLoadingScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_StopLoadingScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtilityFunction_TwoVectorsFromAngle_Statics
	{
		struct UtilityFunction_eventTwoVectorsFromAngle_Parms
		{
			FVector _Vec1;
			FVector _Vec2;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Vec1;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Vec2;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUtilityFunction_TwoVectorsFromAngle_Statics::NewProp__Vec1 = { "_Vec1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventTwoVectorsFromAngle_Parms, _Vec1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUtilityFunction_TwoVectorsFromAngle_Statics::NewProp__Vec2 = { "_Vec2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventTwoVectorsFromAngle_Parms, _Vec2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUtilityFunction_TwoVectorsFromAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UtilityFunction_eventTwoVectorsFromAngle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunction_TwoVectorsFromAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_TwoVectorsFromAngle_Statics::NewProp__Vec1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_TwoVectorsFromAngle_Statics::NewProp__Vec2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunction_TwoVectorsFromAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunction_TwoVectorsFromAngle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunction_TwoVectorsFromAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunction, nullptr, "TwoVectorsFromAngle", nullptr, nullptr, sizeof(UtilityFunction_eventTwoVectorsFromAngle_Parms), Z_Construct_UFunction_UUtilityFunction_TwoVectorsFromAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_TwoVectorsFromAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtilityFunction_TwoVectorsFromAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunction_TwoVectorsFromAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtilityFunction_TwoVectorsFromAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtilityFunction_TwoVectorsFromAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUtilityFunction_NoRegister()
	{
		return UUtilityFunction::StaticClass();
	}
	struct Z_Construct_UClass_UUtilityFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUtilityFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUtilityFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUtilityFunction_AdjustFullScreenResolution, "AdjustFullScreenResolution" }, // 1462419910
		{ &Z_Construct_UFunction_UUtilityFunction_GetCpuInfo, "GetCpuInfo" }, // 2566294636
		{ &Z_Construct_UFunction_UUtilityFunction_GetGameCameraAspectRatio, "GetGameCameraAspectRatio" }, // 2434991561
		{ &Z_Construct_UFunction_UUtilityFunction_GetGpuInfo, "GetGpuInfo" }, // 3643768028
		{ &Z_Construct_UFunction_UUtilityFunction_GetMaxSupportedFullscreenResolution, "GetMaxSupportedFullscreenResolution" }, // 4057978325
		{ &Z_Construct_UFunction_UUtilityFunction_GetPlatform, "GetPlatform" }, // 935351948
		{ &Z_Construct_UFunction_UUtilityFunction_GetScreenResolution, "GetScreenResolution" }, // 3786878694
		{ &Z_Construct_UFunction_UUtilityFunction_GetWindowMode, "GetWindowMode" }, // 2509992237
		{ &Z_Construct_UFunction_UUtilityFunction_IsEditor, "IsEditor" }, // 2772155431
		{ &Z_Construct_UFunction_UUtilityFunction_IsEditor_NotGame, "IsEditor_NotGame" }, // 1427763583
		{ &Z_Construct_UFunction_UUtilityFunction_IsLoadInGameAnimation, "IsLoadInGameAnimation" }, // 3014349668
		{ &Z_Construct_UFunction_UUtilityFunction_IsNullOnlineSubsystem, "IsNullOnlineSubsystem" }, // 1619182202
		{ &Z_Construct_UFunction_UUtilityFunction_IsPlatformEpic, "IsPlatformEpic" }, // 388797691
		{ &Z_Construct_UFunction_UUtilityFunction_IsPlatformPlayStation, "IsPlatformPlayStation" }, // 2786880835
		{ &Z_Construct_UFunction_UUtilityFunction_IsPlatformSteam, "IsPlatformSteam" }, // 2624209977
		{ &Z_Construct_UFunction_UUtilityFunction_IsPlatformWindows, "IsPlatformWindows" }, // 454173398
		{ &Z_Construct_UFunction_UUtilityFunction_IsPlatformXBox, "IsPlatformXBox" }, // 2869701626
		{ &Z_Construct_UFunction_UUtilityFunction_IsSamePlatformGroup, "IsSamePlatformGroup" }, // 3793675834
		{ &Z_Construct_UFunction_UUtilityFunction_IsShipping, "IsShipping" }, // 1108975336
		{ &Z_Construct_UFunction_UUtilityFunction_IsSystemEnterAssignCircle, "IsSystemEnterAssignCircle" }, // 2384664466
		{ &Z_Construct_UFunction_UUtilityFunction_IsTestBuild, "IsTestBuild" }, // 1196337113
		{ &Z_Construct_UFunction_UUtilityFunction_OperationalWidgetManagerCloseAllWidgets, "OperationalWidgetManagerCloseAllWidgets" }, // 1952587948
		{ &Z_Construct_UFunction_UUtilityFunction_PlayLoadingScreen, "PlayLoadingScreen" }, // 3661082822
		{ &Z_Construct_UFunction_UUtilityFunction_RequiresVirtualKeyboard, "RequiresVirtualKeyboard" }, // 1060905241
		{ &Z_Construct_UFunction_UUtilityFunction_RotateVectorToTarget, "RotateVectorToTarget" }, // 2470594612
		{ &Z_Construct_UFunction_UUtilityFunction_SetAntiAliasingQuality, "SetAntiAliasingQuality" }, // 3171342726
		{ &Z_Construct_UFunction_UUtilityFunction_SetDLSS_OptionIndex, "SetDLSS_OptionIndex" }, // 3984383313
		{ &Z_Construct_UFunction_UUtilityFunction_SetEnableDynamicShadow, "SetEnableDynamicShadow" }, // 1070036220
		{ &Z_Construct_UFunction_UUtilityFunction_SetEnableLoadingScreen, "SetEnableLoadingScreen" }, // 2646016404
		{ &Z_Construct_UFunction_UUtilityFunction_SetEnableVSync, "SetEnableVSync" }, // 443703523
		{ &Z_Construct_UFunction_UUtilityFunction_SetFoliageQuality, "SetFoliageQuality" }, // 3242064173
		{ &Z_Construct_UFunction_UUtilityFunction_SetMotionBlur, "SetMotionBlur" }, // 3581733946
		{ &Z_Construct_UFunction_UUtilityFunction_SetPostPrecessQuality, "SetPostPrecessQuality" }, // 423121038
		{ &Z_Construct_UFunction_UUtilityFunction_SetResolutionQuality, "SetResolutionQuality" }, // 3838346103
		{ &Z_Construct_UFunction_UUtilityFunction_SetResolutionQualityWithWorld, "SetResolutionQualityWithWorld" }, // 2272697449
		{ &Z_Construct_UFunction_UUtilityFunction_SetScreenResolution, "SetScreenResolution" }, // 3951555129
		{ &Z_Construct_UFunction_UUtilityFunction_SetScreenResolutionWithWorld, "SetScreenResolutionWithWorld" }, // 1894205826
		{ &Z_Construct_UFunction_UUtilityFunction_SetShadowQuality, "SetShadowQuality" }, // 2448515010
		{ &Z_Construct_UFunction_UUtilityFunction_SetTextureQuality, "SetTextureQuality" }, // 2745695990
		{ &Z_Construct_UFunction_UUtilityFunction_SetViewDistanceQuality, "SetViewDistanceQuality" }, // 174144789
		{ &Z_Construct_UFunction_UUtilityFunction_SetWindowMode, "SetWindowMode" }, // 656082861
		{ &Z_Construct_UFunction_UUtilityFunction_SetWindowModeWithWorld, "SetWindowModeWithWorld" }, // 150865916
		{ &Z_Construct_UFunction_UUtilityFunction_SetXeSS_OptionIndex, "SetXeSS_OptionIndex" }, // 4128055789
		{ &Z_Construct_UFunction_UUtilityFunction_SortArray, "SortArray" }, // 3913075012
		{ &Z_Construct_UFunction_UUtilityFunction_StopLoadingScreen, "StopLoadingScreen" }, // 899348044
		{ &Z_Construct_UFunction_UUtilityFunction_TwoVectorsFromAngle, "TwoVectorsFromAngle" }, // 2580886939
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUtilityFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UtilityFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UtilityFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUtilityFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUtilityFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUtilityFunction_Statics::ClassParams = {
		&UUtilityFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUtilityFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUtilityFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUtilityFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUtilityFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUtilityFunction, 2960574921);
	template<> ABP_200508_API UClass* StaticClass<UUtilityFunction>()
	{
		return UUtilityFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUtilityFunction(Z_Construct_UClass_UUtilityFunction, &UUtilityFunction::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UUtilityFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUtilityFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
