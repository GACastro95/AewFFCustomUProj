// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomCueSheetDataTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomCueSheetDataTable() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueSheetDataTable();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoDataTable();
// End Cross Module References

static_assert(std::is_polymorphic<FAtomCueSheetDataTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FAtomCueSheetDataTable cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FAtomCueSheetDataTable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomCueSheetDataTable, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomCueSheetDataTable"), sizeof(FAtomCueSheetDataTable), Get_Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomCueSheetDataTable>()
{
	return FAtomCueSheetDataTable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomCueSheetDataTable(FAtomCueSheetDataTable::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomCueSheetDataTable"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueSheetDataTable
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueSheetDataTable()
	{
		UScriptStruct::DeferCppStructOps<FAtomCueSheetDataTable>(FName(TEXT("AtomCueSheetDataTable")));
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueSheetDataTable;
	struct Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorkUnit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WorkUnit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableCueLimit_MetaData[];
#endif
		static void NewProp_EnableCueLimit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableCueLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumCueLimits_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumCueLimits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriorityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PriorityType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriorityTypeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PriorityTypeIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Cue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Cue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomCueSheetDataTable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomCueSheetDataTable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueSheetDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueSheetDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueSheetDataTable, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_BuildDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueSheetDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueSheetDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_BuildDate = { "BuildDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueSheetDataTable, BuildDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_BuildDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_BuildDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_WorkUnit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueSheetDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueSheetDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_WorkUnit = { "WorkUnit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueSheetDataTable, WorkUnit), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_WorkUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_WorkUnit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Volume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueSheetDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueSheetDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueSheetDataTable, Volume), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_EnableCueLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueSheetDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueSheetDataTable.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_EnableCueLimit_SetBit(void* Obj)
	{
		((FAtomCueSheetDataTable*)Obj)->EnableCueLimit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_EnableCueLimit = { "EnableCueLimit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtomCueSheetDataTable), &Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_EnableCueLimit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_EnableCueLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_EnableCueLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_NumCueLimits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueSheetDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueSheetDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_NumCueLimits = { "NumCueLimits", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueSheetDataTable, NumCueLimits), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_NumCueLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_NumCueLimits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_PriorityType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueSheetDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueSheetDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_PriorityType = { "PriorityType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueSheetDataTable, PriorityType), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_PriorityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_PriorityType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_PriorityTypeIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueSheetDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueSheetDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_PriorityTypeIndex = { "PriorityTypeIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueSheetDataTable, PriorityTypeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_PriorityTypeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_PriorityTypeIndex_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Cue_Inner = { "Cue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomCueInfoDataTable, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Cue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueSheetDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueSheetDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Cue = { "Cue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueSheetDataTable, Cue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Cue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Cue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_BuildDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_WorkUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_EnableCueLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_NumCueLimits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_PriorityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_PriorityTypeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Cue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::NewProp_Cue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"AtomCueSheetDataTable",
		sizeof(FAtomCueSheetDataTable),
		alignof(FAtomCueSheetDataTable),
		Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomCueSheetDataTable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomCueSheetDataTable"), sizeof(FAtomCueSheetDataTable), Get_Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomCueSheetDataTable_Hash() { return 1172678498U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
