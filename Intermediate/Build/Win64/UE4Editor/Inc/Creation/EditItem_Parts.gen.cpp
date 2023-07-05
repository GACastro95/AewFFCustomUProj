// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EditItem_Parts.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditItem_Parts() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditItem_Parts();
	UPackage* Z_Construct_UPackage__Script_Creation();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditItem_Common();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EEditPartsSlot();
	CREATION_API UClass* Z_Construct_UClass_UEditWrestlerPartsAsset_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FEditItem_Parts>() == std::is_polymorphic<FEditItem_Common>(), "USTRUCT FEditItem_Parts cannot be polymorphic unless super FEditItem_Common is polymorphic");

class UScriptStruct* FEditItem_Parts::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FEditItem_Parts_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditItem_Parts, Z_Construct_UPackage__Script_Creation(), TEXT("EditItem_Parts"), sizeof(FEditItem_Parts), Get_Z_Construct_UScriptStruct_FEditItem_Parts_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FEditItem_Parts>()
{
	return FEditItem_Parts::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditItem_Parts(FEditItem_Parts::StaticStruct, TEXT("/Script/Creation"), TEXT("EditItem_Parts"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFEditItem_Parts
{
	FScriptStruct_Creation_StaticRegisterNativesFEditItem_Parts()
	{
		UScriptStruct::DeferCppStructOps<FEditItem_Parts>(FName(TEXT("EditItem_Parts")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFEditItem_Parts;
	struct Z_Construct_UScriptStruct_FEditItem_Parts_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PartsSlot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartsSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PartsSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Asset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditItem_Parts_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditItem_Parts.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditItem_Parts_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditItem_Parts>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEditItem_Parts_Statics::NewProp_PartsSlot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditItem_Parts_Statics::NewProp_PartsSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditItem_Parts" },
		{ "ModuleRelativePath", "Public/EditItem_Parts.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEditItem_Parts_Statics::NewProp_PartsSlot = { "PartsSlot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditItem_Parts, PartsSlot), Z_Construct_UEnum_Creation_EEditPartsSlot, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditItem_Parts_Statics::NewProp_PartsSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditItem_Parts_Statics::NewProp_PartsSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditItem_Parts_Statics::NewProp_Asset_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditItem_Parts" },
		{ "ModuleRelativePath", "Public/EditItem_Parts.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FEditItem_Parts_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditItem_Parts, Asset), Z_Construct_UClass_UEditWrestlerPartsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditItem_Parts_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditItem_Parts_Statics::NewProp_Asset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditItem_Parts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditItem_Parts_Statics::NewProp_PartsSlot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditItem_Parts_Statics::NewProp_PartsSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditItem_Parts_Statics::NewProp_Asset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditItem_Parts_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FEditItem_Common,
		&NewStructOps,
		"EditItem_Parts",
		sizeof(FEditItem_Parts),
		alignof(FEditItem_Parts),
		Z_Construct_UScriptStruct_FEditItem_Parts_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditItem_Parts_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditItem_Parts_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditItem_Parts_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditItem_Parts()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditItem_Parts_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditItem_Parts"), sizeof(FEditItem_Parts), Get_Z_Construct_UScriptStruct_FEditItem_Parts_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditItem_Parts_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditItem_Parts_Hash() { return 375569383U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
