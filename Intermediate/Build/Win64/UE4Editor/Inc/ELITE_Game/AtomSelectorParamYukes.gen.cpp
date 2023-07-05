// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/AtomSelectorParamYukes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomSelectorParamYukes() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorParamYukes();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
class UScriptStruct* FAtomSelectorParamYukes::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FAtomSelectorParamYukes_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomSelectorParamYukes, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("AtomSelectorParamYukes"), sizeof(FAtomSelectorParamYukes), Get_Z_Construct_UScriptStruct_FAtomSelectorParamYukes_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FAtomSelectorParamYukes>()
{
	return FAtomSelectorParamYukes::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomSelectorParamYukes(FAtomSelectorParamYukes::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("AtomSelectorParamYukes"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFAtomSelectorParamYukes
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFAtomSelectorParamYukes()
	{
		UScriptStruct::DeferCppStructOps<FAtomSelectorParamYukes>(FName(TEXT("AtomSelectorParamYukes")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFAtomSelectorParamYukes;
	struct Z_Construct_UScriptStruct_FAtomSelectorParamYukes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Selector_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Selector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Label;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSelectorParamYukes_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomSelectorParamYukes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomSelectorParamYukes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomSelectorParamYukes>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSelectorParamYukes_Statics::NewProp_Selector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomSelectorParamYukes" },
		{ "ModuleRelativePath", "Public/AtomSelectorParamYukes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomSelectorParamYukes_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomSelectorParamYukes, Selector), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSelectorParamYukes_Statics::NewProp_Selector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelectorParamYukes_Statics::NewProp_Selector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomSelectorParamYukes_Statics::NewProp_Label_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomSelectorParamYukes" },
		{ "ModuleRelativePath", "Public/AtomSelectorParamYukes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomSelectorParamYukes_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomSelectorParamYukes, Label), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSelectorParamYukes_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelectorParamYukes_Statics::NewProp_Label_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomSelectorParamYukes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSelectorParamYukes_Statics::NewProp_Selector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomSelectorParamYukes_Statics::NewProp_Label,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomSelectorParamYukes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"AtomSelectorParamYukes",
		sizeof(FAtomSelectorParamYukes),
		alignof(FAtomSelectorParamYukes),
		Z_Construct_UScriptStruct_FAtomSelectorParamYukes_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelectorParamYukes_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomSelectorParamYukes_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomSelectorParamYukes_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorParamYukes()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomSelectorParamYukes_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomSelectorParamYukes"), sizeof(FAtomSelectorParamYukes), Get_Z_Construct_UScriptStruct_FAtomSelectorParamYukes_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomSelectorParamYukes_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomSelectorParamYukes_Hash() { return 1158713246U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
