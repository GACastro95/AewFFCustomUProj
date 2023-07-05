// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/AutoMatchSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoMatchSettings() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FAutoMatchSettings();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FAutoMatchSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FAutoMatchSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAutoMatchSettings, Z_Construct_UPackage__Script_ABP_200508(), TEXT("AutoMatchSettings"), sizeof(FAutoMatchSettings), Get_Z_Construct_UScriptStruct_FAutoMatchSettings_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FAutoMatchSettings>()
{
	return FAutoMatchSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAutoMatchSettings(FAutoMatchSettings::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("AutoMatchSettings"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFAutoMatchSettings
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFAutoMatchSettings()
	{
		UScriptStruct::DeferCppStructOps<FAutoMatchSettings>(FName(TEXT("AutoMatchSettings")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFAutoMatchSettings;
	struct Z_Construct_UScriptStruct_FAutoMatchSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OnlineModeTypeArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlineModeTypeArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OnlineModeTypeArray;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OnlinePlayerNoArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlinePlayerNoArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OnlinePlayerNoArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoMatchSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AutoMatchSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAutoMatchSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAutoMatchSettings>();
	}
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutoMatchSettings_Statics::NewProp_OnlineModeTypeArray_Inner = { "OnlineModeTypeArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoMatchSettings_Statics::NewProp_OnlineModeTypeArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AutoMatchSettings" },
		{ "ModuleRelativePath", "Public/AutoMatchSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutoMatchSettings_Statics::NewProp_OnlineModeTypeArray = { "OnlineModeTypeArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutoMatchSettings, OnlineModeTypeArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoMatchSettings_Statics::NewProp_OnlineModeTypeArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoMatchSettings_Statics::NewProp_OnlineModeTypeArray_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAutoMatchSettings_Statics::NewProp_OnlinePlayerNoArray_Inner = { "OnlinePlayerNoArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAutoMatchSettings_Statics::NewProp_OnlinePlayerNoArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AutoMatchSettings" },
		{ "ModuleRelativePath", "Public/AutoMatchSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAutoMatchSettings_Statics::NewProp_OnlinePlayerNoArray = { "OnlinePlayerNoArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAutoMatchSettings, OnlinePlayerNoArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoMatchSettings_Statics::NewProp_OnlinePlayerNoArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoMatchSettings_Statics::NewProp_OnlinePlayerNoArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAutoMatchSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoMatchSettings_Statics::NewProp_OnlineModeTypeArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoMatchSettings_Statics::NewProp_OnlineModeTypeArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoMatchSettings_Statics::NewProp_OnlinePlayerNoArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAutoMatchSettings_Statics::NewProp_OnlinePlayerNoArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAutoMatchSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"AutoMatchSettings",
		sizeof(FAutoMatchSettings),
		alignof(FAutoMatchSettings),
		Z_Construct_UScriptStruct_FAutoMatchSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoMatchSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAutoMatchSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAutoMatchSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAutoMatchSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAutoMatchSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AutoMatchSettings"), sizeof(FAutoMatchSettings), Get_Z_Construct_UScriptStruct_FAutoMatchSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAutoMatchSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAutoMatchSettings_Hash() { return 2142785982U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
