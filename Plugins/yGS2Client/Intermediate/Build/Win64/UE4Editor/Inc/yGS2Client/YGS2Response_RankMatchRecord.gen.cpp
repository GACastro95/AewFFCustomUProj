// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/YGS2Response_RankMatchRecord.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYGS2Response_RankMatchRecord() {}
// Cross Module References
	YGS2CLIENT_API UScriptStruct* Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
// End Cross Module References
class UScriptStruct* FYGS2Response_RankMatchRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern YGS2CLIENT_API uint32 Get_Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord, Z_Construct_UPackage__Script_yGS2Client(), TEXT("YGS2Response_RankMatchRecord"), sizeof(FYGS2Response_RankMatchRecord), Get_Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Hash());
	}
	return Singleton;
}
template<> YGS2CLIENT_API UScriptStruct* StaticStruct<FYGS2Response_RankMatchRecord>()
{
	return FYGS2Response_RankMatchRecord::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FYGS2Response_RankMatchRecord(FYGS2Response_RankMatchRecord::StaticStruct, TEXT("/Script/yGS2Client"), TEXT("YGS2Response_RankMatchRecord"), false, nullptr, nullptr);
static struct FScriptStruct_yGS2Client_StaticRegisterNativesFYGS2Response_RankMatchRecord
{
	FScriptStruct_yGS2Client_StaticRegisterNativesFYGS2Response_RankMatchRecord()
	{
		UScriptStruct::DeferCppStructOps<FYGS2Response_RankMatchRecord>(FName(TEXT("YGS2Response_RankMatchRecord")));
	}
} ScriptStruct_yGS2Client_StaticRegisterNativesFYGS2Response_RankMatchRecord;
	struct Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YGS2Response_RankMatchRecord.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYGS2Response_RankMatchRecord>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::NewProp_SeasonNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Response_RankMatchRecord" },
		{ "ModuleRelativePath", "Public/YGS2Response_RankMatchRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::NewProp_SeasonNo = { "SeasonNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Response_RankMatchRecord, SeasonNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::NewProp_SeasonNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::NewProp_SeasonNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::NewProp_OneOnOne_Win_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Response_RankMatchRecord" },
		{ "ModuleRelativePath", "Public/YGS2Response_RankMatchRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::NewProp_OneOnOne_Win = { "OneOnOne_Win", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Response_RankMatchRecord, OneOnOne_Win), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::NewProp_OneOnOne_Win_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::NewProp_OneOnOne_Win_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::NewProp_TwoOnTwo_Win_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Response_RankMatchRecord" },
		{ "ModuleRelativePath", "Public/YGS2Response_RankMatchRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::NewProp_TwoOnTwo_Win = { "TwoOnTwo_Win", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Response_RankMatchRecord, TwoOnTwo_Win), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::NewProp_TwoOnTwo_Win_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::NewProp_TwoOnTwo_Win_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::NewProp_ThreeWay_Win_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Response_RankMatchRecord" },
		{ "ModuleRelativePath", "Public/YGS2Response_RankMatchRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::NewProp_ThreeWay_Win = { "ThreeWay_Win", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Response_RankMatchRecord, ThreeWay_Win), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::NewProp_ThreeWay_Win_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::NewProp_ThreeWay_Win_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::NewProp_FourWay_Win_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Response_RankMatchRecord" },
		{ "ModuleRelativePath", "Public/YGS2Response_RankMatchRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::NewProp_FourWay_Win = { "FourWay_Win", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Response_RankMatchRecord, FourWay_Win), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::NewProp_FourWay_Win_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::NewProp_FourWay_Win_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::NewProp_CasinoBR_Win_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Response_RankMatchRecord" },
		{ "ModuleRelativePath", "Public/YGS2Response_RankMatchRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::NewProp_CasinoBR_Win = { "CasinoBR_Win", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Response_RankMatchRecord, CasinoBR_Win), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::NewProp_CasinoBR_Win_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::NewProp_CasinoBR_Win_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::NewProp_UserId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "YGS2Response_RankMatchRecord" },
		{ "ModuleRelativePath", "Public/YGS2Response_RankMatchRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::NewProp_UserId = { "UserId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYGS2Response_RankMatchRecord, UserId), METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::NewProp_UserId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::NewProp_UserId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::NewProp_SeasonNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::NewProp_OneOnOne_Win,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::NewProp_TwoOnTwo_Win,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::NewProp_ThreeWay_Win,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::NewProp_FourWay_Win,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::NewProp_CasinoBR_Win,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::NewProp_UserId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_yGS2Client,
		nullptr,
		&NewStructOps,
		"YGS2Response_RankMatchRecord",
		sizeof(FYGS2Response_RankMatchRecord),
		alignof(FYGS2Response_RankMatchRecord),
		Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_yGS2Client();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("YGS2Response_RankMatchRecord"), sizeof(FYGS2Response_RankMatchRecord), Get_Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FYGS2Response_RankMatchRecord_Hash() { return 2744275048U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
