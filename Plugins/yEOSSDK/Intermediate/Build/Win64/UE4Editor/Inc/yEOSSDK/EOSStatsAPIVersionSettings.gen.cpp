// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSStatsAPIVersionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSStatsAPIVersionSettings() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
class UScriptStruct* FEOSStatsAPIVersionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSStatsAPIVersionSettings"), sizeof(FEOSStatsAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSStatsAPIVersionSettings>()
{
	return FEOSStatsAPIVersionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSStatsAPIVersionSettings(FEOSStatsAPIVersionSettings::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSStatsAPIVersionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSStatsAPIVersionSettings
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSStatsAPIVersionSettings()
	{
		UScriptStruct::DeferCppStructOps<FEOSStatsAPIVersionSettings>(FName(TEXT("EOSStatsAPIVersionSettings")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSStatsAPIVersionSettings;
	struct Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IngestStat_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IngestStat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IngestData_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IngestData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QueryStats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stat_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Stat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetStatCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GetStatCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyStatByIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CopyStatByIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyStatByName_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CopyStatByName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSStatsAPIVersionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSStatsAPIVersionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::NewProp_IngestStat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSStatsAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSStatsAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::NewProp_IngestStat = { "IngestStat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSStatsAPIVersionSettings, IngestStat), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::NewProp_IngestStat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::NewProp_IngestStat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::NewProp_IngestData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSStatsAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSStatsAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::NewProp_IngestData = { "IngestData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSStatsAPIVersionSettings, IngestData), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::NewProp_IngestData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::NewProp_IngestData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::NewProp_QueryStats_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSStatsAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSStatsAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::NewProp_QueryStats = { "QueryStats", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSStatsAPIVersionSettings, QueryStats), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::NewProp_QueryStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::NewProp_QueryStats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::NewProp_Stat_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSStatsAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSStatsAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSStatsAPIVersionSettings, Stat), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::NewProp_Stat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::NewProp_Stat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::NewProp_GetStatCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSStatsAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSStatsAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::NewProp_GetStatCount = { "GetStatCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSStatsAPIVersionSettings, GetStatCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::NewProp_GetStatCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::NewProp_GetStatCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::NewProp_CopyStatByIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSStatsAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSStatsAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::NewProp_CopyStatByIndex = { "CopyStatByIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSStatsAPIVersionSettings, CopyStatByIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::NewProp_CopyStatByIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::NewProp_CopyStatByIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::NewProp_CopyStatByName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSStatsAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSStatsAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::NewProp_CopyStatByName = { "CopyStatByName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSStatsAPIVersionSettings, CopyStatByName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::NewProp_CopyStatByName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::NewProp_CopyStatByName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::NewProp_IngestStat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::NewProp_IngestData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::NewProp_QueryStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::NewProp_Stat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::NewProp_GetStatCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::NewProp_CopyStatByIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::NewProp_CopyStatByName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSStatsAPIVersionSettings",
		sizeof(FEOSStatsAPIVersionSettings),
		alignof(FEOSStatsAPIVersionSettings),
		Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSStatsAPIVersionSettings"), sizeof(FEOSStatsAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSStatsAPIVersionSettings_Hash() { return 468695674U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
