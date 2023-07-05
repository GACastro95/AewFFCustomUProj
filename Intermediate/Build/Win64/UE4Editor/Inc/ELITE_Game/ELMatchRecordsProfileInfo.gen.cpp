// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ELMatchRecordsProfileInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELMatchRecordsProfileInfo() {}
// Cross Module References
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELMatchRecordsMatchInfo();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELMatchRecordsWeaponInfo();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FELMatchRecordsProfileInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ELITE_GAME_API uint32 Get_Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ELMatchRecordsProfileInfo"), sizeof(FELMatchRecordsProfileInfo), Get_Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Hash());
	}
	return Singleton;
}
template<> ELITE_GAME_API UScriptStruct* StaticStruct<FELMatchRecordsProfileInfo>()
{
	return FELMatchRecordsProfileInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FELMatchRecordsProfileInfo(FELMatchRecordsProfileInfo::StaticStruct, TEXT("/Script/ELITE_Game"), TEXT("ELMatchRecordsProfileInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ELITE_Game_StaticRegisterNativesFELMatchRecordsProfileInfo
{
	FScriptStruct_ELITE_Game_StaticRegisterNativesFELMatchRecordsProfileInfo()
	{
		UScriptStruct::DeferCppStructOps<FELMatchRecordsProfileInfo>(FName(TEXT("ELMatchRecordsProfileInfo")));
	}
} ScriptStruct_ELITE_Game_StaticRegisterNativesFELMatchRecordsProfileInfo;
	struct Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchScoreAverage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MatchScoreAverage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchScoreMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MatchScoreMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchTime_Longest_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MatchTime_Longest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchTime_Shortest_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MatchTime_Shortest;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MatchInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MatchInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeaponInfos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponAttachCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponAttachCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TableCrushCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TableCrushCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DropOnThumbtacksCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DropOnThumbtacksCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WasDroppedOnThumbtacksCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WasDroppedOnThumbtacksCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExplosionCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeupExplosionCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimeupExplosionCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EliminateInBattleRoyalCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_EliminateInBattleRoyalCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BattleRoyalWinCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BattleRoyalWinCount;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LastBattleRoyalWinner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastBattleRoyalWinner_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LastBattleRoyalWinner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastBattleRoyalWinnerUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastBattleRoyalWinnerUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchResultInfoForOnline_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MatchResultInfoForOnline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WiningStreakForOnline_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WiningStreakForOnline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastEnterDateForOnline_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastEnterDateForOnline;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsProfileInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FELMatchRecordsProfileInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_MatchScoreAverage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsProfileInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsProfileInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_MatchScoreAverage = { "MatchScoreAverage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsProfileInfo, MatchScoreAverage), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_MatchScoreAverage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_MatchScoreAverage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_MatchScoreMax_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsProfileInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsProfileInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_MatchScoreMax = { "MatchScoreMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsProfileInfo, MatchScoreMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_MatchScoreMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_MatchScoreMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_MatchTime_Longest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsProfileInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsProfileInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_MatchTime_Longest = { "MatchTime_Longest", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsProfileInfo, MatchTime_Longest), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_MatchTime_Longest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_MatchTime_Longest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_MatchTime_Shortest_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsProfileInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsProfileInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_MatchTime_Shortest = { "MatchTime_Shortest", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsProfileInfo, MatchTime_Shortest), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_MatchTime_Shortest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_MatchTime_Shortest_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_MatchInfos_Inner = { "MatchInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELMatchRecordsMatchInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_MatchInfos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsProfileInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsProfileInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_MatchInfos = { "MatchInfos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsProfileInfo, MatchInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_MatchInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_MatchInfos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_WeaponInfos_Inner = { "WeaponInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FELMatchRecordsWeaponInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_WeaponInfos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsProfileInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsProfileInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_WeaponInfos = { "WeaponInfos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsProfileInfo, WeaponInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_WeaponInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_WeaponInfos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_WeaponAttachCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsProfileInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsProfileInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_WeaponAttachCount = { "WeaponAttachCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsProfileInfo, WeaponAttachCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_WeaponAttachCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_WeaponAttachCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_TableCrushCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsProfileInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsProfileInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_TableCrushCount = { "TableCrushCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsProfileInfo, TableCrushCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_TableCrushCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_TableCrushCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_DropOnThumbtacksCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsProfileInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsProfileInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_DropOnThumbtacksCount = { "DropOnThumbtacksCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsProfileInfo, DropOnThumbtacksCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_DropOnThumbtacksCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_DropOnThumbtacksCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_WasDroppedOnThumbtacksCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsProfileInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsProfileInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_WasDroppedOnThumbtacksCount = { "WasDroppedOnThumbtacksCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsProfileInfo, WasDroppedOnThumbtacksCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_WasDroppedOnThumbtacksCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_WasDroppedOnThumbtacksCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_ExplosionCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsProfileInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsProfileInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_ExplosionCount = { "ExplosionCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsProfileInfo, ExplosionCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_ExplosionCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_ExplosionCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_TimeupExplosionCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsProfileInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsProfileInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_TimeupExplosionCount = { "TimeupExplosionCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsProfileInfo, TimeupExplosionCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_TimeupExplosionCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_TimeupExplosionCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_EliminateInBattleRoyalCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsProfileInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsProfileInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_EliminateInBattleRoyalCount = { "EliminateInBattleRoyalCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsProfileInfo, EliminateInBattleRoyalCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_EliminateInBattleRoyalCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_EliminateInBattleRoyalCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_BattleRoyalWinCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsProfileInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsProfileInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_BattleRoyalWinCount = { "BattleRoyalWinCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsProfileInfo, BattleRoyalWinCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_BattleRoyalWinCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_BattleRoyalWinCount_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_LastBattleRoyalWinner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_LastBattleRoyalWinner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsProfileInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsProfileInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_LastBattleRoyalWinner = { "LastBattleRoyalWinner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsProfileInfo, LastBattleRoyalWinner), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_LastBattleRoyalWinner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_LastBattleRoyalWinner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_LastBattleRoyalWinnerUID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsProfileInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsProfileInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_LastBattleRoyalWinnerUID = { "LastBattleRoyalWinnerUID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsProfileInfo, LastBattleRoyalWinnerUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_LastBattleRoyalWinnerUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_LastBattleRoyalWinnerUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_TotalDistance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsProfileInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsProfileInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_TotalDistance = { "TotalDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsProfileInfo, TotalDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_TotalDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_TotalDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_MatchResultInfoForOnline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsProfileInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsProfileInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_MatchResultInfoForOnline = { "MatchResultInfoForOnline", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsProfileInfo, MatchResultInfoForOnline), Z_Construct_UScriptStruct_FELMatchRecordsMatchResultInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_MatchResultInfoForOnline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_MatchResultInfoForOnline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_WiningStreakForOnline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsProfileInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsProfileInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_WiningStreakForOnline = { "WiningStreakForOnline", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsProfileInfo, WiningStreakForOnline), METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_WiningStreakForOnline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_WiningStreakForOnline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_LastEnterDateForOnline_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELMatchRecordsProfileInfo" },
		{ "ModuleRelativePath", "Public/ELMatchRecordsProfileInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_LastEnterDateForOnline = { "LastEnterDateForOnline", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FELMatchRecordsProfileInfo, LastEnterDateForOnline), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_LastEnterDateForOnline_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_LastEnterDateForOnline_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_MatchScoreAverage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_MatchScoreMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_MatchTime_Longest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_MatchTime_Shortest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_MatchInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_MatchInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_WeaponInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_WeaponInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_WeaponAttachCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_TableCrushCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_DropOnThumbtacksCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_WasDroppedOnThumbtacksCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_ExplosionCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_TimeupExplosionCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_EliminateInBattleRoyalCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_BattleRoyalWinCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_LastBattleRoyalWinner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_LastBattleRoyalWinner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_LastBattleRoyalWinnerUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_TotalDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_MatchResultInfoForOnline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_WiningStreakForOnline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::NewProp_LastEnterDateForOnline,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ELITE_Game,
		nullptr,
		&NewStructOps,
		"ELMatchRecordsProfileInfo",
		sizeof(FELMatchRecordsProfileInfo),
		alignof(FELMatchRecordsProfileInfo),
		Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ELMatchRecordsProfileInfo"), sizeof(FELMatchRecordsProfileInfo), Get_Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FELMatchRecordsProfileInfo_Hash() { return 3199144541U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
