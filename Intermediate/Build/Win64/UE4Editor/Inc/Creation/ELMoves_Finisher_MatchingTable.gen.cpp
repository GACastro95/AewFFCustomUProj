// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/ELMoves_Finisher_MatchingTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMoves_Finisher_MatchingTable() {}
// Cross Module References
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FELMoves_Finisher_MatchingTable();
	UPackage* Z_Construct_UPackage__Script_Creation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EFinisher_Type();
// End Cross Module References

static_assert(std::is_polymorphic<FELMoves_Finisher_MatchingTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELMoves_Finisher_MatchingTable cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELMoves_Finisher_MatchingTable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CREATION_API uint32 Get_Z_Construct_UScriptStruct_FELMoves_Finisher_MatchingTable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMoves_Finisher_MatchingTable, Z_Construct_UPackage__Script_Creation(), TEXT("ELMoves_Finisher_MatchingTable"), sizeof(FELMoves_Finisher_MatchingTable), Get_Z_Construct_UScriptStruct_FELMoves_Finisher_MatchingTable_Hash());
	}
	return Singleton;
}
template<> CREATION_API UScriptStruct* StaticStruct<FELMoves_Finisher_MatchingTable>()
{
	return FELMoves_Finisher_MatchingTable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMoves_Finisher_MatchingTable(FELMoves_Finisher_MatchingTable::StaticStruct, TEXT("/Script/Creation"), TEXT("ELMoves_Finisher_MatchingTable"), false, nullptr, nullptr);
static struct FScriptStruct_Creation_StaticRegisterNativesFELMoves_Finisher_MatchingTable
{
	FScriptStruct_Creation_StaticRegisterNativesFELMoves_Finisher_MatchingTable()
	{
		UScriptStruct::DeferCppStructOps<FELMoves_Finisher_MatchingTable>(FName(TEXT("ELMoves_Finisher_MatchingTable")));
	}
} ScriptStruct_Creation_StaticRegisterNativesFELMoves_Finisher_MatchingTable;
	struct Z_Construct_UScriptStruct_FELMoves_Finisher_MatchingTable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MovesSlot_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovesSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MovesSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Finisher_MatchingTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMoves_Finisher_MatchingTable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMoves_Finisher_MatchingTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMoves_Finisher_MatchingTable>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELMoves_Finisher_MatchingTable_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Finisher_MatchingTable_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves_Finisher_MatchingTable" },
		{ "ModuleRelativePath", "Public/ELMoves_Finisher_MatchingTable.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELMoves_Finisher_MatchingTable_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves_Finisher_MatchingTable, Type), Z_Construct_UEnum_Creation_EFinisher_Type, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Finisher_MatchingTable_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Finisher_MatchingTable_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMoves_Finisher_MatchingTable_Statics::NewProp_MovesSlot_Inner = { "MovesSlot", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMoves_Finisher_MatchingTable_Statics::NewProp_MovesSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMoves_Finisher_MatchingTable" },
		{ "ModuleRelativePath", "Public/ELMoves_Finisher_MatchingTable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELMoves_Finisher_MatchingTable_Statics::NewProp_MovesSlot = { "MovesSlot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMoves_Finisher_MatchingTable, MovesSlot), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Finisher_MatchingTable_Statics::NewProp_MovesSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Finisher_MatchingTable_Statics::NewProp_MovesSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMoves_Finisher_MatchingTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Finisher_MatchingTable_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Finisher_MatchingTable_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Finisher_MatchingTable_Statics::NewProp_MovesSlot_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMoves_Finisher_MatchingTable_Statics::NewProp_MovesSlot,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMoves_Finisher_MatchingTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Creation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELMoves_Finisher_MatchingTable",
		sizeof(FELMoves_Finisher_MatchingTable),
		alignof(FELMoves_Finisher_MatchingTable),
		Z_Construct_UScriptStruct_FELMoves_Finisher_MatchingTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Finisher_MatchingTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMoves_Finisher_MatchingTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMoves_Finisher_MatchingTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMoves_Finisher_MatchingTable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMoves_Finisher_MatchingTable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMoves_Finisher_MatchingTable"), sizeof(FELMoves_Finisher_MatchingTable), Get_Z_Construct_UScriptStruct_FELMoves_Finisher_MatchingTable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMoves_Finisher_MatchingTable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMoves_Finisher_MatchingTable_Hash() { return 2160944238U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
