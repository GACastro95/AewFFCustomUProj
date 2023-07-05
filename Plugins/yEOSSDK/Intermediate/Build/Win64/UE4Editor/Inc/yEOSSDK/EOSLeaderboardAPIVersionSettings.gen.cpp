// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSLeaderboardAPIVersionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSLeaderboardAPIVersionSettings() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
class UScriptStruct* FEOSLeaderboardAPIVersionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSLeaderboardAPIVersionSettings"), sizeof(FEOSLeaderboardAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSLeaderboardAPIVersionSettings>()
{
	return FEOSLeaderboardAPIVersionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSLeaderboardAPIVersionSettings(FEOSLeaderboardAPIVersionSettings::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSLeaderboardAPIVersionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSLeaderboardAPIVersionSettings
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSLeaderboardAPIVersionSettings()
	{
		UScriptStruct::DeferCppStructOps<FEOSLeaderboardAPIVersionSettings>(FName(TEXT("EOSLeaderboardAPIVersionSettings")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSLeaderboardAPIVersionSettings;
	struct Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryLeaderboardDefinitions_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QueryLeaderboardDefinitions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetLeaderboardDefinitionCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GetLeaderboardDefinitionCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyLeaderboardDefinitionByIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CopyLeaderboardDefinitionByIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryLeaderboardRanks_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QueryLeaderboardRanks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryLeaderbaordUserScores_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QueryLeaderbaordUserScores;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserScoresQueryStatInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserScoresQueryStatInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetLeaderboardRecordCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GetLeaderboardRecordCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyLeaderboardRecordByIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CopyLeaderboardRecordByIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetLeatestLeaderboardScoreCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GetLeatestLeaderboardScoreCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyLeaderboardUserScoreByIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CopyLeaderboardUserScoreByIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyLeaderboardUserScoreByUserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CopyLeaderboardUserScoreByUserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSLeaderboardAPIVersionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSLeaderboardAPIVersionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_QueryLeaderboardDefinitions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLeaderboardAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLeaderboardAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_QueryLeaderboardDefinitions = { "QueryLeaderboardDefinitions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLeaderboardAPIVersionSettings, QueryLeaderboardDefinitions), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_QueryLeaderboardDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_QueryLeaderboardDefinitions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_GetLeaderboardDefinitionCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLeaderboardAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLeaderboardAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_GetLeaderboardDefinitionCount = { "GetLeaderboardDefinitionCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLeaderboardAPIVersionSettings, GetLeaderboardDefinitionCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_GetLeaderboardDefinitionCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_GetLeaderboardDefinitionCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_CopyLeaderboardDefinitionByIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLeaderboardAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLeaderboardAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_CopyLeaderboardDefinitionByIndex = { "CopyLeaderboardDefinitionByIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLeaderboardAPIVersionSettings, CopyLeaderboardDefinitionByIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_CopyLeaderboardDefinitionByIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_CopyLeaderboardDefinitionByIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_QueryLeaderboardRanks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLeaderboardAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLeaderboardAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_QueryLeaderboardRanks = { "QueryLeaderboardRanks", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLeaderboardAPIVersionSettings, QueryLeaderboardRanks), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_QueryLeaderboardRanks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_QueryLeaderboardRanks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_QueryLeaderbaordUserScores_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLeaderboardAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLeaderboardAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_QueryLeaderbaordUserScores = { "QueryLeaderbaordUserScores", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLeaderboardAPIVersionSettings, QueryLeaderbaordUserScores), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_QueryLeaderbaordUserScores_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_QueryLeaderbaordUserScores_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_UserScoresQueryStatInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLeaderboardAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLeaderboardAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_UserScoresQueryStatInfo = { "UserScoresQueryStatInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLeaderboardAPIVersionSettings, UserScoresQueryStatInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_UserScoresQueryStatInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_UserScoresQueryStatInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_GetLeaderboardRecordCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLeaderboardAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLeaderboardAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_GetLeaderboardRecordCount = { "GetLeaderboardRecordCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLeaderboardAPIVersionSettings, GetLeaderboardRecordCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_GetLeaderboardRecordCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_GetLeaderboardRecordCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_CopyLeaderboardRecordByIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLeaderboardAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLeaderboardAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_CopyLeaderboardRecordByIndex = { "CopyLeaderboardRecordByIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLeaderboardAPIVersionSettings, CopyLeaderboardRecordByIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_CopyLeaderboardRecordByIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_CopyLeaderboardRecordByIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_GetLeatestLeaderboardScoreCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLeaderboardAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLeaderboardAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_GetLeatestLeaderboardScoreCount = { "GetLeatestLeaderboardScoreCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLeaderboardAPIVersionSettings, GetLeatestLeaderboardScoreCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_GetLeatestLeaderboardScoreCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_GetLeatestLeaderboardScoreCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_CopyLeaderboardUserScoreByIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLeaderboardAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLeaderboardAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_CopyLeaderboardUserScoreByIndex = { "CopyLeaderboardUserScoreByIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLeaderboardAPIVersionSettings, CopyLeaderboardUserScoreByIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_CopyLeaderboardUserScoreByIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_CopyLeaderboardUserScoreByIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_CopyLeaderboardUserScoreByUserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSLeaderboardAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSLeaderboardAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_CopyLeaderboardUserScoreByUserId = { "CopyLeaderboardUserScoreByUserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSLeaderboardAPIVersionSettings, CopyLeaderboardUserScoreByUserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_CopyLeaderboardUserScoreByUserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_CopyLeaderboardUserScoreByUserId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_QueryLeaderboardDefinitions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_GetLeaderboardDefinitionCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_CopyLeaderboardDefinitionByIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_QueryLeaderboardRanks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_QueryLeaderbaordUserScores,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_UserScoresQueryStatInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_GetLeaderboardRecordCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_CopyLeaderboardRecordByIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_GetLeatestLeaderboardScoreCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_CopyLeaderboardUserScoreByIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::NewProp_CopyLeaderboardUserScoreByUserId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSLeaderboardAPIVersionSettings",
		sizeof(FEOSLeaderboardAPIVersionSettings),
		alignof(FEOSLeaderboardAPIVersionSettings),
		Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSLeaderboardAPIVersionSettings"), sizeof(FEOSLeaderboardAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSLeaderboardAPIVersionSettings_Hash() { return 836109717U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
