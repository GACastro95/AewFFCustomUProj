// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/CustomRosterParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomRosterParam() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FCustomRosterParam();
	UPackage* Z_Construct_UPackage__Script_Creation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FCostumeParam();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FNamedPresetParam();
// End Cross Module References
class UScriptStruct* FCustomRosterParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FCustomRosterParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomRosterParam, Z_Construct_UPackage__Script_Creation(), TEXT("CustomRosterParam"), sizeof(FCustomRosterParam), Get_Z_Construct_UScriptStruct_FCustomRosterParam_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FCustomRosterParam>()
{
	return FCustomRosterParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomRosterParam(FCustomRosterParam::StaticStruct, TEXT("/Script/Creation"), TEXT("CustomRosterParam"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFCustomRosterParam
{
	FScriptStruct_Creation_StaticRegisterNativesFCustomRosterParam()
	{
		UScriptStruct::DeferCppStructOps<FCustomRosterParam>(FName(TEXT("CustomRosterParam")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFCustomRosterParam;
	struct Z_Construct_UScriptStruct_FCustomRosterParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlainCostume_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlainCostume;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Presets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Presets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Presets;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomRosterParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CustomRosterParam.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomRosterParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomRosterParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomRosterParam_Statics::NewProp_UID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomRosterParam" },
		{ "ModuleRelativePath", "Public/CustomRosterParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomRosterParam_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomRosterParam, UID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomRosterParam_Statics::NewProp_UID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomRosterParam_Statics::NewProp_UID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomRosterParam_Statics::NewProp_PlainCostume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomRosterParam" },
		{ "ModuleRelativePath", "Public/CustomRosterParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomRosterParam_Statics::NewProp_PlainCostume = { "PlainCostume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomRosterParam, PlainCostume), Z_Construct_UScriptStruct_FCostumeParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomRosterParam_Statics::NewProp_PlainCostume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomRosterParam_Statics::NewProp_PlainCostume_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomRosterParam_Statics::NewProp_Presets_Inner = { "Presets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNamedPresetParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomRosterParam_Statics::NewProp_Presets_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CustomRosterParam" },
		{ "ModuleRelativePath", "Public/CustomRosterParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomRosterParam_Statics::NewProp_Presets = { "Presets", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomRosterParam, Presets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomRosterParam_Statics::NewProp_Presets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomRosterParam_Statics::NewProp_Presets_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomRosterParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomRosterParam_Statics::NewProp_UID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomRosterParam_Statics::NewProp_PlainCostume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomRosterParam_Statics::NewProp_Presets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomRosterParam_Statics::NewProp_Presets,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomRosterParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		nullptr,
		&NewStructOps,
		"CustomRosterParam",
		sizeof(FCustomRosterParam),
		alignof(FCustomRosterParam),
		Z_Construct_UScriptStruct_FCustomRosterParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomRosterParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomRosterParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomRosterParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomRosterParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomRosterParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomRosterParam"), sizeof(FCustomRosterParam), Get_Z_Construct_UScriptStruct_FCustomRosterParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomRosterParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomRosterParam_Hash() { return 480639684U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
