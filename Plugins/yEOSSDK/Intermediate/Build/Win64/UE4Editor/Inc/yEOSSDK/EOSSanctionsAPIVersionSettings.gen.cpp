// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EOSSanctionsAPIVersionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEOSSanctionsAPIVersionSettings() {}
// Cross Module References
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSSanctionsAPIVersionSettings();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
class UScriptStruct* FEOSSanctionsAPIVersionSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YEOSSDK_API uint32 Get_Z_Construct_UScriptStruct_FEOSSanctionsAPIVersionSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEOSSanctionsAPIVersionSettings, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EOSSanctionsAPIVersionSettings"), sizeof(FEOSSanctionsAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSSanctionsAPIVersionSettings_Hash());
	}
	return Singleton;
}
template<> YEOSSDK_API UScriptStruct* StaticStruct<FEOSSanctionsAPIVersionSettings>()
{
	return FEOSSanctionsAPIVersionSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEOSSanctionsAPIVersionSettings(FEOSSanctionsAPIVersionSettings::StaticStruct, TEXT("/Script/yEOSSDK"), TEXT("EOSSanctionsAPIVersionSettings"), false, nullptr, nullptr);
static struct FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSSanctionsAPIVersionSettings
{
	FScriptStruct_yEOSSDK_StaticRegisterNativesFEOSSanctionsAPIVersionSettings()
	{
		UScriptStruct::DeferCppStructOps<FEOSSanctionsAPIVersionSettings>(FName(TEXT("EOSSanctionsAPIVersionSettings")));
	}
} ScriptStruct_yEOSSDK_StaticRegisterNativesFEOSSanctionsAPIVersionSettings;
	struct Z_Construct_UScriptStruct_FEOSSanctionsAPIVersionSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QueryActivePlayerSanctions_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_QueryActivePlayerSanctions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetPlayerSanctionCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GetPlayerSanctionCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CopyPlayerSanctionByIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CopyPlayerSanctionByIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSanctionsAPIVersionSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EOSSanctionsAPIVersionSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEOSSanctionsAPIVersionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEOSSanctionsAPIVersionSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSanctionsAPIVersionSettings_Statics::NewProp_QueryActivePlayerSanctions_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSanctionsAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSanctionsAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSanctionsAPIVersionSettings_Statics::NewProp_QueryActivePlayerSanctions = { "QueryActivePlayerSanctions", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSanctionsAPIVersionSettings, QueryActivePlayerSanctions), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSanctionsAPIVersionSettings_Statics::NewProp_QueryActivePlayerSanctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSanctionsAPIVersionSettings_Statics::NewProp_QueryActivePlayerSanctions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSanctionsAPIVersionSettings_Statics::NewProp_GetPlayerSanctionCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSanctionsAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSanctionsAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSanctionsAPIVersionSettings_Statics::NewProp_GetPlayerSanctionCount = { "GetPlayerSanctionCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSanctionsAPIVersionSettings, GetPlayerSanctionCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSanctionsAPIVersionSettings_Statics::NewProp_GetPlayerSanctionCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSanctionsAPIVersionSettings_Statics::NewProp_GetPlayerSanctionCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEOSSanctionsAPIVersionSettings_Statics::NewProp_CopyPlayerSanctionByIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EOSSanctionsAPIVersionSettings" },
		{ "ModuleRelativePath", "Public/EOSSanctionsAPIVersionSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEOSSanctionsAPIVersionSettings_Statics::NewProp_CopyPlayerSanctionByIndex = { "CopyPlayerSanctionByIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEOSSanctionsAPIVersionSettings, CopyPlayerSanctionByIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSanctionsAPIVersionSettings_Statics::NewProp_CopyPlayerSanctionByIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSanctionsAPIVersionSettings_Statics::NewProp_CopyPlayerSanctionByIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEOSSanctionsAPIVersionSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSanctionsAPIVersionSettings_Statics::NewProp_QueryActivePlayerSanctions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSanctionsAPIVersionSettings_Statics::NewProp_GetPlayerSanctionCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEOSSanctionsAPIVersionSettings_Statics::NewProp_CopyPlayerSanctionByIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEOSSanctionsAPIVersionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yEOSSDK,
		nullptr,
		&NewStructOps,
		"EOSSanctionsAPIVersionSettings",
		sizeof(FEOSSanctionsAPIVersionSettings),
		alignof(FEOSSanctionsAPIVersionSettings),
		Z_Construct_UScriptStruct_FEOSSanctionsAPIVersionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSanctionsAPIVersionSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEOSSanctionsAPIVersionSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEOSSanctionsAPIVersionSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEOSSanctionsAPIVersionSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEOSSanctionsAPIVersionSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EOSSanctionsAPIVersionSettings"), sizeof(FEOSSanctionsAPIVersionSettings), Get_Z_Construct_UScriptStruct_FEOSSanctionsAPIVersionSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEOSSanctionsAPIVersionSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEOSSanctionsAPIVersionSettings_Hash() { return 2788753861U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
