// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/EditCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditCondition() {}
// Cross Module References
	ELITE_CORE_API UScriptStruct* Z_Construct_UScriptStruct_FEditCondition();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
// End Cross Module References
class UScriptStruct* FEditCondition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_CORE_API uint32 Get_Z_Construct_UScriptStruct_FEditCondition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditCondition, Z_Construct_UPackage__Script_ELITE_Core(), TEXT("EditCondition"), sizeof(FEditCondition), Get_Z_Construct_UScriptStruct_FEditCondition_Hash());
	}
	return Singleton;
}
template<> ELITE_CORE_API UScriptStruct* StaticStruct<FEditCondition>()
{
	return FEditCondition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEditCondition(FEditCondition::StaticStruct, TEXT("/Script/ELITE_Core"), TEXT("EditCondition"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Core_StaticRegisterNativesFEditCondition
{
	FScriptStruct_ELITE_Core_StaticRegisterNativesFEditCondition()
	{
		UScriptStruct::DeferCppStructOps<FEditCondition>(FName(TEXT("EditCondition")));
	}
} ScriptStruct_ELITE_Core_StaticRegisterNativesFEditCondition;
	struct Z_Construct_UScriptStruct_FEditCondition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BitFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BitFlags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditCondition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EditCondition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditCondition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditCondition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditCondition_Statics::NewProp_BitFlags_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EditCondition" },
		{ "ModuleRelativePath", "Public/EditCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditCondition_Statics::NewProp_BitFlags = { "BitFlags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEditCondition, BitFlags), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditCondition_Statics::NewProp_BitFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditCondition_Statics::NewProp_BitFlags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditCondition_Statics::NewProp_BitFlags,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditCondition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Core,
		nullptr,
		&NewStructOps,
		"EditCondition",
		sizeof(FEditCondition),
		alignof(FEditCondition),
		Z_Construct_UScriptStruct_FEditCondition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditCondition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditCondition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditCondition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditCondition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEditCondition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Core();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EditCondition"), sizeof(FEditCondition), Get_Z_Construct_UScriptStruct_FEditCondition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEditCondition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEditCondition_Hash() { return 17077102U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
