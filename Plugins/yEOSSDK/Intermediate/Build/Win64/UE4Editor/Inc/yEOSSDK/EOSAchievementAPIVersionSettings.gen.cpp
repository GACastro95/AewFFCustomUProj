// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSAchievementAPIVersionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSAchievementAPIVersionSettings() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
class UScriptStruct* FEOSAchievementAPIVersionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSAchievementAPIVersionSettings"), sizeof(FEOSAchievementAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSAchievementAPIVersionSettings>()
{
	return FEOSAchievementAPIVersionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSAchievementAPIVersionSettings(FEOSAchievementAPIVersionSettings::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSAchievementAPIVersionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSAchievementAPIVersionSettings
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSAchievementAPIVersionSettings()
	{
		UScriptStruct::DeferCppStructOps<FEOSAchievementAPIVersionSettings>(FName(TEXT("EOSAchievementAPIVersionSettings")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSAchievementAPIVersionSettings;
	struct Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddNotifyAchievementsUnlocked_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddNotifyAchievementsUnlocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyPlayerAchievemntByID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CopyPlayerAchievemntByID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryDefinitions_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QueryDefinitions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryPlayerAchievements_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QueryPlayerAchievements;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockAcievements_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnlockAcievements;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetAchievementDefinitionCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GetAchievementDefinitionCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyDefinitionV2ByAchievementID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CopyDefinitionV2ByAchievementID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetPlayerAchievementCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GetPlayerAchievementCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyPlayerAchievemntByIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CopyPlayerAchievemntByIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSAchievementAPIVersionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSAchievementAPIVersionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_AddNotifyAchievementsUnlocked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAchievementAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSAchievementAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_AddNotifyAchievementsUnlocked = { "AddNotifyAchievementsUnlocked", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAchievementAPIVersionSettings, AddNotifyAchievementsUnlocked), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_AddNotifyAchievementsUnlocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_AddNotifyAchievementsUnlocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_CopyPlayerAchievemntByID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAchievementAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSAchievementAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_CopyPlayerAchievemntByID = { "CopyPlayerAchievemntByID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAchievementAPIVersionSettings, CopyPlayerAchievemntByID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_CopyPlayerAchievemntByID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_CopyPlayerAchievemntByID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_QueryDefinitions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAchievementAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSAchievementAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_QueryDefinitions = { "QueryDefinitions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAchievementAPIVersionSettings, QueryDefinitions), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_QueryDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_QueryDefinitions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_QueryPlayerAchievements_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAchievementAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSAchievementAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_QueryPlayerAchievements = { "QueryPlayerAchievements", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAchievementAPIVersionSettings, QueryPlayerAchievements), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_QueryPlayerAchievements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_QueryPlayerAchievements_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_UnlockAcievements_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAchievementAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSAchievementAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_UnlockAcievements = { "UnlockAcievements", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAchievementAPIVersionSettings, UnlockAcievements), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_UnlockAcievements_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_UnlockAcievements_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_GetAchievementDefinitionCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAchievementAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSAchievementAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_GetAchievementDefinitionCount = { "GetAchievementDefinitionCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAchievementAPIVersionSettings, GetAchievementDefinitionCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_GetAchievementDefinitionCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_GetAchievementDefinitionCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_CopyDefinitionV2ByAchievementID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAchievementAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSAchievementAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_CopyDefinitionV2ByAchievementID = { "CopyDefinitionV2ByAchievementID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAchievementAPIVersionSettings, CopyDefinitionV2ByAchievementID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_CopyDefinitionV2ByAchievementID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_CopyDefinitionV2ByAchievementID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_GetPlayerAchievementCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAchievementAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSAchievementAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_GetPlayerAchievementCount = { "GetPlayerAchievementCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAchievementAPIVersionSettings, GetPlayerAchievementCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_GetPlayerAchievementCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_GetPlayerAchievementCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_CopyPlayerAchievemntByIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSAchievementAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSAchievementAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_CopyPlayerAchievemntByIndex = { "CopyPlayerAchievemntByIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSAchievementAPIVersionSettings, CopyPlayerAchievemntByIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_CopyPlayerAchievemntByIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_CopyPlayerAchievemntByIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_AddNotifyAchievementsUnlocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_CopyPlayerAchievemntByID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_QueryDefinitions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_QueryPlayerAchievements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_UnlockAcievements,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_GetAchievementDefinitionCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_CopyDefinitionV2ByAchievementID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_GetPlayerAchievementCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::NewProp_CopyPlayerAchievemntByIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSAchievementAPIVersionSettings",
		sizeof(FEOSAchievementAPIVersionSettings),
		alignof(FEOSAchievementAPIVersionSettings),
		Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSAchievementAPIVersionSettings"), sizeof(FEOSAchievementAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSAchievementAPIVersionSettings_Hash() { return 3518588100U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
