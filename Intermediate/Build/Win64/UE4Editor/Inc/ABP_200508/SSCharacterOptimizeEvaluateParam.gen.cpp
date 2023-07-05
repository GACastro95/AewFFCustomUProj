// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSCharacterOptimizeEvaluateParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSCharacterOptimizeEvaluateParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FSSCharacterOptimizeEvaluateParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSCharacterOptimizeEvaluateParam"), sizeof(FSSCharacterOptimizeEvaluateParam), Get_Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSCharacterOptimizeEvaluateParam>()
{
	return FSSCharacterOptimizeEvaluateParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSCharacterOptimizeEvaluateParam(FSSCharacterOptimizeEvaluateParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSCharacterOptimizeEvaluateParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSCharacterOptimizeEvaluateParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSCharacterOptimizeEvaluateParam()
	{
		UScriptStruct::DeferCppStructOps<FSSCharacterOptimizeEvaluateParam>(FName(TEXT("SSCharacterOptimizeEvaluateParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSCharacterOptimizeEvaluateParam;
	struct Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngleThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngleThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngleOverCoef_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AngleOverCoef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAddLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAddLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowFPSDeltaTimeRateIncrease_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LowFPSDeltaTimeRateIncrease;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowFPSDeltaTimeRateDecrease_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LowFPSDeltaTimeRateDecrease;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowFPSFrameThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LowFPSFrameThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxVisualize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxVisualize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxVisualizeSilhouette_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxVisualizeSilhouette;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceVisualizeDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForceVisualizeDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceMinLODDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForceMinLODDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceVisualizeDistanceScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForceVisualizeDistanceScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExMeshIntervalScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExMeshIntervalScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceEnableDynamicShadow_MetaData[];
#endif
		static void NewProp_ForceEnableDynamicShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForceEnableDynamicShadow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceEnableDistanceCulling_MetaData[];
#endif
		static void NewProp_ForceEnableDistanceCulling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForceEnableDistanceCulling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicShadowDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DynamicShadowDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceDisableCharaMesh_MetaData[];
#endif
		static void NewProp_ForceDisableCharaMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForceDisableCharaMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeEvaluateParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSCharacterOptimizeEvaluateParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_AngleThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeEvaluateParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeEvaluateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_AngleThreshold = { "AngleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterOptimizeEvaluateParam, AngleThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_AngleThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_AngleThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_AngleOverCoef_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeEvaluateParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeEvaluateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_AngleOverCoef = { "AngleOverCoef", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterOptimizeEvaluateParam, AngleOverCoef), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_AngleOverCoef_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_AngleOverCoef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_MaxAddLevel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeEvaluateParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeEvaluateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_MaxAddLevel = { "MaxAddLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterOptimizeEvaluateParam, MaxAddLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_MaxAddLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_MaxAddLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_LowFPSDeltaTimeRateIncrease_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeEvaluateParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeEvaluateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_LowFPSDeltaTimeRateIncrease = { "LowFPSDeltaTimeRateIncrease", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterOptimizeEvaluateParam, LowFPSDeltaTimeRateIncrease), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_LowFPSDeltaTimeRateIncrease_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_LowFPSDeltaTimeRateIncrease_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_LowFPSDeltaTimeRateDecrease_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeEvaluateParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeEvaluateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_LowFPSDeltaTimeRateDecrease = { "LowFPSDeltaTimeRateDecrease", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterOptimizeEvaluateParam, LowFPSDeltaTimeRateDecrease), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_LowFPSDeltaTimeRateDecrease_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_LowFPSDeltaTimeRateDecrease_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_LowFPSFrameThreshold_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeEvaluateParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeEvaluateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_LowFPSFrameThreshold = { "LowFPSFrameThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterOptimizeEvaluateParam, LowFPSFrameThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_LowFPSFrameThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_LowFPSFrameThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_MaxVisualize_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeEvaluateParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeEvaluateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_MaxVisualize = { "MaxVisualize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterOptimizeEvaluateParam, MaxVisualize), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_MaxVisualize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_MaxVisualize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_MaxVisualizeSilhouette_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeEvaluateParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeEvaluateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_MaxVisualizeSilhouette = { "MaxVisualizeSilhouette", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterOptimizeEvaluateParam, MaxVisualizeSilhouette), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_MaxVisualizeSilhouette_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_MaxVisualizeSilhouette_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ForceVisualizeDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeEvaluateParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeEvaluateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ForceVisualizeDistance = { "ForceVisualizeDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterOptimizeEvaluateParam, ForceVisualizeDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ForceVisualizeDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ForceVisualizeDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ForceMinLODDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeEvaluateParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeEvaluateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ForceMinLODDistance = { "ForceMinLODDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterOptimizeEvaluateParam, ForceMinLODDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ForceMinLODDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ForceMinLODDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ForceVisualizeDistanceScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeEvaluateParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeEvaluateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ForceVisualizeDistanceScale = { "ForceVisualizeDistanceScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterOptimizeEvaluateParam, ForceVisualizeDistanceScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ForceVisualizeDistanceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ForceVisualizeDistanceScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ExMeshIntervalScale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeEvaluateParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeEvaluateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ExMeshIntervalScale = { "ExMeshIntervalScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterOptimizeEvaluateParam, ExMeshIntervalScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ExMeshIntervalScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ExMeshIntervalScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ForceEnableDynamicShadow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeEvaluateParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeEvaluateParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ForceEnableDynamicShadow_SetBit(void* Obj)
	{
		((FSSCharacterOptimizeEvaluateParam*)Obj)->ForceEnableDynamicShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ForceEnableDynamicShadow = { "ForceEnableDynamicShadow", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSCharacterOptimizeEvaluateParam), &Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ForceEnableDynamicShadow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ForceEnableDynamicShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ForceEnableDynamicShadow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ForceEnableDistanceCulling_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeEvaluateParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeEvaluateParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ForceEnableDistanceCulling_SetBit(void* Obj)
	{
		((FSSCharacterOptimizeEvaluateParam*)Obj)->ForceEnableDistanceCulling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ForceEnableDistanceCulling = { "ForceEnableDistanceCulling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSCharacterOptimizeEvaluateParam), &Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ForceEnableDistanceCulling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ForceEnableDistanceCulling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ForceEnableDistanceCulling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_DynamicShadowDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeEvaluateParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeEvaluateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_DynamicShadowDistance = { "DynamicShadowDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSCharacterOptimizeEvaluateParam, DynamicShadowDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_DynamicShadowDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_DynamicShadowDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ForceDisableCharaMesh_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSCharacterOptimizeEvaluateParam" },
		{ "ModuleRelativePath", "Public/SSCharacterOptimizeEvaluateParam.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ForceDisableCharaMesh_SetBit(void* Obj)
	{
		((FSSCharacterOptimizeEvaluateParam*)Obj)->ForceDisableCharaMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ForceDisableCharaMesh = { "ForceDisableCharaMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSSCharacterOptimizeEvaluateParam), &Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ForceDisableCharaMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ForceDisableCharaMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ForceDisableCharaMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_AngleThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_AngleOverCoef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_MaxAddLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_LowFPSDeltaTimeRateIncrease,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_LowFPSDeltaTimeRateDecrease,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_LowFPSFrameThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_MaxVisualize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_MaxVisualizeSilhouette,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ForceVisualizeDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ForceMinLODDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ForceVisualizeDistanceScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ExMeshIntervalScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ForceEnableDynamicShadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ForceEnableDistanceCulling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_DynamicShadowDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::NewProp_ForceDisableCharaMesh,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSCharacterOptimizeEvaluateParam",
		sizeof(FSSCharacterOptimizeEvaluateParam),
		alignof(FSSCharacterOptimizeEvaluateParam),
		Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSCharacterOptimizeEvaluateParam"), sizeof(FSSCharacterOptimizeEvaluateParam), Get_Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSCharacterOptimizeEvaluateParam_Hash() { return 1309013805U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
