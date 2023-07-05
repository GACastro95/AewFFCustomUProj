// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELCustomSearchMovesData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCustomSearchMovesData() {}
// Cross Module References
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FELCustomSearchMovesData();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FUnlockableItemParam();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELUnlockItemSaveData();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FMovesSituation();
// End Cross Module References
class UScriptStruct* FELCustomSearchMovesData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_API uint32 Get_Z_Construct_UScriptStruct_FELCustomSearchMovesData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELCustomSearchMovesData, Z_Construct_UPackage__Script_ELITE(), TEXT("ELCustomSearchMovesData"), sizeof(FELCustomSearchMovesData), Get_Z_Construct_UScriptStruct_FELCustomSearchMovesData_Hash());
	}
	return Singleton;
}
template<> ELITE_API UScriptStruct* StaticStruct<FELCustomSearchMovesData>()
{
	return FELCustomSearchMovesData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELCustomSearchMovesData(FELCustomSearchMovesData::StaticStruct, TEXT("/Script/ELITE"), TEXT("ELCustomSearchMovesData"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_StaticRegisterNativesFELCustomSearchMovesData
{
	FScriptStruct_ELITE_StaticRegisterNativesFELCustomSearchMovesData()
	{
		UScriptStruct::DeferCppStructOps<FELCustomSearchMovesData>(FName(TEXT("ELCustomSearchMovesData")));
	}
} ScriptStruct_ELITE_StaticRegisterNativesFELCustomSearchMovesData;
	struct Z_Construct_UScriptStruct_FELCustomSearchMovesData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockableItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnlockableItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnlockItemSave_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UnlockItemSave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovesSituation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovesSituation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELCustomSearchMovesData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELCustomSearchMovesData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELCustomSearchMovesData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELCustomSearchMovesData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELCustomSearchMovesData_Statics::NewProp_UnlockableItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCustomSearchMovesData" },
		{ "ModuleRelativePath", "Public/ELCustomSearchMovesData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELCustomSearchMovesData_Statics::NewProp_UnlockableItem = { "UnlockableItem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELCustomSearchMovesData, UnlockableItem), Z_Construct_UScriptStruct_FUnlockableItemParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FELCustomSearchMovesData_Statics::NewProp_UnlockableItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELCustomSearchMovesData_Statics::NewProp_UnlockableItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELCustomSearchMovesData_Statics::NewProp_UnlockItemSave_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCustomSearchMovesData" },
		{ "ModuleRelativePath", "Public/ELCustomSearchMovesData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELCustomSearchMovesData_Statics::NewProp_UnlockItemSave = { "UnlockItemSave", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELCustomSearchMovesData, UnlockItemSave), Z_Construct_UScriptStruct_FELUnlockItemSaveData, METADATA_PARAMS(Z_Construct_UScriptStruct_FELCustomSearchMovesData_Statics::NewProp_UnlockItemSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELCustomSearchMovesData_Statics::NewProp_UnlockItemSave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELCustomSearchMovesData_Statics::NewProp_MovesSituation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCustomSearchMovesData" },
		{ "ModuleRelativePath", "Public/ELCustomSearchMovesData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELCustomSearchMovesData_Statics::NewProp_MovesSituation = { "MovesSituation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELCustomSearchMovesData, MovesSituation), Z_Construct_UScriptStruct_FMovesSituation, METADATA_PARAMS(Z_Construct_UScriptStruct_FELCustomSearchMovesData_Statics::NewProp_MovesSituation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELCustomSearchMovesData_Statics::NewProp_MovesSituation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELCustomSearchMovesData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELCustomSearchMovesData_Statics::NewProp_UnlockableItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELCustomSearchMovesData_Statics::NewProp_UnlockItemSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELCustomSearchMovesData_Statics::NewProp_MovesSituation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELCustomSearchMovesData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
		nullptr,
		&NewStructOps,
		"ELCustomSearchMovesData",
		sizeof(FELCustomSearchMovesData),
		alignof(FELCustomSearchMovesData),
		Z_Construct_UScriptStruct_FELCustomSearchMovesData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELCustomSearchMovesData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELCustomSearchMovesData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELCustomSearchMovesData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELCustomSearchMovesData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELCustomSearchMovesData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELCustomSearchMovesData"), sizeof(FELCustomSearchMovesData), Get_Z_Construct_UScriptStruct_FELCustomSearchMovesData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELCustomSearchMovesData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELCustomSearchMovesData_Hash() { return 3689644620U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
