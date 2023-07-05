// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSLoadoutSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSLoadoutSettings() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSLoadoutSettings();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSLoadoutPreset();
// End Cross Module References
class UScriptStruct* FSSLoadoutSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSLoadoutSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSLoadoutSettings, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSLoadoutSettings"), sizeof(FSSLoadoutSettings), Get_Z_Construct_UScriptStruct_FSSLoadoutSettings_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSLoadoutSettings>()
{
	return FSSLoadoutSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSLoadoutSettings(FSSLoadoutSettings::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSLoadoutSettings"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSLoadoutSettings
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSLoadoutSettings()
	{
		UScriptStruct::DeferCppStructOps<FSSLoadoutSettings>(FName(TEXT("SSLoadoutSettings")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSLoadoutSettings;
	struct Z_Construct_UScriptStruct_FSSLoadoutSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresetIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PresetIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Preset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Preset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSLoadoutSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSLoadoutSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSLoadoutSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSLoadoutSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSLoadoutSettings_Statics::NewProp_PresetIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSLoadoutSettings" },
		{ "ModuleRelativePath", "Public/SSLoadoutSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSLoadoutSettings_Statics::NewProp_PresetIndex = { "PresetIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSLoadoutSettings, PresetIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSLoadoutSettings_Statics::NewProp_PresetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLoadoutSettings_Statics::NewProp_PresetIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSLoadoutSettings_Statics::NewProp_Preset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSLoadoutSettings" },
		{ "ModuleRelativePath", "Public/SSLoadoutSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSSLoadoutSettings_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Preset, FSSLoadoutSettings), STRUCT_OFFSET(FSSLoadoutSettings, Preset), Z_Construct_UScriptStruct_FSSLoadoutPreset, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSLoadoutSettings_Statics::NewProp_Preset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLoadoutSettings_Statics::NewProp_Preset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSLoadoutSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSLoadoutSettings_Statics::NewProp_PresetIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSLoadoutSettings_Statics::NewProp_Preset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSLoadoutSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSLoadoutSettings",
		sizeof(FSSLoadoutSettings),
		alignof(FSSLoadoutSettings),
		Z_Construct_UScriptStruct_FSSLoadoutSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLoadoutSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSLoadoutSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLoadoutSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSLoadoutSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSLoadoutSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSLoadoutSettings"), sizeof(FSSLoadoutSettings), Get_Z_Construct_UScriptStruct_FSSLoadoutSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSLoadoutSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSLoadoutSettings_Hash() { return 1529236223U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
