// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ChallengeRankMatchWinRecord.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChallengeRankMatchWinRecord() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FChallengeRankMatchWinRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ChallengeRankMatchWinRecord"), sizeof(FChallengeRankMatchWinRecord), Get_Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FChallengeRankMatchWinRecord>()
{
	return FChallengeRankMatchWinRecord::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChallengeRankMatchWinRecord(FChallengeRankMatchWinRecord::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ChallengeRankMatchWinRecord"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFChallengeRankMatchWinRecord
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFChallengeRankMatchWinRecord()
	{
		UScriptStruct::DeferCppStructOps<FChallengeRankMatchWinRecord>(FName(TEXT("ChallengeRankMatchWinRecord")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFChallengeRankMatchWinRecord;
	struct Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeasonNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SeasonNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OneOnOne_Win_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OneOnOne_Win;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TwoOnTwo_Win_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TwoOnTwo_Win;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThreeWay_Win_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ThreeWay_Win;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FourWay_Win_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FourWay_Win;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CasinoBR_Win_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CasinoBR_Win;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChallengeRankMatchWinRecord.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChallengeRankMatchWinRecord>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::NewProp_SeasonNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRankMatchWinRecord" },
		{ "ModuleRelativePath", "Public/ChallengeRankMatchWinRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::NewProp_SeasonNo = { "SeasonNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRankMatchWinRecord, SeasonNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::NewProp_SeasonNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::NewProp_SeasonNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::NewProp_OneOnOne_Win_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRankMatchWinRecord" },
		{ "ModuleRelativePath", "Public/ChallengeRankMatchWinRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::NewProp_OneOnOne_Win = { "OneOnOne_Win", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRankMatchWinRecord, OneOnOne_Win), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::NewProp_OneOnOne_Win_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::NewProp_OneOnOne_Win_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::NewProp_TwoOnTwo_Win_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRankMatchWinRecord" },
		{ "ModuleRelativePath", "Public/ChallengeRankMatchWinRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::NewProp_TwoOnTwo_Win = { "TwoOnTwo_Win", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRankMatchWinRecord, TwoOnTwo_Win), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::NewProp_TwoOnTwo_Win_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::NewProp_TwoOnTwo_Win_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::NewProp_ThreeWay_Win_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRankMatchWinRecord" },
		{ "ModuleRelativePath", "Public/ChallengeRankMatchWinRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::NewProp_ThreeWay_Win = { "ThreeWay_Win", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRankMatchWinRecord, ThreeWay_Win), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::NewProp_ThreeWay_Win_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::NewProp_ThreeWay_Win_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::NewProp_FourWay_Win_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRankMatchWinRecord" },
		{ "ModuleRelativePath", "Public/ChallengeRankMatchWinRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::NewProp_FourWay_Win = { "FourWay_Win", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRankMatchWinRecord, FourWay_Win), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::NewProp_FourWay_Win_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::NewProp_FourWay_Win_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::NewProp_CasinoBR_Win_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRankMatchWinRecord" },
		{ "ModuleRelativePath", "Public/ChallengeRankMatchWinRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::NewProp_CasinoBR_Win = { "CasinoBR_Win", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRankMatchWinRecord, CasinoBR_Win), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::NewProp_CasinoBR_Win_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::NewProp_CasinoBR_Win_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::NewProp_SeasonNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::NewProp_OneOnOne_Win,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::NewProp_TwoOnTwo_Win,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::NewProp_ThreeWay_Win,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::NewProp_FourWay_Win,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::NewProp_CasinoBR_Win,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ChallengeRankMatchWinRecord",
		sizeof(FChallengeRankMatchWinRecord),
		alignof(FChallengeRankMatchWinRecord),
		Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChallengeRankMatchWinRecord"), sizeof(FChallengeRankMatchWinRecord), Get_Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChallengeRankMatchWinRecord_Hash() { return 992885984U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
