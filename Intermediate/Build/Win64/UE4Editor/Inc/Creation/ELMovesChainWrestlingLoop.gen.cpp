// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMovesChainWrestlingLoop.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMovesChainWrestlingLoop() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMovesChainWrestlingLoop();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References

static_assert(std::is_polymorphic<FELMovesChainWrestlingLoop>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMovesChainWrestlingLoop cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMovesChainWrestlingLoop::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELMovesChainWrestlingLoop_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMovesChainWrestlingLoop, Z_Construct_UPackage__Script_Creation(), TEXT("ELMovesChainWrestlingLoop"), sizeof(FELMovesChainWrestlingLoop), Get_Z_Construct_UScriptStruct_FELMovesChainWrestlingLoop_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELMovesChainWrestlingLoop>()
{
	return FELMovesChainWrestlingLoop::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMovesChainWrestlingLoop(FELMovesChainWrestlingLoop::StaticStruct, TEXT("/Script/Creation"), TEXT("ELMovesChainWrestlingLoop"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELMovesChainWrestlingLoop
{
	FScriptStruct_Creation_StaticRegisterNativesFELMovesChainWrestlingLoop()
	{
		UScriptStruct::DeferCppStructOps<FELMovesChainWrestlingLoop>(FName(TEXT("ELMovesChainWrestlingLoop")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELMovesChainWrestlingLoop;
	struct Z_Construct_UScriptStruct_FELMovesChainWrestlingLoop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reversal_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Reversal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Release_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Release;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesChainWrestlingLoop_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMovesChainWrestlingLoop.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMovesChainWrestlingLoop_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMovesChainWrestlingLoop>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesChainWrestlingLoop_Statics::NewProp_Reversal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesChainWrestlingLoop" },
		{ "ModuleRelativePath", "Public/ELMovesChainWrestlingLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesChainWrestlingLoop_Statics::NewProp_Reversal = { "Reversal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesChainWrestlingLoop, Reversal), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesChainWrestlingLoop_Statics::NewProp_Reversal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesChainWrestlingLoop_Statics::NewProp_Reversal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMovesChainWrestlingLoop_Statics::NewProp_Release_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMovesChainWrestlingLoop" },
		{ "ModuleRelativePath", "Public/ELMovesChainWrestlingLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMovesChainWrestlingLoop_Statics::NewProp_Release = { "Release", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMovesChainWrestlingLoop, Release), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesChainWrestlingLoop_Statics::NewProp_Release_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesChainWrestlingLoop_Statics::NewProp_Release_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMovesChainWrestlingLoop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesChainWrestlingLoop_Statics::NewProp_Reversal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMovesChainWrestlingLoop_Statics::NewProp_Release,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMovesChainWrestlingLoop_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMovesChainWrestlingLoop",
		sizeof(FELMovesChainWrestlingLoop),
		alignof(FELMovesChainWrestlingLoop),
		Z_Construct_UScriptStruct_FELMovesChainWrestlingLoop_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesChainWrestlingLoop_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMovesChainWrestlingLoop_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMovesChainWrestlingLoop_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMovesChainWrestlingLoop()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMovesChainWrestlingLoop_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMovesChainWrestlingLoop"), sizeof(FELMovesChainWrestlingLoop), Get_Z_Construct_UScriptStruct_FELMovesChainWrestlingLoop_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMovesChainWrestlingLoop_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMovesChainWrestlingLoop_Hash() { return 4156095315U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
