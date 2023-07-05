// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomCueInfoDataTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomCueInfoDataTable() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoDataTable();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoTrackParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam();
// End Cross Module References

static_assert(std::is_polymorphic<FAtomCueInfoDataTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FAtomCueInfoDataTable cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FAtomCueInfoDataTable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomCueInfoDataTable, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomCueInfoDataTable"), sizeof(FAtomCueInfoDataTable), Get_Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomCueInfoDataTable>()
{
	return FAtomCueInfoDataTable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomCueInfoDataTable(FAtomCueInfoDataTable::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomCueInfoDataTable"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueInfoDataTable
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueInfoDataTable()
	{
		UScriptStruct::DeferCppStructOps<FAtomCueInfoDataTable>(FName(TEXT("AtomCueInfoDataTable")));
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomCueInfoDataTable;
	struct Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CueId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueTypeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CueTypeIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CueType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CueType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSelectorLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultSelectorLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Public_MetaData[];
#endif
		static void NewProp_Public_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Public;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryCuePriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CategoryCuePriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryCuePriorityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategoryCuePriorityType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryCuePriorityTypeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CategoryCuePriorityTypeIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CuePriorityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CuePriorityType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CuePriorityTypeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CuePriorityTypeIndex;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Probability_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Probability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Length;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Category_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Track_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Track;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BusSend_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BusSend_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BusSend;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Blocks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blocks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Blocks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachedSelector_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachedSelector_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttachedSelector;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachedAisacControl_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachedAisacControl_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttachedAisacControl;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomCueInfoDataTable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CueId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CueId = { "CueId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, CueId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CueId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CueTypeIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CueTypeIndex = { "CueTypeIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, CueTypeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CueTypeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CueTypeIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CueType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CueType = { "CueType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, CueType), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CueType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CueType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_DefaultSelectorLabel_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_DefaultSelectorLabel = { "DefaultSelectorLabel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, DefaultSelectorLabel), Z_Construct_UScriptStruct_FAtomCueInfoSelectorParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_DefaultSelectorLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_DefaultSelectorLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Volume_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, Volume), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Volume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Public_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Public_SetBit(void* Obj)
	{
		((FAtomCueInfoDataTable*)Obj)->Public = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Public = { "Public", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtomCueInfoDataTable), &Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Public_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Public_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Public_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CategoryCuePriority_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CategoryCuePriority = { "CategoryCuePriority", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, CategoryCuePriority), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CategoryCuePriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CategoryCuePriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CategoryCuePriorityType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CategoryCuePriorityType = { "CategoryCuePriorityType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, CategoryCuePriorityType), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CategoryCuePriorityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CategoryCuePriorityType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CategoryCuePriorityTypeIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CategoryCuePriorityTypeIndex = { "CategoryCuePriorityTypeIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, CategoryCuePriorityTypeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CategoryCuePriorityTypeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CategoryCuePriorityTypeIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CuePriorityType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CuePriorityType = { "CuePriorityType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, CuePriorityType), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CuePriorityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CuePriorityType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CuePriorityTypeIndex_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CuePriorityTypeIndex = { "CuePriorityTypeIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, CuePriorityTypeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CuePriorityTypeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CuePriorityTypeIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_EnableCueLimit_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_EnableCueLimit_SetBit(void* Obj)
	{
		((FAtomCueInfoDataTable*)Obj)->EnableCueLimit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_EnableCueLimit = { "EnableCueLimit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtomCueInfoDataTable), &Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_EnableCueLimit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_EnableCueLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_EnableCueLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_NumCueLimits_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_NumCueLimits = { "NumCueLimits", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, NumCueLimits), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_NumCueLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_NumCueLimits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Probability_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Probability = { "Probability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, Probability), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Probability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Probability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Length_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, Length), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Length_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Category_Inner = { "Category", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomCueInfoCategoryParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Category_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, Category), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Category_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Track_Inner = { "Track", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomCueInfoTrackParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Track_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, Track), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Track_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_BusSend_Inner = { "BusSend", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomCueInfoBusSendParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_BusSend_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_BusSend = { "BusSend", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, BusSend), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_BusSend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_BusSend_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Blocks_Inner = { "Blocks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomCueInfoBlocksParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Blocks_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Blocks = { "Blocks", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, Blocks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Blocks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Blocks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_AttachedSelector_Inner = { "AttachedSelector", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomCueInfoAttachedSelectorParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_AttachedSelector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_AttachedSelector = { "AttachedSelector", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, AttachedSelector), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_AttachedSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_AttachedSelector_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_AttachedAisacControl_Inner = { "AttachedAisacControl", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomCueInfoAttachedAisacControlParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_AttachedAisacControl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomCueInfoDataTable" },
		{ "ModuleRelativePath", "Public/AtomCueInfoDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_AttachedAisacControl = { "AttachedAisacControl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomCueInfoDataTable, AttachedAisacControl), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_AttachedAisacControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_AttachedAisacControl_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CueId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CueTypeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CueType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_DefaultSelectorLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Volume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Public,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CategoryCuePriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CategoryCuePriorityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CategoryCuePriorityTypeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CuePriorityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_CuePriorityTypeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_EnableCueLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_NumCueLimits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Probability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Category_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Track_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Track,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_BusSend_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_BusSend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Blocks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_Blocks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_AttachedSelector_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_AttachedSelector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_AttachedAisacControl_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::NewProp_AttachedAisacControl,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"AtomCueInfoDataTable",
		sizeof(FAtomCueInfoDataTable),
		alignof(FAtomCueInfoDataTable),
		Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomCueInfoDataTable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomCueInfoDataTable"), sizeof(FAtomCueInfoDataTable), Get_Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomCueInfoDataTable_Hash() { return 3961123715U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
