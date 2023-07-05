// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ChallengeWrestlerMatchRecord.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChallengeWrestlerMatchRecord() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeMatchRecord();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeCpuMatchDifficultyRecord();
// End Cross Module References
class UScriptStruct* FChallengeWrestlerMatchRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ChallengeWrestlerMatchRecord"), sizeof(FChallengeWrestlerMatchRecord), Get_Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FChallengeWrestlerMatchRecord>()
{
	return FChallengeWrestlerMatchRecord::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChallengeWrestlerMatchRecord(FChallengeWrestlerMatchRecord::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ChallengeWrestlerMatchRecord"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFChallengeWrestlerMatchRecord
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFChallengeWrestlerMatchRecord()
	{
		UScriptStruct::DeferCppStructOps<FChallengeWrestlerMatchRecord>(FName(TEXT("ChallengeWrestlerMatchRecord")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFChallengeWrestlerMatchRecord;
	struct Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchRecordList_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MatchRecordList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CpuMatchRecordList_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CpuMatchRecordList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AEW_WorldChampionCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AEW_WorldChampionCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TTN_WorldChampionCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TTN_WorldChampionCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Womens_Champion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Womens_Champion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChallengeWrestlerMatchRecord.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChallengeWrestlerMatchRecord>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Statics::NewProp_MatchRecordList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeWrestlerMatchRecord" },
		{ "ModuleRelativePath", "Public/ChallengeWrestlerMatchRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Statics::NewProp_MatchRecordList = { "MatchRecordList", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(MatchRecordList, FChallengeWrestlerMatchRecord), STRUCT_OFFSET(FChallengeWrestlerMatchRecord, MatchRecordList), Z_Construct_UScriptStruct_FChallengeMatchRecord, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Statics::NewProp_MatchRecordList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Statics::NewProp_MatchRecordList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Statics::NewProp_CpuMatchRecordList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeWrestlerMatchRecord" },
		{ "ModuleRelativePath", "Public/ChallengeWrestlerMatchRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Statics::NewProp_CpuMatchRecordList = { "CpuMatchRecordList", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(CpuMatchRecordList, FChallengeWrestlerMatchRecord), STRUCT_OFFSET(FChallengeWrestlerMatchRecord, CpuMatchRecordList), Z_Construct_UScriptStruct_FChallengeCpuMatchDifficultyRecord, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Statics::NewProp_CpuMatchRecordList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Statics::NewProp_CpuMatchRecordList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Statics::NewProp_AEW_WorldChampionCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeWrestlerMatchRecord" },
		{ "ModuleRelativePath", "Public/ChallengeWrestlerMatchRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Statics::NewProp_AEW_WorldChampionCount = { "AEW_WorldChampionCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeWrestlerMatchRecord, AEW_WorldChampionCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Statics::NewProp_AEW_WorldChampionCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Statics::NewProp_AEW_WorldChampionCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Statics::NewProp_TTN_WorldChampionCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeWrestlerMatchRecord" },
		{ "ModuleRelativePath", "Public/ChallengeWrestlerMatchRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Statics::NewProp_TTN_WorldChampionCount = { "TTN_WorldChampionCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeWrestlerMatchRecord, TTN_WorldChampionCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Statics::NewProp_TTN_WorldChampionCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Statics::NewProp_TTN_WorldChampionCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Statics::NewProp_Womens_Champion_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeWrestlerMatchRecord" },
		{ "ModuleRelativePath", "Public/ChallengeWrestlerMatchRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Statics::NewProp_Womens_Champion = { "Womens_Champion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeWrestlerMatchRecord, Womens_Champion), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Statics::NewProp_Womens_Champion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Statics::NewProp_Womens_Champion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Statics::NewProp_MatchRecordList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Statics::NewProp_CpuMatchRecordList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Statics::NewProp_AEW_WorldChampionCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Statics::NewProp_TTN_WorldChampionCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Statics::NewProp_Womens_Champion,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ChallengeWrestlerMatchRecord",
		sizeof(FChallengeWrestlerMatchRecord),
		alignof(FChallengeWrestlerMatchRecord),
		Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChallengeWrestlerMatchRecord"), sizeof(FChallengeWrestlerMatchRecord), Get_Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord_Hash() { return 3933272841U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
