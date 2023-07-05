// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/UnavailableDlcData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnavailableDlcData() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FUnavailableDlcData();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FUnavailableDlcWrestlerParam();
// End Cross Module References
class UScriptStruct* FUnavailableDlcData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FUnavailableDlcData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUnavailableDlcData, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("UnavailableDlcData"), sizeof(FUnavailableDlcData), Get_Z_Construct_UScriptStruct_FUnavailableDlcData_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FUnavailableDlcData>()
{
	return FUnavailableDlcData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUnavailableDlcData(FUnavailableDlcData::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("UnavailableDlcData"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFUnavailableDlcData
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFUnavailableDlcData()
	{
		UScriptStruct::DeferCppStructOps<FUnavailableDlcData>(FName(TEXT("UnavailableDlcData")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFUnavailableDlcData;
	struct Z_Construct_UScriptStruct_FUnavailableDlcData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UnlockableItemIds_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockableItemIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_UnlockableItemIds;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WrestlerParams_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WrestlerParams;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnavailableDlcData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UnavailableDlcData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUnavailableDlcData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUnavailableDlcData>();
	}
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUnavailableDlcData_Statics::NewProp_UnlockableItemIds_ElementProp = { "UnlockableItemIds", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnavailableDlcData_Statics::NewProp_UnlockableItemIds_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UnavailableDlcData" },
		{ "ModuleRelativePath", "Public/UnavailableDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FUnavailableDlcData_Statics::NewProp_UnlockableItemIds = { "UnlockableItemIds", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnavailableDlcData, UnlockableItemIds), METADATA_PARAMS(Z_Construct_UScriptStruct_FUnavailableDlcData_Statics::NewProp_UnlockableItemIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnavailableDlcData_Statics::NewProp_UnlockableItemIds_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUnavailableDlcData_Statics::NewProp_WrestlerParams_Inner = { "WrestlerParams", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUnavailableDlcWrestlerParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUnavailableDlcData_Statics::NewProp_WrestlerParams_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "UnavailableDlcData" },
		{ "ModuleRelativePath", "Public/UnavailableDlcData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUnavailableDlcData_Statics::NewProp_WrestlerParams = { "WrestlerParams", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUnavailableDlcData, WrestlerParams), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUnavailableDlcData_Statics::NewProp_WrestlerParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnavailableDlcData_Statics::NewProp_WrestlerParams_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUnavailableDlcData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnavailableDlcData_Statics::NewProp_UnlockableItemIds_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnavailableDlcData_Statics::NewProp_UnlockableItemIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnavailableDlcData_Statics::NewProp_WrestlerParams_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUnavailableDlcData_Statics::NewProp_WrestlerParams,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUnavailableDlcData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"UnavailableDlcData",
		sizeof(FUnavailableDlcData),
		alignof(FUnavailableDlcData),
		Z_Construct_UScriptStruct_FUnavailableDlcData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnavailableDlcData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUnavailableDlcData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUnavailableDlcData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUnavailableDlcData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUnavailableDlcData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UnavailableDlcData"), sizeof(FUnavailableDlcData), Get_Z_Construct_UScriptStruct_FUnavailableDlcData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUnavailableDlcData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUnavailableDlcData_Hash() { return 3830792480U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
