// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/ELCustomSearchEditPartsAttireData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCustomSearchEditPartsAttireData() {}
// Cross Module References
	ELITE_API UScriptStruct* Z_Construct_UScriptStruct_FELCustomSearchEditPartsAttireData();
	UPackage* Z_Construct_UPackage__Script_ELITE();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EEditPartsSlot();
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EEditTexTarget();
// End Cross Module References

static_assert(std::is_polymorphic<FELCustomSearchEditPartsAttireData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FELCustomSearchEditPartsAttireData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FELCustomSearchEditPartsAttireData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_API uint32 Get_Z_Construct_UScriptStruct_FELCustomSearchEditPartsAttireData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELCustomSearchEditPartsAttireData, Z_Construct_UPackage__Script_ELITE(), TEXT("ELCustomSearchEditPartsAttireData"), sizeof(FELCustomSearchEditPartsAttireData), Get_Z_Construct_UScriptStruct_FELCustomSearchEditPartsAttireData_Hash());
	}
	return Singleton;
}
template<> ELITE_API UScriptStruct* StaticStruct<FELCustomSearchEditPartsAttireData>()
{
	return FELCustomSearchEditPartsAttireData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELCustomSearchEditPartsAttireData(FELCustomSearchEditPartsAttireData::StaticStruct, TEXT("/Script/ELITE"), TEXT("ELCustomSearchEditPartsAttireData"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_StaticRegisterNativesFELCustomSearchEditPartsAttireData
{
	FScriptStruct_ELITE_StaticRegisterNativesFELCustomSearchEditPartsAttireData()
	{
		UScriptStruct::DeferCppStructOps<FELCustomSearchEditPartsAttireData>(FName(TEXT("ELCustomSearchEditPartsAttireData")));
	}
} ScriptStruct_ELITE_StaticRegisterNativesFELCustomSearchEditPartsAttireData;
	struct Z_Construct_UScriptStruct_FELCustomSearchEditPartsAttireData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_EditPartsSlot_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_EditPartsSlot_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_EditPartsSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_EditPartsSlot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_EditTexTarget_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_EditTexTarget_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_EditTexTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_EditTexTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELCustomSearchEditPartsAttireData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELCustomSearchEditPartsAttireData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELCustomSearchEditPartsAttireData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELCustomSearchEditPartsAttireData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELCustomSearchEditPartsAttireData_Statics::NewProp_m_EditPartsSlot_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELCustomSearchEditPartsAttireData_Statics::NewProp_m_EditPartsSlot_Inner = { "m_EditPartsSlot", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Creation_EEditPartsSlot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELCustomSearchEditPartsAttireData_Statics::NewProp_m_EditPartsSlot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCustomSearchEditPartsAttireData" },
		{ "ModuleRelativePath", "Public/ELCustomSearchEditPartsAttireData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELCustomSearchEditPartsAttireData_Statics::NewProp_m_EditPartsSlot = { "m_EditPartsSlot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELCustomSearchEditPartsAttireData, m_EditPartsSlot), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELCustomSearchEditPartsAttireData_Statics::NewProp_m_EditPartsSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELCustomSearchEditPartsAttireData_Statics::NewProp_m_EditPartsSlot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELCustomSearchEditPartsAttireData_Statics::NewProp_m_EditTexTarget_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELCustomSearchEditPartsAttireData_Statics::NewProp_m_EditTexTarget_Inner = { "m_EditTexTarget", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Creation_EEditTexTarget, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELCustomSearchEditPartsAttireData_Statics::NewProp_m_EditTexTarget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCustomSearchEditPartsAttireData" },
		{ "ModuleRelativePath", "Public/ELCustomSearchEditPartsAttireData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELCustomSearchEditPartsAttireData_Statics::NewProp_m_EditTexTarget = { "m_EditTexTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELCustomSearchEditPartsAttireData, m_EditTexTarget), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELCustomSearchEditPartsAttireData_Statics::NewProp_m_EditTexTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELCustomSearchEditPartsAttireData_Statics::NewProp_m_EditTexTarget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELCustomSearchEditPartsAttireData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELCustomSearchEditPartsAttireData_Statics::NewProp_m_EditPartsSlot_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELCustomSearchEditPartsAttireData_Statics::NewProp_m_EditPartsSlot_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELCustomSearchEditPartsAttireData_Statics::NewProp_m_EditPartsSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELCustomSearchEditPartsAttireData_Statics::NewProp_m_EditTexTarget_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELCustomSearchEditPartsAttireData_Statics::NewProp_m_EditTexTarget_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELCustomSearchEditPartsAttireData_Statics::NewProp_m_EditTexTarget,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELCustomSearchEditPartsAttireData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ELCustomSearchEditPartsAttireData",
		sizeof(FELCustomSearchEditPartsAttireData),
		alignof(FELCustomSearchEditPartsAttireData),
		Z_Construct_UScriptStruct_FELCustomSearchEditPartsAttireData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELCustomSearchEditPartsAttireData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELCustomSearchEditPartsAttireData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELCustomSearchEditPartsAttireData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELCustomSearchEditPartsAttireData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELCustomSearchEditPartsAttireData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELCustomSearchEditPartsAttireData"), sizeof(FELCustomSearchEditPartsAttireData), Get_Z_Construct_UScriptStruct_FELCustomSearchEditPartsAttireData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELCustomSearchEditPartsAttireData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELCustomSearchEditPartsAttireData_Hash() { return 2280289306U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
