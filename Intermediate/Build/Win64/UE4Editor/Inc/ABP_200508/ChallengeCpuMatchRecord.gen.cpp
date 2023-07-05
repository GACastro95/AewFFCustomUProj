// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ChallengeCpuMatchRecord.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChallengeCpuMatchRecord() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeCpuMatchRecord();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FChallengeCpuMatchRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FChallengeCpuMatchRecord_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChallengeCpuMatchRecord, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ChallengeCpuMatchRecord"), sizeof(FChallengeCpuMatchRecord), Get_Z_Construct_UScriptStruct_FChallengeCpuMatchRecord_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FChallengeCpuMatchRecord>()
{
	return FChallengeCpuMatchRecord::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChallengeCpuMatchRecord(FChallengeCpuMatchRecord::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ChallengeCpuMatchRecord"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFChallengeCpuMatchRecord
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFChallengeCpuMatchRecord()
	{
		UScriptStruct::DeferCppStructOps<FChallengeCpuMatchRecord>(FName(TEXT("ChallengeCpuMatchRecord")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFChallengeCpuMatchRecord;
	struct Z_Construct_UScriptStruct_FChallengeCpuMatchRecord_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeCpuMatchRecord_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChallengeCpuMatchRecord.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChallengeCpuMatchRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChallengeCpuMatchRecord>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeCpuMatchRecord_Statics::NewProp_TotalMatchCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeCpuMatchRecord" },
		{ "ModuleRelativePath", "Public/ChallengeCpuMatchRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeCpuMatchRecord_Statics::NewProp_TotalMatchCount = { "TotalMatchCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeCpuMatchRecord, TotalMatchCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeCpuMatchRecord_Statics::NewProp_TotalMatchCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeCpuMatchRecord_Statics::NewProp_TotalMatchCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeCpuMatchRecord_Statics::NewProp_NumberOfWins_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeCpuMatchRecord" },
		{ "ModuleRelativePath", "Public/ChallengeCpuMatchRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeCpuMatchRecord_Statics::NewProp_NumberOfWins = { "NumberOfWins", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeCpuMatchRecord, NumberOfWins), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeCpuMatchRecord_Statics::NewProp_NumberOfWins_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeCpuMatchRecord_Statics::NewProp_NumberOfWins_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChallengeCpuMatchRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeCpuMatchRecord_Statics::NewProp_TotalMatchCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeCpuMatchRecord_Statics::NewProp_NumberOfWins,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChallengeCpuMatchRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ChallengeCpuMatchRecord",
		sizeof(FChallengeCpuMatchRecord),
		alignof(FChallengeCpuMatchRecord),
		Z_Construct_UScriptStruct_FChallengeCpuMatchRecord_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeCpuMatchRecord_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeCpuMatchRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeCpuMatchRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChallengeCpuMatchRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChallengeCpuMatchRecord_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChallengeCpuMatchRecord"), sizeof(FChallengeCpuMatchRecord), Get_Z_Construct_UScriptStruct_FChallengeCpuMatchRecord_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChallengeCpuMatchRecord_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChallengeCpuMatchRecord_Hash() { return 2762252617U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
