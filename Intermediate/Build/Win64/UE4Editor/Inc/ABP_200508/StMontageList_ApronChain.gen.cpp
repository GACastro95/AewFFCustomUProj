// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StMontageList_ApronChain.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStMontageList_ApronChain() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStMontageList_ApronChain();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FStMontageList_ApronChain>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStMontageList_ApronChain cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStMontageList_ApronChain::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStMontageList_ApronChain_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStMontageList_ApronChain, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StMontageList_ApronChain"), sizeof(FStMontageList_ApronChain), Get_Z_Construct_UScriptStruct_FStMontageList_ApronChain_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStMontageList_ApronChain>()
{
	return FStMontageList_ApronChain::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStMontageList_ApronChain(FStMontageList_ApronChain::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StMontageList_ApronChain"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStMontageList_ApronChain
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStMontageList_ApronChain()
	{
		UScriptStruct::DeferCppStructOps<FStMontageList_ApronChain>(FName(TEXT("StMontageList_ApronChain")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStMontageList_ApronChain;
	struct Z_Construct_UScriptStruct_FStMontageList_ApronChain_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StartList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LoopList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoopList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LoopList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMontageList_ApronChain_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StMontageList_ApronChain.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStMontageList_ApronChain_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStMontageList_ApronChain>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStMontageList_ApronChain_Statics::NewProp_StartList_Inner = { "StartList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMontageList_ApronChain_Statics::NewProp_StartList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMontageList_ApronChain" },
		{ "ModuleRelativePath", "Public/StMontageList_ApronChain.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStMontageList_ApronChain_Statics::NewProp_StartList = { "StartList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMontageList_ApronChain, StartList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMontageList_ApronChain_Statics::NewProp_StartList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMontageList_ApronChain_Statics::NewProp_StartList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStMontageList_ApronChain_Statics::NewProp_LoopList_Inner = { "LoopList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStMontageList_ApronChain_Statics::NewProp_LoopList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StMontageList_ApronChain" },
		{ "ModuleRelativePath", "Public/StMontageList_ApronChain.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStMontageList_ApronChain_Statics::NewProp_LoopList = { "LoopList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStMontageList_ApronChain, LoopList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStMontageList_ApronChain_Statics::NewProp_LoopList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMontageList_ApronChain_Statics::NewProp_LoopList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStMontageList_ApronChain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMontageList_ApronChain_Statics::NewProp_StartList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMontageList_ApronChain_Statics::NewProp_StartList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMontageList_ApronChain_Statics::NewProp_LoopList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStMontageList_ApronChain_Statics::NewProp_LoopList,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStMontageList_ApronChain_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StMontageList_ApronChain",
		sizeof(FStMontageList_ApronChain),
		alignof(FStMontageList_ApronChain),
		Z_Construct_UScriptStruct_FStMontageList_ApronChain_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMontageList_ApronChain_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStMontageList_ApronChain_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStMontageList_ApronChain_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStMontageList_ApronChain()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStMontageList_ApronChain_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StMontageList_ApronChain"), sizeof(FStMontageList_ApronChain), Get_Z_Construct_UScriptStruct_FStMontageList_ApronChain_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStMontageList_ApronChain_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStMontageList_ApronChain_Hash() { return 3388881645U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
