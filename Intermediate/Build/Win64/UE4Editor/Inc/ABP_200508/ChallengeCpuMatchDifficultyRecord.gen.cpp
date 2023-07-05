// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ChallengeCpuMatchDifficultyRecord.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChallengeCpuMatchDifficultyRecord() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeCpuMatchDifficultyRecord();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeCpuMatchRecord();
// End Cross Module References
class UScriptStruct* FChallengeCpuMatchDifficultyRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FChallengeCpuMatchDifficultyRecord_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChallengeCpuMatchDifficultyRecord, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ChallengeCpuMatchDifficultyRecord"), sizeof(FChallengeCpuMatchDifficultyRecord), Get_Z_Construct_UScriptStruct_FChallengeCpuMatchDifficultyRecord_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FChallengeCpuMatchDifficultyRecord>()
{
	return FChallengeCpuMatchDifficultyRecord::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChallengeCpuMatchDifficultyRecord(FChallengeCpuMatchDifficultyRecord::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ChallengeCpuMatchDifficultyRecord"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFChallengeCpuMatchDifficultyRecord
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFChallengeCpuMatchDifficultyRecord()
	{
		UScriptStruct::DeferCppStructOps<FChallengeCpuMatchDifficultyRecord>(FName(TEXT("ChallengeCpuMatchDifficultyRecord")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFChallengeCpuMatchDifficultyRecord;
	struct Z_Construct_UScriptStruct_FChallengeCpuMatchDifficultyRecord_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecordList_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RecordList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeCpuMatchDifficultyRecord_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChallengeCpuMatchDifficultyRecord.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChallengeCpuMatchDifficultyRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChallengeCpuMatchDifficultyRecord>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeCpuMatchDifficultyRecord_Statics::NewProp_RecordList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeCpuMatchDifficultyRecord" },
		{ "ModuleRelativePath", "Public/ChallengeCpuMatchDifficultyRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChallengeCpuMatchDifficultyRecord_Statics::NewProp_RecordList = { "RecordList", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(RecordList, FChallengeCpuMatchDifficultyRecord), STRUCT_OFFSET(FChallengeCpuMatchDifficultyRecord, RecordList), Z_Construct_UScriptStruct_FChallengeCpuMatchRecord, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeCpuMatchDifficultyRecord_Statics::NewProp_RecordList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeCpuMatchDifficultyRecord_Statics::NewProp_RecordList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChallengeCpuMatchDifficultyRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeCpuMatchDifficultyRecord_Statics::NewProp_RecordList,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChallengeCpuMatchDifficultyRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ChallengeCpuMatchDifficultyRecord",
		sizeof(FChallengeCpuMatchDifficultyRecord),
		alignof(FChallengeCpuMatchDifficultyRecord),
		Z_Construct_UScriptStruct_FChallengeCpuMatchDifficultyRecord_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeCpuMatchDifficultyRecord_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeCpuMatchDifficultyRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeCpuMatchDifficultyRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChallengeCpuMatchDifficultyRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChallengeCpuMatchDifficultyRecord_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChallengeCpuMatchDifficultyRecord"), sizeof(FChallengeCpuMatchDifficultyRecord), Get_Z_Construct_UScriptStruct_FChallengeCpuMatchDifficultyRecord_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChallengeCpuMatchDifficultyRecord_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChallengeCpuMatchDifficultyRecord_Hash() { return 1645485412U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
