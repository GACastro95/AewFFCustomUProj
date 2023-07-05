// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/SnapshotSwitchSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapshotSwitchSettings() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSnapshotSwitchSettings();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
class UScriptStruct* FSnapshotSwitchSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSnapshotSwitchSettings, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("SnapshotSwitchSettings"), sizeof(FSnapshotSwitchSettings), Get_Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FSnapshotSwitchSettings>()
{
	return FSnapshotSwitchSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSnapshotSwitchSettings(FSnapshotSwitchSettings::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("SnapshotSwitchSettings"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFSnapshotSwitchSettings
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFSnapshotSwitchSettings()
	{
		UScriptStruct::DeferCppStructOps<FSnapshotSwitchSettings>(FName(TEXT("SnapshotSwitchSettings")));
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFSnapshotSwitchSettings;
	struct Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AsrRackID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AsrRackID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DspBusSettingsID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DspBusSettingsID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DspBusSettingsName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DspBusSettingsName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapshotID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SnapshotID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnapshotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SnapshotName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SnapshotSwitchSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSnapshotSwitchSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_AsrRackID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SnapshotSwitchSettings" },
		{ "ModuleRelativePath", "Public/SnapshotSwitchSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_AsrRackID = { "AsrRackID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapshotSwitchSettings, AsrRackID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_AsrRackID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_AsrRackID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_DspBusSettingsID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SnapshotSwitchSettings" },
		{ "ModuleRelativePath", "Public/SnapshotSwitchSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_DspBusSettingsID = { "DspBusSettingsID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapshotSwitchSettings, DspBusSettingsID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_DspBusSettingsID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_DspBusSettingsID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_DspBusSettingsName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SnapshotSwitchSettings" },
		{ "ModuleRelativePath", "Public/SnapshotSwitchSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_DspBusSettingsName = { "DspBusSettingsName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapshotSwitchSettings, DspBusSettingsName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_DspBusSettingsName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_DspBusSettingsName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_SnapshotID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SnapshotSwitchSettings" },
		{ "ModuleRelativePath", "Public/SnapshotSwitchSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_SnapshotID = { "SnapshotID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapshotSwitchSettings, SnapshotID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_SnapshotID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_SnapshotID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_SnapshotName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SnapshotSwitchSettings" },
		{ "ModuleRelativePath", "Public/SnapshotSwitchSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_SnapshotName = { "SnapshotName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapshotSwitchSettings, SnapshotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_SnapshotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_SnapshotName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_FadeTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SnapshotSwitchSettings" },
		{ "ModuleRelativePath", "Public/SnapshotSwitchSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_FadeTime = { "FadeTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSnapshotSwitchSettings, FadeTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_FadeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_FadeTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_AsrRackID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_DspBusSettingsID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_DspBusSettingsName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_SnapshotID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_SnapshotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::NewProp_FadeTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"SnapshotSwitchSettings",
		sizeof(FSnapshotSwitchSettings),
		alignof(FSnapshotSwitchSettings),
		Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSnapshotSwitchSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SnapshotSwitchSettings"), sizeof(FSnapshotSwitchSettings), Get_Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSnapshotSwitchSettings_Hash() { return 979939537U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
