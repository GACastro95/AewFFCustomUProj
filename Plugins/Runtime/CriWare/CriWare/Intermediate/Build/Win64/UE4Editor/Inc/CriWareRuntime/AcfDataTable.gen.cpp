// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/AcfDataTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAcfDataTable() {}
// Cross Module References
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAcfDataTable();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
	CRIWARERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAtomConfigDataTable();
// End Cross Module References

static_assert(std::is_polymorphic<FAcfDataTable>() == std::is_polymorphic<FAtomConfigDataTable>(), "USTRUCT FAcfDataTable cannot be polymorphic unless super FAtomConfigDataTable is polymorphic");

class UScriptStruct* FAcfDataTable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRIWARERUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAcfDataTable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAcfDataTable, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("AcfDataTable"), sizeof(FAcfDataTable), Get_Z_Construct_UScriptStruct_FAcfDataTable_Hash());
	}
	return Singleton;
}
template<> CRIWARERUNTIME_API UScriptStruct* StaticStruct<FAcfDataTable>()
{
	return FAcfDataTable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAcfDataTable(FAcfDataTable::StaticStruct, TEXT("/Script/CriWareRuntime"), TEXT("AcfDataTable"), false, nullptr, nullptr);
static struct FScriptStruct_CriWareRuntime_StaticRegisterNativesFAcfDataTable
{
	FScriptStruct_CriWareRuntime_StaticRegisterNativesFAcfDataTable()
	{
		UScriptStruct::DeferCppStructOps<FAcfDataTable>(FName(TEXT("AcfDataTable")));
	}
} ScriptStruct_CriWareRuntime_StaticRegisterNativesFAcfDataTable;
	struct Z_Construct_UScriptStruct_FAcfDataTable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAcfDataTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AcfDataTable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAcfDataTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAcfDataTable>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAcfDataTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CriWareRuntime,
		Z_Construct_UScriptStruct_FAtomConfigDataTable,
		&NewStructOps,
		"AcfDataTable",
		sizeof(FAcfDataTable),
		alignof(FAcfDataTable),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAcfDataTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAcfDataTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAcfDataTable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAcfDataTable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AcfDataTable"), sizeof(FAcfDataTable), Get_Z_Construct_UScriptStruct_FAcfDataTable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAcfDataTable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAcfDataTable_Hash() { return 87018377U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
