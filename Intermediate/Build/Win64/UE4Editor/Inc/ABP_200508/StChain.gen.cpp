// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/StChain.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStChain() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStChain();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FStChainMove();
// End Cross Module References

static_assert(std::is_polymorphic<FStChain>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FStChain cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FStChain::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FStChain_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStChain, Z_Construct_UPackage__Script_ABP_200508(), TEXT("StChain"), sizeof(FStChain), Get_Z_Construct_UScriptStruct_FStChain_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FStChain>()
{
	return FStChain::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStChain(FStChain::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("StChain"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFStChain
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFStChain()
	{
		UScriptStruct::DeferCppStructOps<FStChain>(FName(TEXT("StChain")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFStChain;
	struct Z_Construct_UScriptStruct_FStChain_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Push_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Push;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pull_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pull;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStChain_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StChain.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStChain_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStChain>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStChain_Statics::NewProp_Push_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StChain" },
		{ "ModuleRelativePath", "Public/StChain.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStChain_Statics::NewProp_Push = { "Push", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStChain, Push), Z_Construct_UScriptStruct_FStChainMove, METADATA_PARAMS(Z_Construct_UScriptStruct_FStChain_Statics::NewProp_Push_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStChain_Statics::NewProp_Push_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStChain_Statics::NewProp_Pull_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "StChain" },
		{ "ModuleRelativePath", "Public/StChain.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStChain_Statics::NewProp_Pull = { "Pull", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStChain, Pull), Z_Construct_UScriptStruct_FStChainMove, METADATA_PARAMS(Z_Construct_UScriptStruct_FStChain_Statics::NewProp_Pull_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStChain_Statics::NewProp_Pull_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStChain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStChain_Statics::NewProp_Push,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStChain_Statics::NewProp_Pull,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStChain_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"StChain",
		sizeof(FStChain),
		alignof(FStChain),
		Z_Construct_UScriptStruct_FStChain_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStChain_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStChain_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStChain_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStChain()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStChain_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StChain"), sizeof(FStChain), Get_Z_Construct_UScriptStruct_FStChain_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStChain_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStChain_Hash() { return 3415703330U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
