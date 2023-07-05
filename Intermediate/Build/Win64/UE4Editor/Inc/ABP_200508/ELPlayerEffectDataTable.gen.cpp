// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELPlayerEffectDataTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELPlayerEffectDataTable() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELPlayerEffectDataTable();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FELPlayerEffectDataTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELPlayerEffectDataTable cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELPlayerEffectDataTable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELPlayerEffectDataTable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELPlayerEffectDataTable, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELPlayerEffectDataTable"), sizeof(FELPlayerEffectDataTable), Get_Z_Construct_UScriptStruct_FELPlayerEffectDataTable_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELPlayerEffectDataTable>()
{
	return FELPlayerEffectDataTable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELPlayerEffectDataTable(FELPlayerEffectDataTable::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELPlayerEffectDataTable"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELPlayerEffectDataTable
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELPlayerEffectDataTable()
	{
		UScriptStruct::DeferCppStructOps<FELPlayerEffectDataTable>(FName(TEXT("ELPlayerEffectDataTable")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELPlayerEffectDataTable;
	struct Z_Construct_UScriptStruct_FELPlayerEffectDataTable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reversal_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Reversal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_NoDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GuardBreak_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_GuardBreak;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PassiveSkill_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PassiveSkill;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELPlayerEffectDataTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELPlayerEffectDataTable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELPlayerEffectDataTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELPlayerEffectDataTable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELPlayerEffectDataTable_Statics::NewProp_Reversal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPlayerEffectDataTable" },
		{ "ModuleRelativePath", "Public/ELPlayerEffectDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FELPlayerEffectDataTable_Statics::NewProp_Reversal = { "Reversal", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELPlayerEffectDataTable, Reversal), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FELPlayerEffectDataTable_Statics::NewProp_Reversal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELPlayerEffectDataTable_Statics::NewProp_Reversal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELPlayerEffectDataTable_Statics::NewProp_NoDown_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPlayerEffectDataTable" },
		{ "ModuleRelativePath", "Public/ELPlayerEffectDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FELPlayerEffectDataTable_Statics::NewProp_NoDown = { "NoDown", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELPlayerEffectDataTable, NoDown), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FELPlayerEffectDataTable_Statics::NewProp_NoDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELPlayerEffectDataTable_Statics::NewProp_NoDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELPlayerEffectDataTable_Statics::NewProp_GuardBreak_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPlayerEffectDataTable" },
		{ "ModuleRelativePath", "Public/ELPlayerEffectDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FELPlayerEffectDataTable_Statics::NewProp_GuardBreak = { "GuardBreak", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELPlayerEffectDataTable, GuardBreak), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FELPlayerEffectDataTable_Statics::NewProp_GuardBreak_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELPlayerEffectDataTable_Statics::NewProp_GuardBreak_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELPlayerEffectDataTable_Statics::NewProp_PassiveSkill_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELPlayerEffectDataTable" },
		{ "ModuleRelativePath", "Public/ELPlayerEffectDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FELPlayerEffectDataTable_Statics::NewProp_PassiveSkill = { "PassiveSkill", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELPlayerEffectDataTable, PassiveSkill), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FELPlayerEffectDataTable_Statics::NewProp_PassiveSkill_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELPlayerEffectDataTable_Statics::NewProp_PassiveSkill_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELPlayerEffectDataTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELPlayerEffectDataTable_Statics::NewProp_Reversal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELPlayerEffectDataTable_Statics::NewProp_NoDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELPlayerEffectDataTable_Statics::NewProp_GuardBreak,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELPlayerEffectDataTable_Statics::NewProp_PassiveSkill,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELPlayerEffectDataTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELPlayerEffectDataTable",
		sizeof(FELPlayerEffectDataTable),
		alignof(FELPlayerEffectDataTable),
		Z_Construct_UScriptStruct_FELPlayerEffectDataTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELPlayerEffectDataTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELPlayerEffectDataTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELPlayerEffectDataTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELPlayerEffectDataTable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELPlayerEffectDataTable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELPlayerEffectDataTable"), sizeof(FELPlayerEffectDataTable), Get_Z_Construct_UScriptStruct_FELPlayerEffectDataTable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELPlayerEffectDataTable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELPlayerEffectDataTable_Hash() { return 496532549U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
