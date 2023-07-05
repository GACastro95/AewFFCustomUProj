// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/PossessedItemSaveData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePossessedItemSaveData() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FPossessedItemSaveData();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
class UScriptStruct* FPossessedItemSaveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FPossessedItemSaveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPossessedItemSaveData, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("PossessedItemSaveData"), sizeof(FPossessedItemSaveData), Get_Z_Construct_UScriptStruct_FPossessedItemSaveData_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FPossessedItemSaveData>()
{
	return FPossessedItemSaveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPossessedItemSaveData(FPossessedItemSaveData::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("PossessedItemSaveData"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFPossessedItemSaveData
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFPossessedItemSaveData()
	{
		UScriptStruct::DeferCppStructOps<FPossessedItemSaveData>(FName(TEXT("PossessedItemSaveData")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFPossessedItemSaveData;
	struct Z_Construct_UScriptStruct_FPossessedItemSaveData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PossessedNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PossessedNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPossessedItemSaveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PossessedItemSaveData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPossessedItemSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPossessedItemSaveData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPossessedItemSaveData_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PossessedItemSaveData" },
		{ "ModuleRelativePath", "Public/PossessedItemSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPossessedItemSaveData_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPossessedItemSaveData, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FPossessedItemSaveData_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPossessedItemSaveData_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPossessedItemSaveData_Statics::NewProp_PossessedNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PossessedItemSaveData" },
		{ "ModuleRelativePath", "Public/PossessedItemSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPossessedItemSaveData_Statics::NewProp_PossessedNum = { "PossessedNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPossessedItemSaveData, PossessedNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FPossessedItemSaveData_Statics::NewProp_PossessedNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPossessedItemSaveData_Statics::NewProp_PossessedNum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPossessedItemSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPossessedItemSaveData_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPossessedItemSaveData_Statics::NewProp_PossessedNum,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPossessedItemSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"PossessedItemSaveData",
		sizeof(FPossessedItemSaveData),
		alignof(FPossessedItemSaveData),
		Z_Construct_UScriptStruct_FPossessedItemSaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPossessedItemSaveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPossessedItemSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPossessedItemSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPossessedItemSaveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPossessedItemSaveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PossessedItemSaveData"), sizeof(FPossessedItemSaveData), Get_Z_Construct_UScriptStruct_FPossessedItemSaveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPossessedItemSaveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPossessedItemSaveData_Hash() { return 544132225U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
