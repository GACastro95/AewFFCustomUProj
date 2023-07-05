// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/PresetWrestler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePresetWrestler() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FPresetWrestler();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References

static_assert(std::is_polymorphic<FPresetWrestler>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FPresetWrestler cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FPresetWrestler::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FPresetWrestler_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPresetWrestler, Z_Construct_UPackage__Script_ABP_200508(), TEXT("PresetWrestler"), sizeof(FPresetWrestler), Get_Z_Construct_UScriptStruct_FPresetWrestler_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FPresetWrestler>()
{
	return FPresetWrestler::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPresetWrestler(FPresetWrestler::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("PresetWrestler"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFPresetWrestler
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFPresetWrestler()
	{
		UScriptStruct::DeferCppStructOps<FPresetWrestler>(FName(TEXT("PresetWrestler")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFPresetWrestler;
	struct Z_Construct_UScriptStruct_FPresetWrestler_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DataAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetWrestler_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PresetWrestler.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPresetWrestler_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPresetWrestler>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPresetWrestler_Statics::NewProp_DataAsset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PresetWrestler" },
		{ "ModuleRelativePath", "Public/PresetWrestler.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPresetWrestler_Statics::NewProp_DataAsset = { "DataAsset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPresetWrestler, DataAsset), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetWrestler_Statics::NewProp_DataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetWrestler_Statics::NewProp_DataAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPresetWrestler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPresetWrestler_Statics::NewProp_DataAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPresetWrestler_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"PresetWrestler",
		sizeof(FPresetWrestler),
		alignof(FPresetWrestler),
		Z_Construct_UScriptStruct_FPresetWrestler_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetWrestler_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPresetWrestler_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPresetWrestler_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPresetWrestler()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPresetWrestler_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PresetWrestler"), sizeof(FPresetWrestler), Get_Z_Construct_UScriptStruct_FPresetWrestler_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPresetWrestler_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPresetWrestler_Hash() { return 1569063866U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
