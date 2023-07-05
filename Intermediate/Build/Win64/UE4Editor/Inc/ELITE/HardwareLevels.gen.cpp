// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/HardwareLevels.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHardwareLevels() {}
// Cross Module References
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FHardwareLevels();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FHardwareLevels>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FHardwareLevels cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FHardwareLevels::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_API uint32 Get_Z_Construct_UScriptStruct_FHardwareLevels_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHardwareLevels, Z_Construct_UPackage__Script_ELITE(), TEXT("HardwareLevels"), sizeof(FHardwareLevels), Get_Z_Construct_UScriptStruct_FHardwareLevels_Hash());
	}
	return Singleton;
}
template<> ELITE_API UScriptStruct* StaticStruct<FHardwareLevels>()
{
	return FHardwareLevels::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHardwareLevels(FHardwareLevels::StaticStruct, TEXT("/Script/ELITE"), TEXT("HardwareLevels"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_StaticRegisterNativesFHardwareLevels
{
	FScriptStruct_ELITE_StaticRegisterNativesFHardwareLevels()
	{
		UScriptStruct::DeferCppStructOps<FHardwareLevels>(FName(TEXT("HardwareLevels")));
	}
} ScriptStruct_ELITE_StaticRegisterNativesFHardwareLevels;
	struct Z_Construct_UScriptStruct_FHardwareLevels_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CPUBrand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CPUBrand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GPUBrand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GPUBrand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Graphic4K_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Graphic4K;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphicFullHD_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GraphicFullHD;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHardwareLevels_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HardwareLevels.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHardwareLevels_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHardwareLevels>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHardwareLevels_Statics::NewProp_CPUBrand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HardwareLevels" },
		{ "ModuleRelativePath", "Public/HardwareLevels.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHardwareLevels_Statics::NewProp_CPUBrand = { "CPUBrand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHardwareLevels, CPUBrand), METADATA_PARAMS(Z_Construct_UScriptStruct_FHardwareLevels_Statics::NewProp_CPUBrand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHardwareLevels_Statics::NewProp_CPUBrand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHardwareLevels_Statics::NewProp_GPUBrand_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HardwareLevels" },
		{ "ModuleRelativePath", "Public/HardwareLevels.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHardwareLevels_Statics::NewProp_GPUBrand = { "GPUBrand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHardwareLevels, GPUBrand), METADATA_PARAMS(Z_Construct_UScriptStruct_FHardwareLevels_Statics::NewProp_GPUBrand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHardwareLevels_Statics::NewProp_GPUBrand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHardwareLevels_Statics::NewProp_Graphic4K_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HardwareLevels" },
		{ "ModuleRelativePath", "Public/HardwareLevels.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHardwareLevels_Statics::NewProp_Graphic4K = { "Graphic4K", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHardwareLevels, Graphic4K), METADATA_PARAMS(Z_Construct_UScriptStruct_FHardwareLevels_Statics::NewProp_Graphic4K_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHardwareLevels_Statics::NewProp_Graphic4K_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHardwareLevels_Statics::NewProp_GraphicFullHD_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "HardwareLevels" },
		{ "ModuleRelativePath", "Public/HardwareLevels.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHardwareLevels_Statics::NewProp_GraphicFullHD = { "GraphicFullHD", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHardwareLevels, GraphicFullHD), METADATA_PARAMS(Z_Construct_UScriptStruct_FHardwareLevels_Statics::NewProp_GraphicFullHD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHardwareLevels_Statics::NewProp_GraphicFullHD_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHardwareLevels_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHardwareLevels_Statics::NewProp_CPUBrand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHardwareLevels_Statics::NewProp_GPUBrand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHardwareLevels_Statics::NewProp_Graphic4K,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHardwareLevels_Statics::NewProp_GraphicFullHD,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHardwareLevels_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"HardwareLevels",
		sizeof(FHardwareLevels),
		alignof(FHardwareLevels),
		Z_Construct_UScriptStruct_FHardwareLevels_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHardwareLevels_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHardwareLevels_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHardwareLevels_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHardwareLevels()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHardwareLevels_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HardwareLevels"), sizeof(FHardwareLevels), Get_Z_Construct_UScriptStruct_FHardwareLevels_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHardwareLevels_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHardwareLevels_Hash() { return 1385511355U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
