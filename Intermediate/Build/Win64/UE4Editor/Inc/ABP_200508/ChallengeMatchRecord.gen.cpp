// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ChallengeMatchRecord.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChallengeMatchRecord() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeMatchRecord();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FChallengeMatchRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FChallengeMatchRecord_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChallengeMatchRecord, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ChallengeMatchRecord"), sizeof(FChallengeMatchRecord), Get_Z_Construct_UScriptStruct_FChallengeMatchRecord_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FChallengeMatchRecord>()
{
	return FChallengeMatchRecord::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChallengeMatchRecord(FChallengeMatchRecord::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ChallengeMatchRecord"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFChallengeMatchRecord
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFChallengeMatchRecord()
	{
		UScriptStruct::DeferCppStructOps<FChallengeMatchRecord>(FName(TEXT("ChallengeMatchRecord")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFChallengeMatchRecord;
	struct Z_Construct_UScriptStruct_FChallengeMatchRecord_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalMatchCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalMatchCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfWins_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfWins;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlineTotalMatchCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OnlineTotalMatchCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnlineNumberOfWins_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OnlineNumberOfWins;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeMatchRecord_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChallengeMatchRecord.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChallengeMatchRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChallengeMatchRecord>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeMatchRecord_Statics::NewProp_TotalMatchCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeMatchRecord" },
		{ "ModuleRelativePath", "Public/ChallengeMatchRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeMatchRecord_Statics::NewProp_TotalMatchCount = { "TotalMatchCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeMatchRecord, TotalMatchCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeMatchRecord_Statics::NewProp_TotalMatchCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeMatchRecord_Statics::NewProp_TotalMatchCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeMatchRecord_Statics::NewProp_NumberOfWins_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeMatchRecord" },
		{ "ModuleRelativePath", "Public/ChallengeMatchRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeMatchRecord_Statics::NewProp_NumberOfWins = { "NumberOfWins", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeMatchRecord, NumberOfWins), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeMatchRecord_Statics::NewProp_NumberOfWins_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeMatchRecord_Statics::NewProp_NumberOfWins_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeMatchRecord_Statics::NewProp_OnlineTotalMatchCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeMatchRecord" },
		{ "ModuleRelativePath", "Public/ChallengeMatchRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeMatchRecord_Statics::NewProp_OnlineTotalMatchCount = { "OnlineTotalMatchCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeMatchRecord, OnlineTotalMatchCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeMatchRecord_Statics::NewProp_OnlineTotalMatchCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeMatchRecord_Statics::NewProp_OnlineTotalMatchCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeMatchRecord_Statics::NewProp_OnlineNumberOfWins_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeMatchRecord" },
		{ "ModuleRelativePath", "Public/ChallengeMatchRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeMatchRecord_Statics::NewProp_OnlineNumberOfWins = { "OnlineNumberOfWins", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeMatchRecord, OnlineNumberOfWins), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeMatchRecord_Statics::NewProp_OnlineNumberOfWins_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeMatchRecord_Statics::NewProp_OnlineNumberOfWins_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChallengeMatchRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeMatchRecord_Statics::NewProp_TotalMatchCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeMatchRecord_Statics::NewProp_NumberOfWins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeMatchRecord_Statics::NewProp_OnlineTotalMatchCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeMatchRecord_Statics::NewProp_OnlineNumberOfWins,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChallengeMatchRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ChallengeMatchRecord",
		sizeof(FChallengeMatchRecord),
		alignof(FChallengeMatchRecord),
		Z_Construct_UScriptStruct_FChallengeMatchRecord_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeMatchRecord_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeMatchRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeMatchRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChallengeMatchRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChallengeMatchRecord_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChallengeMatchRecord"), sizeof(FChallengeMatchRecord), Get_Z_Construct_UScriptStruct_FChallengeMatchRecord_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChallengeMatchRecord_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChallengeMatchRecord_Hash() { return 2000439361U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
