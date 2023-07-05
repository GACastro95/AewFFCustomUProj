// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/MatchScoreRankingItemInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchScoreRankingItemInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMatchScoreRankingsType();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FMatchScoreRankingItemInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("MatchScoreRankingItemInfo"), sizeof(FMatchScoreRankingItemInfo), Get_Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FMatchScoreRankingItemInfo>()
{
	return FMatchScoreRankingItemInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatchScoreRankingItemInfo(FMatchScoreRankingItemInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("MatchScoreRankingItemInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFMatchScoreRankingItemInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFMatchScoreRankingItemInfo()
	{
		UScriptStruct::DeferCppStructOps<FMatchScoreRankingItemInfo>(FName(TEXT("MatchScoreRankingItemInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFMatchScoreRankingItemInfo;
	struct Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics
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
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UsedWrestlerList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsedWrestlerList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UsedWrestlerList;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MatchScoreRankingItemInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchScoreRankingItemInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::NewProp_Score_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchScoreRankingItemInfo" },
		{ "ModuleRelativePath", "Public/MatchScoreRankingItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchScoreRankingItemInfo, Score), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::NewProp_Score_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::NewProp_Score_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::NewProp_RankingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::NewProp_RankingType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchScoreRankingItemInfo" },
		{ "ModuleRelativePath", "Public/MatchScoreRankingItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::NewProp_RankingType = { "RankingType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchScoreRankingItemInfo, RankingType), Z_Construct_UEnum_ABP_200508_EMatchScoreRankingsType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::NewProp_RankingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::NewProp_RankingType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::NewProp_UsedWrestlerList_Inner = { "UsedWrestlerList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::NewProp_UsedWrestlerList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchScoreRankingItemInfo" },
		{ "ModuleRelativePath", "Public/MatchScoreRankingItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::NewProp_UsedWrestlerList = { "UsedWrestlerList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchScoreRankingItemInfo, UsedWrestlerList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::NewProp_UsedWrestlerList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::NewProp_UsedWrestlerList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::NewProp_StarNum_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchScoreRankingItemInfo" },
		{ "ModuleRelativePath", "Public/MatchScoreRankingItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::NewProp_StarNum = { "StarNum", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchScoreRankingItemInfo, StarNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::NewProp_StarNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::NewProp_StarNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::NewProp_DateTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchScoreRankingItemInfo" },
		{ "ModuleRelativePath", "Public/MatchScoreRankingItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::NewProp_DateTime = { "DateTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchScoreRankingItemInfo, DateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::NewProp_DateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::NewProp_DateTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::NewProp_OptionValue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchScoreRankingItemInfo" },
		{ "ModuleRelativePath", "Public/MatchScoreRankingItemInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::NewProp_OptionValue = { "OptionValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchScoreRankingItemInfo, OptionValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::NewProp_OptionValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::NewProp_OptionValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::NewProp_Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::NewProp_RankingType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::NewProp_RankingType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::NewProp_UsedWrestlerList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::NewProp_UsedWrestlerList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::NewProp_StarNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::NewProp_DateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::NewProp_OptionValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"MatchScoreRankingItemInfo",
		sizeof(FMatchScoreRankingItemInfo),
		alignof(FMatchScoreRankingItemInfo),
		Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatchScoreRankingItemInfo"), sizeof(FMatchScoreRankingItemInfo), Get_Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatchScoreRankingItemInfo_Hash() { return 1801852344U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
