// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELInteractiveVictoryCutsceneParamMontageSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELInteractiveVictoryCutsceneParamMontageSet() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
class UScriptStruct* FELInteractiveVictoryCutsceneParamMontageSet::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELInteractiveVictoryCutsceneParamMontageSet"), sizeof(FELInteractiveVictoryCutsceneParamMontageSet), Get_Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELInteractiveVictoryCutsceneParamMontageSet>()
{
	return FELInteractiveVictoryCutsceneParamMontageSet::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet(FELInteractiveVictoryCutsceneParamMontageSet::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELInteractiveVictoryCutsceneParamMontageSet"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELInteractiveVictoryCutsceneParamMontageSet
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELInteractiveVictoryCutsceneParamMontageSet()
	{
		UScriptStruct::DeferCppStructOps<FELInteractiveVictoryCutsceneParamMontageSet>(FName(TEXT("ELInteractiveVictoryCutsceneParamMontageSet")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELInteractiveVictoryCutsceneParamMontageSet;
	struct Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Winners_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Winners_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Winners;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Losers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Losers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Losers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELInteractiveVictoryCutsceneParamMontageSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELInteractiveVictoryCutsceneParamMontageSet>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet_Statics::NewProp_Winners_Inner = { "Winners", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet_Statics::NewProp_Winners_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELInteractiveVictoryCutsceneParamMontageSet" },
		{ "ModuleRelativePath", "Public/ELInteractiveVictoryCutsceneParamMontageSet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet_Statics::NewProp_Winners = { "Winners", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELInteractiveVictoryCutsceneParamMontageSet, Winners), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet_Statics::NewProp_Winners_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet_Statics::NewProp_Winners_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet_Statics::NewProp_Losers_Inner = { "Losers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet_Statics::NewProp_Losers_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELInteractiveVictoryCutsceneParamMontageSet" },
		{ "ModuleRelativePath", "Public/ELInteractiveVictoryCutsceneParamMontageSet.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet_Statics::NewProp_Losers = { "Losers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELInteractiveVictoryCutsceneParamMontageSet, Losers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet_Statics::NewProp_Losers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet_Statics::NewProp_Losers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet_Statics::NewProp_Winners_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet_Statics::NewProp_Winners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet_Statics::NewProp_Losers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet_Statics::NewProp_Losers,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELInteractiveVictoryCutsceneParamMontageSet",
		sizeof(FELInteractiveVictoryCutsceneParamMontageSet),
		alignof(FELInteractiveVictoryCutsceneParamMontageSet),
		Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELInteractiveVictoryCutsceneParamMontageSet"), sizeof(FELInteractiveVictoryCutsceneParamMontageSet), Get_Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELInteractiveVictoryCutsceneParamMontageSet_Hash() { return 1557960606U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
