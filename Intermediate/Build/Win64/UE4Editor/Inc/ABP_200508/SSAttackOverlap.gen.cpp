// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSAttackOverlap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSAttackOverlap() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSAttackOverlap();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FSSAttackOverlap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSAttackOverlap_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSAttackOverlap, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSAttackOverlap"), sizeof(FSSAttackOverlap), Get_Z_Construct_UScriptStruct_FSSAttackOverlap_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSAttackOverlap>()
{
	return FSSAttackOverlap::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSAttackOverlap(FSSAttackOverlap::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSAttackOverlap"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSAttackOverlap
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSAttackOverlap()
	{
		UScriptStruct::DeferCppStructOps<FSSAttackOverlap>(FName(TEXT("SSAttackOverlap")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSAttackOverlap;
	struct Z_Construct_UScriptStruct_FSSAttackOverlap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverlapActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackOverlap_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSAttackOverlap.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSAttackOverlap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSAttackOverlap>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSSAttackOverlap_Statics::NewProp_OverlapActors_Inner = { "OverlapActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSAttackOverlap_Statics::NewProp_OverlapActors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSAttackOverlap" },
		{ "ModuleRelativePath", "Public/SSAttackOverlap.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSSAttackOverlap_Statics::NewProp_OverlapActors = { "OverlapActors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSAttackOverlap, OverlapActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackOverlap_Statics::NewProp_OverlapActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackOverlap_Statics::NewProp_OverlapActors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSAttackOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackOverlap_Statics::NewProp_OverlapActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSAttackOverlap_Statics::NewProp_OverlapActors,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSAttackOverlap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSAttackOverlap",
		sizeof(FSSAttackOverlap),
		alignof(FSSAttackOverlap),
		Z_Construct_UScriptStruct_FSSAttackOverlap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackOverlap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSAttackOverlap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSAttackOverlap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSAttackOverlap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSAttackOverlap_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSAttackOverlap"), sizeof(FSSAttackOverlap), Get_Z_Construct_UScriptStruct_FSSAttackOverlap_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSAttackOverlap_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSAttackOverlap_Hash() { return 237397147U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
