// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELMatchScore_StarData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMatchScore_StarData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELMatchScore_StarData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FELMatchScore_StarData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMatchScore_StarData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMatchScore_StarData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELMatchScore_StarData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMatchScore_StarData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELMatchScore_StarData"), sizeof(FELMatchScore_StarData), Get_Z_Construct_UScriptStruct_FELMatchScore_StarData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELMatchScore_StarData>()
{
	return FELMatchScore_StarData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMatchScore_StarData(FELMatchScore_StarData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELMatchScore_StarData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELMatchScore_StarData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELMatchScore_StarData()
	{
		UScriptStruct::DeferCppStructOps<FELMatchScore_StarData>(FName(TEXT("ELMatchScore_StarData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELMatchScore_StarData;
	struct Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Star_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Star;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cache_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Cache;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CacheForCareer_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CacheForCareer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreForSSMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScoreForSSMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CacheForSSMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CacheForSSMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMatchScore_StarData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMatchScore_StarData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::NewProp_Star_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchScore_StarData" },
		{ "ModuleRelativePath", "Public/ELMatchScore_StarData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::NewProp_Star = { "Star", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchScore_StarData, Star), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::NewProp_Star_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::NewProp_Star_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::NewProp_Score_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchScore_StarData" },
		{ "ModuleRelativePath", "Public/ELMatchScore_StarData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchScore_StarData, Score), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::NewProp_Score_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::NewProp_Score_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::NewProp_Cache_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchScore_StarData" },
		{ "ModuleRelativePath", "Public/ELMatchScore_StarData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::NewProp_Cache = { "Cache", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchScore_StarData, Cache), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::NewProp_Cache_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::NewProp_Cache_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::NewProp_CacheForCareer_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchScore_StarData" },
		{ "ModuleRelativePath", "Public/ELMatchScore_StarData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::NewProp_CacheForCareer = { "CacheForCareer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchScore_StarData, CacheForCareer), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::NewProp_CacheForCareer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::NewProp_CacheForCareer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::NewProp_ScoreForSSMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchScore_StarData" },
		{ "ModuleRelativePath", "Public/ELMatchScore_StarData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::NewProp_ScoreForSSMode = { "ScoreForSSMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchScore_StarData, ScoreForSSMode), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::NewProp_ScoreForSSMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::NewProp_ScoreForSSMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::NewProp_CacheForSSMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchScore_StarData" },
		{ "ModuleRelativePath", "Public/ELMatchScore_StarData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::NewProp_CacheForSSMode = { "CacheForSSMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchScore_StarData, CacheForSSMode), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::NewProp_CacheForSSMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::NewProp_CacheForSSMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::NewProp_Star,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::NewProp_Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::NewProp_Cache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::NewProp_CacheForCareer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::NewProp_ScoreForSSMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::NewProp_CacheForSSMode,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMatchScore_StarData",
		sizeof(FELMatchScore_StarData),
		alignof(FELMatchScore_StarData),
		Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMatchScore_StarData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMatchScore_StarData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMatchScore_StarData"), sizeof(FELMatchScore_StarData), Get_Z_Construct_UScriptStruct_FELMatchScore_StarData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMatchScore_StarData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMatchScore_StarData_Hash() { return 3373598376U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
