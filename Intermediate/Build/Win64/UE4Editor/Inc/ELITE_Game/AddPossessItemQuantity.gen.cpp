// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/AddPossessItemQuantity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAddPossessItemQuantity() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FAddPossessItemQuantity();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
class UScriptStruct* FAddPossessItemQuantity::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FAddPossessItemQuantity_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAddPossessItemQuantity, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("AddPossessItemQuantity"), sizeof(FAddPossessItemQuantity), Get_Z_Construct_UScriptStruct_FAddPossessItemQuantity_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FAddPossessItemQuantity>()
{
	return FAddPossessItemQuantity::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAddPossessItemQuantity(FAddPossessItemQuantity::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("AddPossessItemQuantity"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFAddPossessItemQuantity
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFAddPossessItemQuantity()
	{
		UScriptStruct::DeferCppStructOps<FAddPossessItemQuantity>(FName(TEXT("AddPossessItemQuantity")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFAddPossessItemQuantity;
	struct Z_Construct_UScriptStruct_FAddPossessItemQuantity_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AddValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddPossessItemQuantity_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AddPossessItemQuantity.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAddPossessItemQuantity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAddPossessItemQuantity>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddPossessItemQuantity_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AddPossessItemQuantity" },
		{ "ModuleRelativePath", "Public/AddPossessItemQuantity.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAddPossessItemQuantity_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAddPossessItemQuantity, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAddPossessItemQuantity_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddPossessItemQuantity_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddPossessItemQuantity_Statics::NewProp_AddValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AddPossessItemQuantity" },
		{ "ModuleRelativePath", "Public/AddPossessItemQuantity.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAddPossessItemQuantity_Statics::NewProp_AddValue = { "AddValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAddPossessItemQuantity, AddValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAddPossessItemQuantity_Statics::NewProp_AddValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddPossessItemQuantity_Statics::NewProp_AddValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAddPossessItemQuantity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddPossessItemQuantity_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddPossessItemQuantity_Statics::NewProp_AddValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAddPossessItemQuantity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"AddPossessItemQuantity",
		sizeof(FAddPossessItemQuantity),
		alignof(FAddPossessItemQuantity),
		Z_Construct_UScriptStruct_FAddPossessItemQuantity_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddPossessItemQuantity_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAddPossessItemQuantity_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddPossessItemQuantity_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAddPossessItemQuantity()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAddPossessItemQuantity_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AddPossessItemQuantity"), sizeof(FAddPossessItemQuantity), Get_Z_Construct_UScriptStruct_FAddPossessItemQuantity_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAddPossessItemQuantity_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAddPossessItemQuantity_Hash() { return 1703124681U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
