// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SSLastPlayRecord.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSLastPlayRecord() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSLastPlayRecord();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FSSLastPlayRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FSSLastPlayRecord_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSSLastPlayRecord, Z_Construct_UPackage__Script_ABP_200508(), TEXT("SSLastPlayRecord"), sizeof(FSSLastPlayRecord), Get_Z_Construct_UScriptStruct_FSSLastPlayRecord_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FSSLastPlayRecord>()
{
	return FSSLastPlayRecord::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSSLastPlayRecord(FSSLastPlayRecord::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("SSLastPlayRecord"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFSSLastPlayRecord
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFSSLastPlayRecord()
	{
		UScriptStruct::DeferCppStructOps<FSSLastPlayRecord>(FName(TEXT("SSLastPlayRecord")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFSSLastPlayRecord;
	struct Z_Construct_UScriptStruct_FSSLastPlayRecord_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttentionPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttentionPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorRank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SurvivorRank;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSLastPlayRecord_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SSLastPlayRecord.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSSLastPlayRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSSLastPlayRecord>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSLastPlayRecord_Statics::NewProp_AttentionPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSLastPlayRecord" },
		{ "ModuleRelativePath", "Public/SSLastPlayRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSLastPlayRecord_Statics::NewProp_AttentionPoint = { "AttentionPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSLastPlayRecord, AttentionPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSLastPlayRecord_Statics::NewProp_AttentionPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLastPlayRecord_Statics::NewProp_AttentionPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSSLastPlayRecord_Statics::NewProp_SurvivorRank_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SSLastPlayRecord" },
		{ "ModuleRelativePath", "Public/SSLastPlayRecord.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSSLastPlayRecord_Statics::NewProp_SurvivorRank = { "SurvivorRank", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSSLastPlayRecord, SurvivorRank), METADATA_PARAMS(Z_Construct_UScriptStruct_FSSLastPlayRecord_Statics::NewProp_SurvivorRank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLastPlayRecord_Statics::NewProp_SurvivorRank_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSSLastPlayRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSLastPlayRecord_Statics::NewProp_AttentionPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSSLastPlayRecord_Statics::NewProp_SurvivorRank,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSSLastPlayRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"SSLastPlayRecord",
		sizeof(FSSLastPlayRecord),
		alignof(FSSLastPlayRecord),
		Z_Construct_UScriptStruct_FSSLastPlayRecord_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLastPlayRecord_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSSLastPlayRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSSLastPlayRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSSLastPlayRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSSLastPlayRecord_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SSLastPlayRecord"), sizeof(FSSLastPlayRecord), Get_Z_Construct_UScriptStruct_FSSLastPlayRecord_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSSLastPlayRecord_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSSLastPlayRecord_Hash() { return 1932304323U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
