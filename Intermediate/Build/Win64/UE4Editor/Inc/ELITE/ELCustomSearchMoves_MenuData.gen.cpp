// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELCustomSearchMoves_MenuData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCustomSearchMoves_MenuData() {}
// Cross Module References
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FELCustomSearchMoves_MenuData();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ELITE_API UEnum* Z_Construct_UEnum_ELITE_EELCustomSearch();
// End Cross Module References

static_assert(std::is_polymorphic<FELCustomSearchMoves_MenuData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELCustomSearchMoves_MenuData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELCustomSearchMoves_MenuData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_API uint32 Get_Z_Construct_UScriptStruct_FELCustomSearchMoves_MenuData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELCustomSearchMoves_MenuData, Z_Construct_UPackage__Script_ELITE(), TEXT("ELCustomSearchMoves_MenuData"), sizeof(FELCustomSearchMoves_MenuData), Get_Z_Construct_UScriptStruct_FELCustomSearchMoves_MenuData_Hash());
	}
	return Singleton;
}
template<> ELITE_API UScriptStruct* StaticStruct<FELCustomSearchMoves_MenuData>()
{
	return FELCustomSearchMoves_MenuData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELCustomSearchMoves_MenuData(FELCustomSearchMoves_MenuData::StaticStruct, TEXT("/Script/ELITE"), TEXT("ELCustomSearchMoves_MenuData"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_StaticRegisterNativesFELCustomSearchMoves_MenuData
{
	FScriptStruct_ELITE_StaticRegisterNativesFELCustomSearchMoves_MenuData()
	{
		UScriptStruct::DeferCppStructOps<FELCustomSearchMoves_MenuData>(FName(TEXT("ELCustomSearchMoves_MenuData")));
	}
} ScriptStruct_ELITE_StaticRegisterNativesFELCustomSearchMoves_MenuData;
	struct Z_Construct_UScriptStruct_FELCustomSearchMoves_MenuData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SearchCategory_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SearchCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingMenuID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SettingMenuID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELCustomSearchMoves_MenuData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELCustomSearchMoves_MenuData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELCustomSearchMoves_MenuData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELCustomSearchMoves_MenuData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELCustomSearchMoves_MenuData_Statics::NewProp_SearchCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELCustomSearchMoves_MenuData_Statics::NewProp_SearchCategory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCustomSearchMoves_MenuData" },
		{ "ModuleRelativePath", "Public/ELCustomSearchMoves_MenuData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELCustomSearchMoves_MenuData_Statics::NewProp_SearchCategory = { "SearchCategory", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELCustomSearchMoves_MenuData, SearchCategory), Z_Construct_UEnum_ELITE_EELCustomSearch, METADATA_PARAMS(Z_Construct_UScriptStruct_FELCustomSearchMoves_MenuData_Statics::NewProp_SearchCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELCustomSearchMoves_MenuData_Statics::NewProp_SearchCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELCustomSearchMoves_MenuData_Statics::NewProp_SettingMenuID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCustomSearchMoves_MenuData" },
		{ "ModuleRelativePath", "Public/ELCustomSearchMoves_MenuData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELCustomSearchMoves_MenuData_Statics::NewProp_SettingMenuID = { "SettingMenuID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELCustomSearchMoves_MenuData, SettingMenuID), METADATA_PARAMS(Z_Construct_UScriptStruct_FELCustomSearchMoves_MenuData_Statics::NewProp_SettingMenuID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELCustomSearchMoves_MenuData_Statics::NewProp_SettingMenuID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELCustomSearchMoves_MenuData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELCustomSearchMoves_MenuData_Statics::NewProp_SearchCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELCustomSearchMoves_MenuData_Statics::NewProp_SearchCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELCustomSearchMoves_MenuData_Statics::NewProp_SettingMenuID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELCustomSearchMoves_MenuData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELCustomSearchMoves_MenuData",
		sizeof(FELCustomSearchMoves_MenuData),
		alignof(FELCustomSearchMoves_MenuData),
		Z_Construct_UScriptStruct_FELCustomSearchMoves_MenuData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELCustomSearchMoves_MenuData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELCustomSearchMoves_MenuData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELCustomSearchMoves_MenuData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELCustomSearchMoves_MenuData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELCustomSearchMoves_MenuData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELCustomSearchMoves_MenuData"), sizeof(FELCustomSearchMoves_MenuData), Get_Z_Construct_UScriptStruct_FELCustomSearchMoves_MenuData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELCustomSearchMoves_MenuData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELCustomSearchMoves_MenuData_Hash() { return 1456793851U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
