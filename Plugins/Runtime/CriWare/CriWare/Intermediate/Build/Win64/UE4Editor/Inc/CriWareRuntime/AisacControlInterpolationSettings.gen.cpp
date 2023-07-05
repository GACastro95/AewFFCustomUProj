// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AisacControlInterpolationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAisacControlInterpolationSettings() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAisacControlInterpolationSettings();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
class UScriptStruct* FAisacControlInterpolationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AisacControlInterpolationSettings"), sizeof(FAisacControlInterpolationSettings), Get_Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAisacControlInterpolationSettings>()
{
	return FAisacControlInterpolationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAisacControlInterpolationSettings(FAisacControlInterpolationSettings::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AisacControlInterpolationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAisacControlInterpolationSettings
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAisacControlInterpolationSettings()
	{
		UScriptStruct::DeferCppStructOps<FAisacControlInterpolationSettings>(FName(TEXT("AisacControlInterpolationSettings")));
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAisacControlInterpolationSettings;
	struct Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AisacControlID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AisacControlID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AisacControlName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AisacControlName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AisacControlValueForInside_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AisacControlValueForInside;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AisacControlValueForOutside_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AisacControlValueForOutside;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AisacControlInterpolationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAisacControlInterpolationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AisacControlInterpolationSettings" },
		{ "ModuleRelativePath", "Public/AisacControlInterpolationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlID = { "AisacControlID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAisacControlInterpolationSettings, AisacControlID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AisacControlInterpolationSettings" },
		{ "ModuleRelativePath", "Public/AisacControlInterpolationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlName = { "AisacControlName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAisacControlInterpolationSettings, AisacControlName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlValueForInside_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AisacControlInterpolationSettings" },
		{ "ModuleRelativePath", "Public/AisacControlInterpolationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlValueForInside = { "AisacControlValueForInside", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAisacControlInterpolationSettings, AisacControlValueForInside), METADATA_PARAMS(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlValueForInside_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlValueForInside_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlValueForOutside_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AisacControlInterpolationSettings" },
		{ "ModuleRelativePath", "Public/AisacControlInterpolationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlValueForOutside = { "AisacControlValueForOutside", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAisacControlInterpolationSettings, AisacControlValueForOutside), METADATA_PARAMS(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlValueForOutside_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlValueForOutside_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_Width_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AisacControlInterpolationSettings" },
		{ "ModuleRelativePath", "Public/AisacControlInterpolationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAisacControlInterpolationSettings, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_Width_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlValueForInside,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_AisacControlValueForOutside,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::NewProp_Width,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		nullptr,
		&NewStructOps,
		"AisacControlInterpolationSettings",
		sizeof(FAisacControlInterpolationSettings),
		alignof(FAisacControlInterpolationSettings),
		Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAisacControlInterpolationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AisacControlInterpolationSettings"), sizeof(FAisacControlInterpolationSettings), Get_Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAisacControlInterpolationSettings_Hash() { return 1738639506U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
