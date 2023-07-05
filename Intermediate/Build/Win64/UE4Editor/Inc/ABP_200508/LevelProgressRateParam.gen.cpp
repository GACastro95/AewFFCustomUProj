// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/LevelProgressRateParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelProgressRateParam() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FLevelProgressRateParam();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FLevelProgressRateParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FLevelProgressRateParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelProgressRateParam, Z_Construct_UPackage__Script_ABP_200508(), TEXT("LevelProgressRateParam"), sizeof(FLevelProgressRateParam), Get_Z_Construct_UScriptStruct_FLevelProgressRateParam_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FLevelProgressRateParam>()
{
	return FLevelProgressRateParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelProgressRateParam(FLevelProgressRateParam::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("LevelProgressRateParam"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFLevelProgressRateParam
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFLevelProgressRateParam()
	{
		UScriptStruct::DeferCppStructOps<FLevelProgressRateParam>(FName(TEXT("LevelProgressRateParam")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFLevelProgressRateParam;
	struct Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartNextLevelPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartNextLevelPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartProgressRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartProgressRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProgressRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseNextLevelPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BaseNextLevelPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemainingNextLevelPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RemainingNextLevelPoints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LevelProgressRateParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelProgressRateParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::NewProp_StartPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelProgressRateParam" },
		{ "ModuleRelativePath", "Public/LevelProgressRateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::NewProp_StartPoint = { "StartPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelProgressRateParam, StartPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::NewProp_StartPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::NewProp_StartPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::NewProp_StartNextLevelPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelProgressRateParam" },
		{ "ModuleRelativePath", "Public/LevelProgressRateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::NewProp_StartNextLevelPoint = { "StartNextLevelPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelProgressRateParam, StartNextLevelPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::NewProp_StartNextLevelPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::NewProp_StartNextLevelPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::NewProp_EndPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelProgressRateParam" },
		{ "ModuleRelativePath", "Public/LevelProgressRateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::NewProp_EndPoint = { "EndPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelProgressRateParam, EndPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::NewProp_EndPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::NewProp_EndPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::NewProp_StartProgressRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelProgressRateParam" },
		{ "ModuleRelativePath", "Public/LevelProgressRateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::NewProp_StartProgressRate = { "StartProgressRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelProgressRateParam, StartProgressRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::NewProp_StartProgressRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::NewProp_StartProgressRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::NewProp_ProgressRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelProgressRateParam" },
		{ "ModuleRelativePath", "Public/LevelProgressRateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::NewProp_ProgressRate = { "ProgressRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelProgressRateParam, ProgressRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::NewProp_ProgressRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::NewProp_ProgressRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::NewProp_BaseNextLevelPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelProgressRateParam" },
		{ "ModuleRelativePath", "Public/LevelProgressRateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::NewProp_BaseNextLevelPoint = { "BaseNextLevelPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelProgressRateParam, BaseNextLevelPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::NewProp_BaseNextLevelPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::NewProp_BaseNextLevelPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::NewProp_RemainingNextLevelPoints_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LevelProgressRateParam" },
		{ "ModuleRelativePath", "Public/LevelProgressRateParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::NewProp_RemainingNextLevelPoints = { "RemainingNextLevelPoints", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelProgressRateParam, RemainingNextLevelPoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::NewProp_RemainingNextLevelPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::NewProp_RemainingNextLevelPoints_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::NewProp_StartPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::NewProp_StartNextLevelPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::NewProp_EndPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::NewProp_StartProgressRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::NewProp_ProgressRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::NewProp_BaseNextLevelPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::NewProp_RemainingNextLevelPoints,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"LevelProgressRateParam",
		sizeof(FLevelProgressRateParam),
		alignof(FLevelProgressRateParam),
		Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelProgressRateParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelProgressRateParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelProgressRateParam"), sizeof(FLevelProgressRateParam), Get_Z_Construct_UScriptStruct_FLevelProgressRateParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelProgressRateParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelProgressRateParam_Hash() { return 106827776U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
