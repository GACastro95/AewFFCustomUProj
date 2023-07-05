// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/MatchScoreRankingWrestlerInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchScoreRankingWrestlerInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
class UScriptStruct* FMatchScoreRankingWrestlerInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("MatchScoreRankingWrestlerInfo"), sizeof(FMatchScoreRankingWrestlerInfo), Get_Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FMatchScoreRankingWrestlerInfo>()
{
	return FMatchScoreRankingWrestlerInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatchScoreRankingWrestlerInfo(FMatchScoreRankingWrestlerInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("MatchScoreRankingWrestlerInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFMatchScoreRankingWrestlerInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFMatchScoreRankingWrestlerInfo()
	{
		UScriptStruct::DeferCppStructOps<FMatchScoreRankingWrestlerInfo>(FName(TEXT("MatchScoreRankingWrestlerInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFMatchScoreRankingWrestlerInfo;
	struct Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WrestlerUID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MatchScoreRankingWrestlerInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatchScoreRankingWrestlerInfo>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo_Statics::NewProp_WrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchScoreRankingWrestlerInfo" },
		{ "ModuleRelativePath", "Public/MatchScoreRankingWrestlerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchScoreRankingWrestlerInfo, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo_Statics::NewProp_WrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo_Statics::NewProp_WrestlerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo_Statics::NewProp_WrestlerUID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MatchScoreRankingWrestlerInfo" },
		{ "ModuleRelativePath", "Public/MatchScoreRankingWrestlerInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo_Statics::NewProp_WrestlerUID = { "WrestlerUID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatchScoreRankingWrestlerInfo, WrestlerUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo_Statics::NewProp_WrestlerUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo_Statics::NewProp_WrestlerUID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo_Statics::NewProp_WrestlerUID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"MatchScoreRankingWrestlerInfo",
		sizeof(FMatchScoreRankingWrestlerInfo),
		alignof(FMatchScoreRankingWrestlerInfo),
		Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatchScoreRankingWrestlerInfo"), sizeof(FMatchScoreRankingWrestlerInfo), Get_Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatchScoreRankingWrestlerInfo_Hash() { return 2599656238U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
