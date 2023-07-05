// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/MatchScoreRankingSaveDataArray.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchScoreRankingSaveDataArray() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMatchScoreRankingSaveDataArray();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMatchScoreRankingSaveData();
// End Cross Module References
class UScriptStruct* FMatchScoreRankingSaveDataArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FMatchScoreRankingSaveDataArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchScoreRankingSaveDataArray, Z_Construct_UPackage__Script_ABP_200508(), TEXT("MatchScoreRankingSaveDataArray"), sizeof(FMatchScoreRankingSaveDataArray), Get_Z_Construct_UScriptStruct_FMatchScoreRankingSaveDataArray_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FMatchScoreRankingSaveDataArray>()
{
	return FMatchScoreRankingSaveDataArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatchScoreRankingSaveDataArray(FMatchScoreRankingSaveDataArray::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("MatchScoreRankingSaveDataArray"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFMatchScoreRankingSaveDataArray
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFMatchScoreRankingSaveDataArray()
	{
		UScriptStruct::DeferCppStructOps<FMatchScoreRankingSaveDataArray>(FName(TEXT("MatchScoreRankingSaveDataArray")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFMatchScoreRankingSaveDataArray;
	struct Z_Construct_UScriptStruct_FMatchScoreRankingSaveDataArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchScoreRankingSaveDataArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MatchScoreRankingSaveDataArray.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchScoreRankingSaveDataArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchScoreRankingSaveDataArray>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatchScoreRankingSaveDataArray_Statics::NewProp_m_Data_Inner = { "m_Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMatchScoreRankingSaveData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchScoreRankingSaveDataArray_Statics::NewProp_m_Data_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchScoreRankingSaveDataArray" },
		{ "ModuleRelativePath", "Public/MatchScoreRankingSaveDataArray.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMatchScoreRankingSaveDataArray_Statics::NewProp_m_Data = { "m_Data", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchScoreRankingSaveDataArray, m_Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchScoreRankingSaveDataArray_Statics::NewProp_m_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchScoreRankingSaveDataArray_Statics::NewProp_m_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchScoreRankingSaveDataArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchScoreRankingSaveDataArray_Statics::NewProp_m_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchScoreRankingSaveDataArray_Statics::NewProp_m_Data,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchScoreRankingSaveDataArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"MatchScoreRankingSaveDataArray",
		sizeof(FMatchScoreRankingSaveDataArray),
		alignof(FMatchScoreRankingSaveDataArray),
		Z_Construct_UScriptStruct_FMatchScoreRankingSaveDataArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchScoreRankingSaveDataArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchScoreRankingSaveDataArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchScoreRankingSaveDataArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchScoreRankingSaveDataArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatchScoreRankingSaveDataArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatchScoreRankingSaveDataArray"), sizeof(FMatchScoreRankingSaveDataArray), Get_Z_Construct_UScriptStruct_FMatchScoreRankingSaveDataArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatchScoreRankingSaveDataArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatchScoreRankingSaveDataArray_Hash() { return 310479548U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
