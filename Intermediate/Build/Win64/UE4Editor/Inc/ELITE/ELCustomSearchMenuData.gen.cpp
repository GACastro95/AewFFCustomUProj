// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELCustomSearchMenuData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCustomSearchMenuData() {}
// Cross Module References
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FELCustomSearchMenuData();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ELITE_API UEnum* Z_Construct_UEnum_ELITE_EELCustomSearch();
// End Cross Module References

static_assert(std::is_polymorphic<FELCustomSearchMenuData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELCustomSearchMenuData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELCustomSearchMenuData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_API uint32 Get_Z_Construct_UScriptStruct_FELCustomSearchMenuData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELCustomSearchMenuData, Z_Construct_UPackage__Script_ELITE(), TEXT("ELCustomSearchMenuData"), sizeof(FELCustomSearchMenuData), Get_Z_Construct_UScriptStruct_FELCustomSearchMenuData_Hash());
	}
	return Singleton;
}
template<> ELITE_API UScriptStruct* StaticStruct<FELCustomSearchMenuData>()
{
	return FELCustomSearchMenuData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELCustomSearchMenuData(FELCustomSearchMenuData::StaticStruct, TEXT("/Script/ELITE"), TEXT("ELCustomSearchMenuData"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_StaticRegisterNativesFELCustomSearchMenuData
{
	FScriptStruct_ELITE_StaticRegisterNativesFELCustomSearchMenuData()
	{
		UScriptStruct::DeferCppStructOps<FELCustomSearchMenuData>(FName(TEXT("ELCustomSearchMenuData")));
	}
} ScriptStruct_ELITE_StaticRegisterNativesFELCustomSearchMenuData;
	struct Z_Construct_UScriptStruct_FELCustomSearchMenuData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SearchType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SearchType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TypeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TypeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultCheck_MetaData[];
#endif
		static void NewProp_DefaultCheck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DefaultCheck;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELCustomSearchMenuData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELCustomSearchMenuData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELCustomSearchMenuData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELCustomSearchMenuData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELCustomSearchMenuData_Statics::NewProp_SearchType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELCustomSearchMenuData_Statics::NewProp_SearchType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCustomSearchMenuData" },
		{ "ModuleRelativePath", "Public/ELCustomSearchMenuData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELCustomSearchMenuData_Statics::NewProp_SearchType = { "SearchType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELCustomSearchMenuData, SearchType), Z_Construct_UEnum_ELITE_EELCustomSearch, METADATA_PARAMS(Z_Construct_UScriptStruct_FELCustomSearchMenuData_Statics::NewProp_SearchType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELCustomSearchMenuData_Statics::NewProp_SearchType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELCustomSearchMenuData_Statics::NewProp_TypeName_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCustomSearchMenuData" },
		{ "ModuleRelativePath", "Public/ELCustomSearchMenuData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FELCustomSearchMenuData_Statics::NewProp_TypeName = { "TypeName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELCustomSearchMenuData, TypeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FELCustomSearchMenuData_Statics::NewProp_TypeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELCustomSearchMenuData_Statics::NewProp_TypeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELCustomSearchMenuData_Statics::NewProp_DefaultCheck_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCustomSearchMenuData" },
		{ "ModuleRelativePath", "Public/ELCustomSearchMenuData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FELCustomSearchMenuData_Statics::NewProp_DefaultCheck_SetBit(void* Obj)
	{
		((FELCustomSearchMenuData*)Obj)->DefaultCheck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FELCustomSearchMenuData_Statics::NewProp_DefaultCheck = { "DefaultCheck", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FELCustomSearchMenuData), &Z_Construct_UScriptStruct_FELCustomSearchMenuData_Statics::NewProp_DefaultCheck_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FELCustomSearchMenuData_Statics::NewProp_DefaultCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELCustomSearchMenuData_Statics::NewProp_DefaultCheck_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELCustomSearchMenuData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELCustomSearchMenuData_Statics::NewProp_SearchType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELCustomSearchMenuData_Statics::NewProp_SearchType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELCustomSearchMenuData_Statics::NewProp_TypeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELCustomSearchMenuData_Statics::NewProp_DefaultCheck,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELCustomSearchMenuData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELCustomSearchMenuData",
		sizeof(FELCustomSearchMenuData),
		alignof(FELCustomSearchMenuData),
		Z_Construct_UScriptStruct_FELCustomSearchMenuData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELCustomSearchMenuData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELCustomSearchMenuData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELCustomSearchMenuData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELCustomSearchMenuData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELCustomSearchMenuData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELCustomSearchMenuData"), sizeof(FELCustomSearchMenuData), Get_Z_Construct_UScriptStruct_FELCustomSearchMenuData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELCustomSearchMenuData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELCustomSearchMenuData_Hash() { return 3883745670U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
