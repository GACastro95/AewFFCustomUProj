// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/CustomRosterRaw.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomRosterRaw() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FCustomRosterRaw();
	UPackage* Z_Construct_UPackage__Script_Creation();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FCommonWrestlerRaw();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FCostumeParam();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FRosterPresetRaw();
// End Cross Module References
class UScriptStruct* FCustomRosterRaw::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FCustomRosterRaw_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomRosterRaw, Z_Construct_UPackage__Script_Creation(), TEXT("CustomRosterRaw"), sizeof(FCustomRosterRaw), Get_Z_Construct_UScriptStruct_FCustomRosterRaw_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FCustomRosterRaw>()
{
	return FCustomRosterRaw::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomRosterRaw(FCustomRosterRaw::StaticStruct, TEXT("/Script/Creation"), TEXT("CustomRosterRaw"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFCustomRosterRaw
{
	FScriptStruct_Creation_StaticRegisterNativesFCustomRosterRaw()
	{
		UScriptStruct::DeferCppStructOps<FCustomRosterRaw>(FName(TEXT("CustomRosterRaw")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFCustomRosterRaw;
	struct Z_Construct_UScriptStruct_FCustomRosterRaw_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_COMMON_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_COMMON;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlainAttire_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlainAttire;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Presets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Presets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Presets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomRosterRaw_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CustomRosterRaw.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomRosterRaw_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomRosterRaw>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomRosterRaw_Statics::NewProp_COMMON_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomRosterRaw" },
		{ "ModuleRelativePath", "Public/CustomRosterRaw.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomRosterRaw_Statics::NewProp_COMMON = { "COMMON", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomRosterRaw, COMMON), Z_Construct_UScriptStruct_FCommonWrestlerRaw, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomRosterRaw_Statics::NewProp_COMMON_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomRosterRaw_Statics::NewProp_COMMON_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomRosterRaw_Statics::NewProp_PlainAttire_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomRosterRaw" },
		{ "ModuleRelativePath", "Public/CustomRosterRaw.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomRosterRaw_Statics::NewProp_PlainAttire = { "PlainAttire", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomRosterRaw, PlainAttire), Z_Construct_UScriptStruct_FCostumeParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomRosterRaw_Statics::NewProp_PlainAttire_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomRosterRaw_Statics::NewProp_PlainAttire_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomRosterRaw_Statics::NewProp_Presets_Inner = { "Presets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRosterPresetRaw, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomRosterRaw_Statics::NewProp_Presets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomRosterRaw" },
		{ "ModuleRelativePath", "Public/CustomRosterRaw.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomRosterRaw_Statics::NewProp_Presets = { "Presets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomRosterRaw, Presets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomRosterRaw_Statics::NewProp_Presets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomRosterRaw_Statics::NewProp_Presets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomRosterRaw_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomRosterRaw_Statics::NewProp_COMMON,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomRosterRaw_Statics::NewProp_PlainAttire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomRosterRaw_Statics::NewProp_Presets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomRosterRaw_Statics::NewProp_Presets,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomRosterRaw_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		nullptr,
		&NewStructOps,
		"CustomRosterRaw",
		sizeof(FCustomRosterRaw),
		alignof(FCustomRosterRaw),
		Z_Construct_UScriptStruct_FCustomRosterRaw_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomRosterRaw_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomRosterRaw_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomRosterRaw_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomRosterRaw()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomRosterRaw_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomRosterRaw"), sizeof(FCustomRosterRaw), Get_Z_Construct_UScriptStruct_FCustomRosterRaw_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomRosterRaw_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomRosterRaw_Hash() { return 213897807U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
