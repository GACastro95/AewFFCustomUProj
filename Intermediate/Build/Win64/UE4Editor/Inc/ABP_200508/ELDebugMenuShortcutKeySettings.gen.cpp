// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELDebugMenuShortcutKeySettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELDebugMenuShortcutKeySettings() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELDebugMenuShortcutKeyCheckType();
// End Cross Module References
class UScriptStruct* FELDebugMenuShortcutKeySettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELDebugMenuShortcutKeySettings"), sizeof(FELDebugMenuShortcutKeySettings), Get_Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELDebugMenuShortcutKeySettings>()
{
	return FELDebugMenuShortcutKeySettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELDebugMenuShortcutKeySettings(FELDebugMenuShortcutKeySettings::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELDebugMenuShortcutKeySettings"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELDebugMenuShortcutKeySettings
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELDebugMenuShortcutKeySettings()
	{
		UScriptStruct::DeferCppStructOps<FELDebugMenuShortcutKeySettings>(FName(TEXT("ELDebugMenuShortcutKeySettings")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELDebugMenuShortcutKeySettings;
	struct Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CheckType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CheckType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELDebugMenuShortcutKeySettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELDebugMenuShortcutKeySettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings_Statics::NewProp_Key_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDebugMenuShortcutKeySettings" },
		{ "ModuleRelativePath", "Public/ELDebugMenuShortcutKeySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELDebugMenuShortcutKeySettings, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings_Statics::NewProp_CheckType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings_Statics::NewProp_CheckType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELDebugMenuShortcutKeySettings" },
		{ "ModuleRelativePath", "Public/ELDebugMenuShortcutKeySettings.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings_Statics::NewProp_CheckType = { "CheckType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELDebugMenuShortcutKeySettings, CheckType), Z_Construct_UEnum_ABP_200508_EELDebugMenuShortcutKeyCheckType, METADATA_PARAMS(Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings_Statics::NewProp_CheckType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings_Statics::NewProp_CheckType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings_Statics::NewProp_CheckType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings_Statics::NewProp_CheckType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELDebugMenuShortcutKeySettings",
		sizeof(FELDebugMenuShortcutKeySettings),
		alignof(FELDebugMenuShortcutKeySettings),
		Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELDebugMenuShortcutKeySettings"), sizeof(FELDebugMenuShortcutKeySettings), Get_Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELDebugMenuShortcutKeySettings_Hash() { return 193608447U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
