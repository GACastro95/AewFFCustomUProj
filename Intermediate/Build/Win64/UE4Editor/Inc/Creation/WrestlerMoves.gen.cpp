// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/WrestlerMoves.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWrestlerMoves() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FWrestlerMoves();
	UPackage* Z_Construct_UPackage__Script_Creation();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMoves();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMoves_Finisher();
// End Cross Module References
class UScriptStruct* FWrestlerMoves::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FWrestlerMoves_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWrestlerMoves, Z_Construct_UPackage__Script_Creation(), TEXT("WrestlerMoves"), sizeof(FWrestlerMoves), Get_Z_Construct_UScriptStruct_FWrestlerMoves_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FWrestlerMoves>()
{
	return FWrestlerMoves::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWrestlerMoves(FWrestlerMoves::StaticStruct, TEXT("/Script/Creation"), TEXT("WrestlerMoves"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFWrestlerMoves
{
	FScriptStruct_Creation_StaticRegisterNativesFWrestlerMoves()
	{
		UScriptStruct::DeferCppStructOps<FWrestlerMoves>(FName(TEXT("WrestlerMoves")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFWrestlerMoves;
	struct Z_Construct_UScriptStruct_FWrestlerMoves_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalMoves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExciteMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExciteMoves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialMoves_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpecialMoves;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerMoves_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WrestlerMoves.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWrestlerMoves_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWrestlerMoves>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerMoves_Statics::NewProp_NormalMoves_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerMoves" },
		{ "ModuleRelativePath", "Public/WrestlerMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWrestlerMoves_Statics::NewProp_NormalMoves = { "NormalMoves", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerMoves, NormalMoves), Z_Construct_UScriptStruct_FELMoves, METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerMoves_Statics::NewProp_NormalMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerMoves_Statics::NewProp_NormalMoves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerMoves_Statics::NewProp_ExciteMoves_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerMoves" },
		{ "ModuleRelativePath", "Public/WrestlerMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWrestlerMoves_Statics::NewProp_ExciteMoves = { "ExciteMoves", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerMoves, ExciteMoves), Z_Construct_UScriptStruct_FELMoves_Finisher, METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerMoves_Statics::NewProp_ExciteMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerMoves_Statics::NewProp_ExciteMoves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrestlerMoves_Statics::NewProp_SpecialMoves_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "WrestlerMoves" },
		{ "ModuleRelativePath", "Public/WrestlerMoves.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWrestlerMoves_Statics::NewProp_SpecialMoves = { "SpecialMoves", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWrestlerMoves, SpecialMoves), Z_Construct_UScriptStruct_FELMoves_Finisher, METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerMoves_Statics::NewProp_SpecialMoves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerMoves_Statics::NewProp_SpecialMoves_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWrestlerMoves_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerMoves_Statics::NewProp_NormalMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerMoves_Statics::NewProp_ExciteMoves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrestlerMoves_Statics::NewProp_SpecialMoves,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWrestlerMoves_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		nullptr,
		&NewStructOps,
		"WrestlerMoves",
		sizeof(FWrestlerMoves),
		alignof(FWrestlerMoves),
		Z_Construct_UScriptStruct_FWrestlerMoves_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerMoves_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWrestlerMoves_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrestlerMoves_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWrestlerMoves()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWrestlerMoves_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WrestlerMoves"), sizeof(FWrestlerMoves), Get_Z_Construct_UScriptStruct_FWrestlerMoves_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWrestlerMoves_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWrestlerMoves_Hash() { return 2288123300U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
