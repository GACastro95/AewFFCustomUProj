// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/MiniGameScoreRankingSaveData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiniGameScoreRankingSaveData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMiniGameID();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FMiniGameScoreRankingSaveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("MiniGameScoreRankingSaveData"), sizeof(FMiniGameScoreRankingSaveData), Get_Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FMiniGameScoreRankingSaveData>()
{
	return FMiniGameScoreRankingSaveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMiniGameScoreRankingSaveData(FMiniGameScoreRankingSaveData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("MiniGameScoreRankingSaveData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFMiniGameScoreRankingSaveData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFMiniGameScoreRankingSaveData()
	{
		UScriptStruct::DeferCppStructOps<FMiniGameScoreRankingSaveData>(FName(TEXT("MiniGameScoreRankingSaveData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFMiniGameScoreRankingSaveData;
	struct Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Score;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MiniGameId_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MiniGameId_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MiniGameId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsedWrestlerList_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UsedWrestlerList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DateTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MiniGameScoreRankingSaveData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMiniGameScoreRankingSaveData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData_Statics::NewProp_Score_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameScoreRankingSaveData" },
		{ "ModuleRelativePath", "Public/MiniGameScoreRankingSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGameScoreRankingSaveData, Score), METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData_Statics::NewProp_Score_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData_Statics::NewProp_Score_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData_Statics::NewProp_MiniGameId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData_Statics::NewProp_MiniGameId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameScoreRankingSaveData" },
		{ "ModuleRelativePath", "Public/MiniGameScoreRankingSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData_Statics::NewProp_MiniGameId = { "MiniGameId", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGameScoreRankingSaveData, MiniGameId), Z_Construct_UEnum_ABP_200508_EMiniGameID, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData_Statics::NewProp_MiniGameId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData_Statics::NewProp_MiniGameId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData_Statics::NewProp_UsedWrestlerList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameScoreRankingSaveData" },
		{ "ModuleRelativePath", "Public/MiniGameScoreRankingSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData_Statics::NewProp_UsedWrestlerList = { "UsedWrestlerList", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(UsedWrestlerList, FMiniGameScoreRankingSaveData), STRUCT_OFFSET(FMiniGameScoreRankingSaveData, UsedWrestlerList), Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData_Statics::NewProp_UsedWrestlerList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData_Statics::NewProp_UsedWrestlerList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData_Statics::NewProp_DateTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MiniGameScoreRankingSaveData" },
		{ "ModuleRelativePath", "Public/MiniGameScoreRankingSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData_Statics::NewProp_DateTime = { "DateTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMiniGameScoreRankingSaveData, DateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData_Statics::NewProp_DateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData_Statics::NewProp_DateTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData_Statics::NewProp_Score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData_Statics::NewProp_MiniGameId_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData_Statics::NewProp_MiniGameId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData_Statics::NewProp_UsedWrestlerList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData_Statics::NewProp_DateTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"MiniGameScoreRankingSaveData",
		sizeof(FMiniGameScoreRankingSaveData),
		alignof(FMiniGameScoreRankingSaveData),
		Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MiniGameScoreRankingSaveData"), sizeof(FMiniGameScoreRankingSaveData), Get_Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMiniGameScoreRankingSaveData_Hash() { return 910115304U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
