// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/MiniGameScoreRankingSaveDataArray.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniGameScoreRankingSaveDataArray() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveDataArray();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData();
// End Cross Module References
class UScriptStruct* FMiniGameScoreRankingSaveDataArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveDataArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveDataArray, Z_Construct_UPackage__Script_ABP_200508(), TEXT("MiniGameScoreRankingSaveDataArray"), sizeof(FMiniGameScoreRankingSaveDataArray), Get_Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveDataArray_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FMiniGameScoreRankingSaveDataArray>()
{
	return FMiniGameScoreRankingSaveDataArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMiniGameScoreRankingSaveDataArray(FMiniGameScoreRankingSaveDataArray::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("MiniGameScoreRankingSaveDataArray"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFMiniGameScoreRankingSaveDataArray
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFMiniGameScoreRankingSaveDataArray()
	{
		UScriptStruct::DeferCppStructOps<FMiniGameScoreRankingSaveDataArray>(FName(TEXT("MiniGameScoreRankingSaveDataArray")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFMiniGameScoreRankingSaveDataArray;
	struct Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveDataArray_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveDataArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MiniGameScoreRankingSaveDataArray.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveDataArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMiniGameScoreRankingSaveDataArray>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveDataArray_Statics::NewProp_m_Data_Inner = { "m_Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveDataArray_Statics::NewProp_m_Data_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameScoreRankingSaveDataArray" },
		{ "ModuleRelativePath", "Public/MiniGameScoreRankingSaveDataArray.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveDataArray_Statics::NewProp_m_Data = { "m_Data", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGameScoreRankingSaveDataArray, m_Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveDataArray_Statics::NewProp_m_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveDataArray_Statics::NewProp_m_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveDataArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveDataArray_Statics::NewProp_m_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveDataArray_Statics::NewProp_m_Data,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveDataArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"MiniGameScoreRankingSaveDataArray",
		sizeof(FMiniGameScoreRankingSaveDataArray),
		alignof(FMiniGameScoreRankingSaveDataArray),
		Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveDataArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveDataArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveDataArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveDataArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveDataArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveDataArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MiniGameScoreRankingSaveDataArray"), sizeof(FMiniGameScoreRankingSaveDataArray), Get_Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveDataArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveDataArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveDataArray_Hash() { return 528856407U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
