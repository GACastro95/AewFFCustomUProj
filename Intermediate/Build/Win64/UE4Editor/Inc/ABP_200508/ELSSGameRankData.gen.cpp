// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSGameRankData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSGameRankData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FELSSGameRankData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FELSSGameRankData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FELSSGameRankData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELSSGameRankData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ELSSGameRankData"), sizeof(FELSSGameRankData), Get_Z_Construct_UScriptStruct_FELSSGameRankData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FELSSGameRankData>()
{
	return FELSSGameRankData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELSSGameRankData(FELSSGameRankData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ELSSGameRankData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFELSSGameRankData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFELSSGameRankData()
	{
		UScriptStruct::DeferCppStructOps<FELSSGameRankData>(FName(TEXT("ELSSGameRankData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFELSSGameRankData;
	struct Z_Construct_UScriptStruct_FELSSGameRankData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ssPlayerRank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ssPlayerRank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ssPlayerRankRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ssPlayerRankRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ssPlayerRankNextExp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ssPlayerRankNextExp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ssStampedeRank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ssStampedeRank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ssStampedeRankNextExp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ssStampedeRankNextExp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ssPlayerRankExpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ssPlayerRankExpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ssStampedeRankExpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ssStampedeRankExpRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSGameRankData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELSSGameRankData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELSSGameRankData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELSSGameRankData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSGameRankData_Statics::NewProp_ssPlayerRank_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameRankData" },
		{ "ModuleRelativePath", "Public/ELSSGameRankData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSGameRankData_Statics::NewProp_ssPlayerRank = { "ssPlayerRank", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSGameRankData, ssPlayerRank), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSGameRankData_Statics::NewProp_ssPlayerRank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSGameRankData_Statics::NewProp_ssPlayerRank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSGameRankData_Statics::NewProp_ssPlayerRankRange_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameRankData" },
		{ "ModuleRelativePath", "Public/ELSSGameRankData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSGameRankData_Statics::NewProp_ssPlayerRankRange = { "ssPlayerRankRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSGameRankData, ssPlayerRankRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSGameRankData_Statics::NewProp_ssPlayerRankRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSGameRankData_Statics::NewProp_ssPlayerRankRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSGameRankData_Statics::NewProp_ssPlayerRankNextExp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameRankData" },
		{ "ModuleRelativePath", "Public/ELSSGameRankData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSGameRankData_Statics::NewProp_ssPlayerRankNextExp = { "ssPlayerRankNextExp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSGameRankData, ssPlayerRankNextExp), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSGameRankData_Statics::NewProp_ssPlayerRankNextExp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSGameRankData_Statics::NewProp_ssPlayerRankNextExp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSGameRankData_Statics::NewProp_ssStampedeRank_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameRankData" },
		{ "ModuleRelativePath", "Public/ELSSGameRankData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSGameRankData_Statics::NewProp_ssStampedeRank = { "ssStampedeRank", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSGameRankData, ssStampedeRank), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSGameRankData_Statics::NewProp_ssStampedeRank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSGameRankData_Statics::NewProp_ssStampedeRank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSGameRankData_Statics::NewProp_ssStampedeRankNextExp_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameRankData" },
		{ "ModuleRelativePath", "Public/ELSSGameRankData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELSSGameRankData_Statics::NewProp_ssStampedeRankNextExp = { "ssStampedeRankNextExp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSGameRankData, ssStampedeRankNextExp), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSGameRankData_Statics::NewProp_ssStampedeRankNextExp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSGameRankData_Statics::NewProp_ssStampedeRankNextExp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSGameRankData_Statics::NewProp_ssPlayerRankExpRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameRankData" },
		{ "ModuleRelativePath", "Public/ELSSGameRankData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELSSGameRankData_Statics::NewProp_ssPlayerRankExpRate = { "ssPlayerRankExpRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSGameRankData, ssPlayerRankExpRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSGameRankData_Statics::NewProp_ssPlayerRankExpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSGameRankData_Statics::NewProp_ssPlayerRankExpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELSSGameRankData_Statics::NewProp_ssStampedeRankExpRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSGameRankData" },
		{ "ModuleRelativePath", "Public/ELSSGameRankData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELSSGameRankData_Statics::NewProp_ssStampedeRankExpRate = { "ssStampedeRankExpRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELSSGameRankData, ssStampedeRankExpRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSGameRankData_Statics::NewProp_ssStampedeRankExpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSGameRankData_Statics::NewProp_ssStampedeRankExpRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELSSGameRankData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSGameRankData_Statics::NewProp_ssPlayerRank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSGameRankData_Statics::NewProp_ssPlayerRankRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSGameRankData_Statics::NewProp_ssPlayerRankNextExp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSGameRankData_Statics::NewProp_ssStampedeRank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSGameRankData_Statics::NewProp_ssStampedeRankNextExp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSGameRankData_Statics::NewProp_ssPlayerRankExpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELSSGameRankData_Statics::NewProp_ssStampedeRankExpRate,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELSSGameRankData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ELSSGameRankData",
		sizeof(FELSSGameRankData),
		alignof(FELSSGameRankData),
		Z_Construct_UScriptStruct_FELSSGameRankData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSGameRankData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELSSGameRankData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELSSGameRankData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELSSGameRankData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELSSGameRankData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELSSGameRankData"), sizeof(FELSSGameRankData), Get_Z_Construct_UScriptStruct_FELSSGameRankData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELSSGameRankData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELSSGameRankData_Hash() { return 1106766800U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
