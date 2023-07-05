// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELCustomSearchEditPartsData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCustomSearchEditPartsData() {}
// Cross Module References
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FELCustomSearchEditPartsData();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FUnlockableItemParam();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELUnlockItemSaveData();
	CREATION_API UScriptStruct* Z_Construct_UScriptStruct_FEditColorParam();
// End Cross Module References
class UScriptStruct* FELCustomSearchEditPartsData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_API uint32 Get_Z_Construct_UScriptStruct_FELCustomSearchEditPartsData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELCustomSearchEditPartsData, Z_Construct_UPackage__Script_ELITE(), TEXT("ELCustomSearchEditPartsData"), sizeof(FELCustomSearchEditPartsData), Get_Z_Construct_UScriptStruct_FELCustomSearchEditPartsData_Hash());
	}
	return Singleton;
}
template<> ELITE_API UScriptStruct* StaticStruct<FELCustomSearchEditPartsData>()
{
	return FELCustomSearchEditPartsData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELCustomSearchEditPartsData(FELCustomSearchEditPartsData::StaticStruct, TEXT("/Script/ELITE"), TEXT("ELCustomSearchEditPartsData"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_StaticRegisterNativesFELCustomSearchEditPartsData
{
	FScriptStruct_ELITE_StaticRegisterNativesFELCustomSearchEditPartsData()
	{
		UScriptStruct::DeferCppStructOps<FELCustomSearchEditPartsData>(FName(TEXT("ELCustomSearchEditPartsData")));
	}
} ScriptStruct_ELITE_StaticRegisterNativesFELCustomSearchEditPartsData;
	struct Z_Construct_UScriptStruct_FELCustomSearchEditPartsData_Statics
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
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PartsColor_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartsColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PartsColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELCustomSearchEditPartsData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELCustomSearchEditPartsData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELCustomSearchEditPartsData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELCustomSearchEditPartsData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELCustomSearchEditPartsData_Statics::NewProp_UnlockableItem_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCustomSearchEditPartsData" },
		{ "ModuleRelativePath", "Public/ELCustomSearchEditPartsData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELCustomSearchEditPartsData_Statics::NewProp_UnlockableItem = { "UnlockableItem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELCustomSearchEditPartsData, UnlockableItem), Z_Construct_UScriptStruct_FUnlockableItemParam, METADATA_PARAMS(Z_Construct_UScriptStruct_FELCustomSearchEditPartsData_Statics::NewProp_UnlockableItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELCustomSearchEditPartsData_Statics::NewProp_UnlockableItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELCustomSearchEditPartsData_Statics::NewProp_UnlockItemSave_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCustomSearchEditPartsData" },
		{ "ModuleRelativePath", "Public/ELCustomSearchEditPartsData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELCustomSearchEditPartsData_Statics::NewProp_UnlockItemSave = { "UnlockItemSave", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELCustomSearchEditPartsData, UnlockItemSave), Z_Construct_UScriptStruct_FELUnlockItemSaveData, METADATA_PARAMS(Z_Construct_UScriptStruct_FELCustomSearchEditPartsData_Statics::NewProp_UnlockItemSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELCustomSearchEditPartsData_Statics::NewProp_UnlockItemSave_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELCustomSearchEditPartsData_Statics::NewProp_PartsColor_Inner = { "PartsColor", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEditColorParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELCustomSearchEditPartsData_Statics::NewProp_PartsColor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCustomSearchEditPartsData" },
		{ "ModuleRelativePath", "Public/ELCustomSearchEditPartsData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELCustomSearchEditPartsData_Statics::NewProp_PartsColor = { "PartsColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELCustomSearchEditPartsData, PartsColor), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELCustomSearchEditPartsData_Statics::NewProp_PartsColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELCustomSearchEditPartsData_Statics::NewProp_PartsColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELCustomSearchEditPartsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELCustomSearchEditPartsData_Statics::NewProp_UnlockableItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELCustomSearchEditPartsData_Statics::NewProp_UnlockItemSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELCustomSearchEditPartsData_Statics::NewProp_PartsColor_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELCustomSearchEditPartsData_Statics::NewProp_PartsColor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELCustomSearchEditPartsData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
		nullptr,
		&NewStructOps,
		"ELCustomSearchEditPartsData",
		sizeof(FELCustomSearchEditPartsData),
		alignof(FELCustomSearchEditPartsData),
		Z_Construct_UScriptStruct_FELCustomSearchEditPartsData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELCustomSearchEditPartsData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELCustomSearchEditPartsData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELCustomSearchEditPartsData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELCustomSearchEditPartsData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELCustomSearchEditPartsData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELCustomSearchEditPartsData"), sizeof(FELCustomSearchEditPartsData), Get_Z_Construct_UScriptStruct_FELCustomSearchEditPartsData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELCustomSearchEditPartsData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELCustomSearchEditPartsData_Hash() { return 2248508482U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
