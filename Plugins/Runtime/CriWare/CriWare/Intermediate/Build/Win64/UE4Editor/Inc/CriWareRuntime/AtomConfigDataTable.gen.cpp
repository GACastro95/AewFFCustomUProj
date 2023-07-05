// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AtomConfigDataTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtomConfigDataTable() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomConfigDataTable();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomSelectorSettingsParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomGameVariableParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomCategoryParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomDspBusSettingsParam();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomStringWithComment();
// End Cross Module References

static_assert(std::is_polymorphic<FAtomConfigDataTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FAtomConfigDataTable cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FAtomConfigDataTable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAtomConfigDataTable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtomConfigDataTable, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AtomConfigDataTable"), sizeof(FAtomConfigDataTable), Get_Z_Construct_UScriptStruct_FAtomConfigDataTable_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAtomConfigDataTable>()
{
	return FAtomConfigDataTable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtomConfigDataTable(FAtomConfigDataTable::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AtomConfigDataTable"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomConfigDataTable
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomConfigDataTable()
	{
		UScriptStruct::DeferCppStructOps<FAtomConfigDataTable>(FName(TEXT("AtomConfigDataTable")));
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAtomConfigDataTable;
	struct Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BuildDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumCategoriesPerPlayback_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumCategoriesPerPlayback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumCategories_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumCategories;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumAisacControls_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumAisacControls;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumGlobalAisacs_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumGlobalAisacs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumVoiceLimitGroups_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumVoiceLimitGroups;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumDspBusSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumDspBusSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumDspBusSettingSnapshots_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumDspBusSettingSnapshots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumDspBus_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumDspBus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumGameVariables_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumGameVariables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSelectors_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSelectors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumReacts_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumReacts;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Selector_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Selector_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Selector;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AisacControl_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AisacControl_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AisacControl;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameVariable_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameVariable_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameVariable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalAisac_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalAisac_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GlobalAisac;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Category_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DspBusSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DspBusSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DspBusSettings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_React_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_React_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_React;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtomConfigDataTable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_BuildDate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_BuildDate = { "BuildDate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, BuildDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_BuildDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_BuildDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumCategoriesPerPlayback_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumCategoriesPerPlayback = { "NumCategoriesPerPlayback", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, NumCategoriesPerPlayback), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumCategoriesPerPlayback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumCategoriesPerPlayback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumCategories_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumCategories = { "NumCategories", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, NumCategories), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumCategories_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumAisacControls_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumAisacControls = { "NumAisacControls", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, NumAisacControls), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumAisacControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumAisacControls_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumGlobalAisacs_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumGlobalAisacs = { "NumGlobalAisacs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, NumGlobalAisacs), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumGlobalAisacs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumGlobalAisacs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumVoiceLimitGroups_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumVoiceLimitGroups = { "NumVoiceLimitGroups", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, NumVoiceLimitGroups), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumVoiceLimitGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumVoiceLimitGroups_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBusSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBusSettings = { "NumDspBusSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, NumDspBusSettings), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBusSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBusSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBusSettingSnapshots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBusSettingSnapshots = { "NumDspBusSettingSnapshots", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, NumDspBusSettingSnapshots), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBusSettingSnapshots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBusSettingSnapshots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBus = { "NumDspBus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, NumDspBus), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumGameVariables_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumGameVariables = { "NumGameVariables", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, NumGameVariables), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumGameVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumGameVariables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumSelectors_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumSelectors = { "NumSelectors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, NumSelectors), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumSelectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumSelectors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumReacts_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumReacts = { "NumReacts", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, NumReacts), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumReacts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumReacts_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Selector_Inner = { "Selector", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomSelectorSettingsParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Selector_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Selector = { "Selector", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, Selector), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Selector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Selector_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_AisacControl_Inner = { "AisacControl", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomAisacControlSettingsParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_AisacControl_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_AisacControl = { "AisacControl", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, AisacControl), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_AisacControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_AisacControl_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GameVariable_Inner = { "GameVariable", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomGameVariableParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GameVariable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GameVariable = { "GameVariable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, GameVariable), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GameVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GameVariable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GlobalAisac_Inner = { "GlobalAisac", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomGlobalAisacSettingsParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GlobalAisac_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GlobalAisac = { "GlobalAisac", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, GlobalAisac), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GlobalAisac_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GlobalAisac_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Category_Inner = { "Category", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomCategoryParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Category_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, Category), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Category_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_DspBusSettings_Inner = { "DspBusSettings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomDspBusSettingsParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_DspBusSettings_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_DspBusSettings = { "DspBusSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, DspBusSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_DspBusSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_DspBusSettings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_React_Inner = { "React", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtomStringWithComment, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_React_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "AtomConfigDataTable" },
		{ "ModuleRelativePath", "Public/AtomConfigDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_React = { "React", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtomConfigDataTable, React), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_React_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_React_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_BuildDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumCategoriesPerPlayback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumCategories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumAisacControls,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumGlobalAisacs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumVoiceLimitGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBusSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBusSettingSnapshots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumDspBus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumGameVariables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumSelectors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_NumReacts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Selector_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Selector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_AisacControl_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_AisacControl,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GameVariable_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GameVariable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GlobalAisac_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_GlobalAisac,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Category_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_DspBusSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_DspBusSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_React_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::NewProp_React,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"AtomConfigDataTable",
		sizeof(FAtomConfigDataTable),
		alignof(FAtomConfigDataTable),
		Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtomConfigDataTable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtomConfigDataTable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtomConfigDataTable"), sizeof(FAtomConfigDataTable), Get_Z_Construct_UScriptStruct_FAtomConfigDataTable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtomConfigDataTable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtomConfigDataTable_Hash() { return 2089387107U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
