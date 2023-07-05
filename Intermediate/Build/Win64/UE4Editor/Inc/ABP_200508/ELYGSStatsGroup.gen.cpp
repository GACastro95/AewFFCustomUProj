// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELYGSStatsGroup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELYGSStatsGroup() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELYGSStatsGroup();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELStatsDataType();
// End Cross Module References
class UScriptStruct* FELYGSStatsGroup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELYGSStatsGroup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELYGSStatsGroup, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELYGSStatsGroup"), sizeof(FELYGSStatsGroup), Get_Z_Construct_UScriptStruct_FELYGSStatsGroup_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELYGSStatsGroup>()
{
	return FELYGSStatsGroup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELYGSStatsGroup(FELYGSStatsGroup::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELYGSStatsGroup"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELYGSStatsGroup
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELYGSStatsGroup()
	{
		UScriptStruct::DeferCppStructOps<FELYGSStatsGroup>(FName(TEXT("ELYGSStatsGroup")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELYGSStatsGroup;
	struct Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DataType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DataType;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StatNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RecordNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecordNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RecordNames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELYGSStatsGroup.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELYGSStatsGroup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELYGSStatsGroup" },
		{ "ModuleRelativePath", "Public/ELYGSStatsGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELYGSStatsGroup, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELYGSStatsGroup" },
		{ "ModuleRelativePath", "Public/ELYGSStatsGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELYGSStatsGroup, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::NewProp_DataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::NewProp_DataType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELYGSStatsGroup" },
		{ "ModuleRelativePath", "Public/ELYGSStatsGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELYGSStatsGroup, DataType), Z_Construct_UEnum_ABP_200508_EELStatsDataType, METADATA_PARAMS(Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::NewProp_DataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::NewProp_DataType_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::NewProp_StatNames_Inner = { "StatNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::NewProp_StatNames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELYGSStatsGroup" },
		{ "ModuleRelativePath", "Public/ELYGSStatsGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::NewProp_StatNames = { "StatNames", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELYGSStatsGroup, StatNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::NewProp_StatNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::NewProp_StatNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::NewProp_RecordNames_Inner = { "RecordNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::NewProp_RecordNames_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELYGSStatsGroup" },
		{ "ModuleRelativePath", "Public/ELYGSStatsGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::NewProp_RecordNames = { "RecordNames", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELYGSStatsGroup, RecordNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::NewProp_RecordNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::NewProp_RecordNames_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::NewProp_DataType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::NewProp_DataType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::NewProp_StatNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::NewProp_StatNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::NewProp_RecordNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::NewProp_RecordNames,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELYGSStatsGroup",
		sizeof(FELYGSStatsGroup),
		alignof(FELYGSStatsGroup),
		Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELYGSStatsGroup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELYGSStatsGroup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELYGSStatsGroup"), sizeof(FELYGSStatsGroup), Get_Z_Construct_UScriptStruct_FELYGSStatsGroup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELYGSStatsGroup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELYGSStatsGroup_Hash() { return 1816178443U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
