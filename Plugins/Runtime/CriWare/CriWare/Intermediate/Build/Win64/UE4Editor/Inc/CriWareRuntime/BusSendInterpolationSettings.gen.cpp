// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/BusSendInterpolationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBusSendInterpolationSettings() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBusSendInterpolationSettings();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
class UScriptStruct* FBusSendInterpolationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBusSendInterpolationSettings, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("BusSendInterpolationSettings"), sizeof(FBusSendInterpolationSettings), Get_Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FBusSendInterpolationSettings>()
{
	return FBusSendInterpolationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBusSendInterpolationSettings(FBusSendInterpolationSettings::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("BusSendInterpolationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFBusSendInterpolationSettings
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFBusSendInterpolationSettings()
	{
		UScriptStruct::DeferCppStructOps<FBusSendInterpolationSettings>(FName(TEXT("BusSendInterpolationSettings")));
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFBusSendInterpolationSettings;
	struct Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DspBusSettingsID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DspBusSettingsID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DspBusSettingsName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DspBusSettingsName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BusId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BusId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BusName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BusName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BusSendLevelForInside_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BusSendLevelForInside;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BusSendLevelForOutside_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BusSendLevelForOutside;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BusSendInterpolationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBusSendInterpolationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_DspBusSettingsID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BusSendInterpolationSettings" },
		{ "ModuleRelativePath", "Public/BusSendInterpolationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_DspBusSettingsID = { "DspBusSettingsID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBusSendInterpolationSettings, DspBusSettingsID), METADATA_PARAMS(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_DspBusSettingsID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_DspBusSettingsID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_DspBusSettingsName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BusSendInterpolationSettings" },
		{ "ModuleRelativePath", "Public/BusSendInterpolationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_DspBusSettingsName = { "DspBusSettingsName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBusSendInterpolationSettings, DspBusSettingsName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_DspBusSettingsName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_DspBusSettingsName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BusSendInterpolationSettings" },
		{ "ModuleRelativePath", "Public/BusSendInterpolationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusId = { "BusId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBusSendInterpolationSettings, BusId), METADATA_PARAMS(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BusSendInterpolationSettings" },
		{ "ModuleRelativePath", "Public/BusSendInterpolationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusName = { "BusName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBusSendInterpolationSettings, BusName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusSendLevelForInside_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BusSendInterpolationSettings" },
		{ "ModuleRelativePath", "Public/BusSendInterpolationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusSendLevelForInside = { "BusSendLevelForInside", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBusSendInterpolationSettings, BusSendLevelForInside), METADATA_PARAMS(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusSendLevelForInside_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusSendLevelForInside_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusSendLevelForOutside_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BusSendInterpolationSettings" },
		{ "ModuleRelativePath", "Public/BusSendInterpolationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusSendLevelForOutside = { "BusSendLevelForOutside", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBusSendInterpolationSettings, BusSendLevelForOutside), METADATA_PARAMS(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusSendLevelForOutside_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusSendLevelForOutside_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_Width_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "BusSendInterpolationSettings" },
		{ "ModuleRelativePath", "Public/BusSendInterpolationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBusSendInterpolationSettings, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_Width_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_DspBusSettingsID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_DspBusSettingsName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusSendLevelForInside,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_BusSendLevelForOutside,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::NewProp_Width,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"BusSendInterpolationSettings",
		sizeof(FBusSendInterpolationSettings),
		alignof(FBusSendInterpolationSettings),
		Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBusSendInterpolationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BusSendInterpolationSettings"), sizeof(FBusSendInterpolationSettings), Get_Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBusSendInterpolationSettings_Hash() { return 3030262215U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
