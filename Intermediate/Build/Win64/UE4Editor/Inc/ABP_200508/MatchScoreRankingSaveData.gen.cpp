// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/MatchScoreRankingSaveData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchScoreRankingSaveData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMatchScoreRankingSaveData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMatchScoreRankingsType();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FMatchScoreRankingSaveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchScoreRankingSaveData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("MatchScoreRankingSaveData"), sizeof(FMatchScoreRankingSaveData), Get_Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FMatchScoreRankingSaveData>()
{
	return FMatchScoreRankingSaveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatchScoreRankingSaveData(FMatchScoreRankingSaveData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("MatchScoreRankingSaveData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFMatchScoreRankingSaveData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFMatchScoreRankingSaveData()
	{
		UScriptStruct::DeferCppStructOps<FMatchScoreRankingSaveData>(FName(TEXT("MatchScoreRankingSaveData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFMatchScoreRankingSaveData;
	struct Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Score;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RankingType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RankingType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RankingType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsedWrestlerList_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UsedWrestlerList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StarNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StarNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DateTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OptionValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MatchScoreRankingSaveData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchScoreRankingSaveData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::NewProp_Score_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchScoreRankingSaveData" },
		{ "ModuleRelativePath", "Public/MatchScoreRankingSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchScoreRankingSaveData, Score), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::NewProp_Score_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::NewProp_Score_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::NewProp_RankingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::NewProp_RankingType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchScoreRankingSaveData" },
		{ "ModuleRelativePath", "Public/MatchScoreRankingSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::NewProp_RankingType = { "RankingType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchScoreRankingSaveData, RankingType), Z_Construct_UEnum_ABP_200508_EMatchScoreRankingsType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::NewProp_RankingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::NewProp_RankingType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::NewProp_UsedWrestlerList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchScoreRankingSaveData" },
		{ "ModuleRelativePath", "Public/MatchScoreRankingSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::NewProp_UsedWrestlerList = { "UsedWrestlerList", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(UsedWrestlerList, FMatchScoreRankingSaveData), STRUCT_OFFSET(FMatchScoreRankingSaveData, UsedWrestlerList), Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::NewProp_UsedWrestlerList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::NewProp_UsedWrestlerList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::NewProp_StarNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchScoreRankingSaveData" },
		{ "ModuleRelativePath", "Public/MatchScoreRankingSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::NewProp_StarNum = { "StarNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchScoreRankingSaveData, StarNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::NewProp_StarNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::NewProp_StarNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::NewProp_DateTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchScoreRankingSaveData" },
		{ "ModuleRelativePath", "Public/MatchScoreRankingSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::NewProp_DateTime = { "DateTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchScoreRankingSaveData, DateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::NewProp_DateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::NewProp_DateTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::NewProp_OptionValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchScoreRankingSaveData" },
		{ "ModuleRelativePath", "Public/MatchScoreRankingSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::NewProp_OptionValue = { "OptionValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchScoreRankingSaveData, OptionValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::NewProp_OptionValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::NewProp_OptionValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::NewProp_Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::NewProp_RankingType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::NewProp_RankingType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::NewProp_UsedWrestlerList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::NewProp_StarNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::NewProp_DateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::NewProp_OptionValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"MatchScoreRankingSaveData",
		sizeof(FMatchScoreRankingSaveData),
		alignof(FMatchScoreRankingSaveData),
		Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchScoreRankingSaveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatchScoreRankingSaveData"), sizeof(FMatchScoreRankingSaveData), Get_Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatchScoreRankingSaveData_Hash() { return 1527963177U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
