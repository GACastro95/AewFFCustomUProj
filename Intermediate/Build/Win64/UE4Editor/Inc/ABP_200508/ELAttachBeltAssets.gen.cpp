// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELAttachBeltAssets.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELAttachBeltAssets() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELAttachBeltAssets();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	CREATION_API UClass* Z_Construct_UClass_UEditWrestlerPartsAsset_NoRegister();
// End Cross Module References
class UScriptStruct* FELAttachBeltAssets::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELAttachBeltAssets_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELAttachBeltAssets, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELAttachBeltAssets"), sizeof(FELAttachBeltAssets), Get_Z_Construct_UScriptStruct_FELAttachBeltAssets_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELAttachBeltAssets>()
{
	return FELAttachBeltAssets::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELAttachBeltAssets(FELAttachBeltAssets::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELAttachBeltAssets"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELAttachBeltAssets
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELAttachBeltAssets()
	{
		UScriptStruct::DeferCppStructOps<FELAttachBeltAssets>(FName(TEXT("ELAttachBeltAssets")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELAttachBeltAssets;
	struct Z_Construct_UScriptStruct_FELAttachBeltAssets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeltAsset_Male_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BeltAsset_Male;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeltAsset_Female_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_BeltAsset_Female;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAttachBeltAssets_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELAttachBeltAssets.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELAttachBeltAssets_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELAttachBeltAssets>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAttachBeltAssets_Statics::NewProp_BeltAsset_Male_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAttachBeltAssets" },
		{ "ModuleRelativePath", "Public/ELAttachBeltAssets.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FELAttachBeltAssets_Statics::NewProp_BeltAsset_Male = { "BeltAsset_Male", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELAttachBeltAssets, BeltAsset_Male), Z_Construct_UClass_UEditWrestlerPartsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FELAttachBeltAssets_Statics::NewProp_BeltAsset_Male_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAttachBeltAssets_Statics::NewProp_BeltAsset_Male_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELAttachBeltAssets_Statics::NewProp_BeltAsset_Female_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELAttachBeltAssets" },
		{ "ModuleRelativePath", "Public/ELAttachBeltAssets.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FELAttachBeltAssets_Statics::NewProp_BeltAsset_Female = { "BeltAsset_Female", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELAttachBeltAssets, BeltAsset_Female), Z_Construct_UClass_UEditWrestlerPartsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FELAttachBeltAssets_Statics::NewProp_BeltAsset_Female_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAttachBeltAssets_Statics::NewProp_BeltAsset_Female_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELAttachBeltAssets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELAttachBeltAssets_Statics::NewProp_BeltAsset_Male,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELAttachBeltAssets_Statics::NewProp_BeltAsset_Female,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELAttachBeltAssets_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELAttachBeltAssets",
		sizeof(FELAttachBeltAssets),
		alignof(FELAttachBeltAssets),
		Z_Construct_UScriptStruct_FELAttachBeltAssets_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAttachBeltAssets_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELAttachBeltAssets_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELAttachBeltAssets_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELAttachBeltAssets()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELAttachBeltAssets_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELAttachBeltAssets"), sizeof(FELAttachBeltAssets), Get_Z_Construct_UScriptStruct_FELAttachBeltAssets_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELAttachBeltAssets_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELAttachBeltAssets_Hash() { return 4129296666U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
