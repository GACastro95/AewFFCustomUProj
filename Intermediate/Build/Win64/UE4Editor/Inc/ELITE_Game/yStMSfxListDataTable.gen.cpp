// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/yStMSfxListDataTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeyStMSfxListDataTable() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FyStMSfxListDataTable();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CRIWARERUNTIME_API UClass* Z_Construct_UClass_USoundAtomCue_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FyStMSfxListDataTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FyStMSfxListDataTable cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FyStMSfxListDataTable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FyStMSfxListDataTable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FyStMSfxListDataTable, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("yStMSfxListDataTable"), sizeof(FyStMSfxListDataTable), Get_Z_Construct_UScriptStruct_FyStMSfxListDataTable_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FyStMSfxListDataTable>()
{
	return FyStMSfxListDataTable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FyStMSfxListDataTable(FyStMSfxListDataTable::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("yStMSfxListDataTable"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFyStMSfxListDataTable
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFyStMSfxListDataTable()
	{
		UScriptStruct::DeferCppStructOps<FyStMSfxListDataTable>(FName(TEXT("yStMSfxListDataTable")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFyStMSfxListDataTable;
	struct Z_Construct_UScriptStruct_FyStMSfxListDataTable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CueName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Group;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CueEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Memo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Memo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FyStMSfxListDataTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/yStMSfxListDataTable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FyStMSfxListDataTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FyStMSfxListDataTable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FyStMSfxListDataTable_Statics::NewProp_CueName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "yStMSfxListDataTable" },
		{ "ModuleRelativePath", "Public/yStMSfxListDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FyStMSfxListDataTable_Statics::NewProp_CueName = { "CueName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FyStMSfxListDataTable, CueName), METADATA_PARAMS(Z_Construct_UScriptStruct_FyStMSfxListDataTable_Statics::NewProp_CueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FyStMSfxListDataTable_Statics::NewProp_CueName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FyStMSfxListDataTable_Statics::NewProp_Group_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "yStMSfxListDataTable" },
		{ "ModuleRelativePath", "Public/yStMSfxListDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FyStMSfxListDataTable_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FyStMSfxListDataTable, Group), METADATA_PARAMS(Z_Construct_UScriptStruct_FyStMSfxListDataTable_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FyStMSfxListDataTable_Statics::NewProp_Group_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FyStMSfxListDataTable_Statics::NewProp_CueEvent_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "yStMSfxListDataTable" },
		{ "ModuleRelativePath", "Public/yStMSfxListDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FyStMSfxListDataTable_Statics::NewProp_CueEvent = { "CueEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FyStMSfxListDataTable, CueEvent), Z_Construct_UClass_USoundAtomCue_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FyStMSfxListDataTable_Statics::NewProp_CueEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FyStMSfxListDataTable_Statics::NewProp_CueEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FyStMSfxListDataTable_Statics::NewProp_Memo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "yStMSfxListDataTable" },
		{ "ModuleRelativePath", "Public/yStMSfxListDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FyStMSfxListDataTable_Statics::NewProp_Memo = { "Memo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FyStMSfxListDataTable, Memo), METADATA_PARAMS(Z_Construct_UScriptStruct_FyStMSfxListDataTable_Statics::NewProp_Memo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FyStMSfxListDataTable_Statics::NewProp_Memo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FyStMSfxListDataTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FyStMSfxListDataTable_Statics::NewProp_CueName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FyStMSfxListDataTable_Statics::NewProp_Group,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FyStMSfxListDataTable_Statics::NewProp_CueEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FyStMSfxListDataTable_Statics::NewProp_Memo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FyStMSfxListDataTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"yStMSfxListDataTable",
		sizeof(FyStMSfxListDataTable),
		alignof(FyStMSfxListDataTable),
		Z_Construct_UScriptStruct_FyStMSfxListDataTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FyStMSfxListDataTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FyStMSfxListDataTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FyStMSfxListDataTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FyStMSfxListDataTable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FyStMSfxListDataTable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("yStMSfxListDataTable"), sizeof(FyStMSfxListDataTable), Get_Z_Construct_UScriptStruct_FyStMSfxListDataTable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FyStMSfxListDataTable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FyStMSfxListDataTable_Hash() { return 3908920421U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
