// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELStatsUtility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELStatsUtility() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELStatsUtility_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELStatsUtility();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELGlobalStat();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELSpecialStat();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EGender();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELWrestlerStat();
	ABP_200508_API UClass* Z_Construct_UClass_UELStats_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FUserProfileColorParam();
// End Cross Module References
	DEFINE_FUNCTION(UELStatsUtility::execAddBattlePassTotalPointStat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::AddBattlePassTotalPointStat(Z_Param_WorldContextObject,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execAddDisconnectionPenalty)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_LeaderboardRank);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::AddDisconnectionPenalty(Z_Param_WorldContextObject,Z_Param_LeaderboardRank);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execAddGlobalStat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EELGlobalStat,Z_Param_Stat);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::AddGlobalStat(Z_Param_WorldContextObject,EELGlobalStat(Z_Param_Stat),Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execAddRankMatchSeasonCountStats)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELStatsUtility::AddRankMatchSeasonCountStats(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execAddSpecialStat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EELSpecialStat,Z_Param_Stat);
		P_GET_PROPERTY(FStrProperty,Z_Param_ParamName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::AddSpecialStat(Z_Param_WorldContextObject,EELSpecialStat(Z_Param_Stat),Z_Param_ParamName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execAddSSAttentionPoint)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bIngestEOS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::AddSSAttentionPoint(Z_Param_WorldContextObject,Z_Param_Value,Z_Param_bIngestEOS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execAddSSFeverCount)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bIngestEOS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::AddSSFeverCount(Z_Param_WorldContextObject,Z_Param_Value,Z_Param_bIngestEOS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execAddSSKillCount)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bIngestEOS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::AddSSKillCount(Z_Param_WorldContextObject,Z_Param_Value,Z_Param_bIngestEOS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execAddSSPlayCount)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bIngestEOS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::AddSSPlayCount(Z_Param_WorldContextObject,Z_Param_Value,Z_Param_bIngestEOS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execAddSSStarCount)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_Star);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bIngestEOS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::AddSSStarCount(Z_Param_WorldContextObject,Z_Param_Star,Z_Param_Value,Z_Param_bIngestEOS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execAddSSTop5Count)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bIngestEOS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::AddSSTop5Count(Z_Param_WorldContextObject,Z_Param_Value,Z_Param_bIngestEOS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execAddSSTopCount)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bIngestEOS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::AddSSTopCount(Z_Param_WorldContextObject,Z_Param_Value,Z_Param_bIngestEOS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execAddSSTotalScore)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bIngestEOS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::AddSSTotalScore(Z_Param_WorldContextObject,Z_Param_Value,Z_Param_bIngestEOS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execAddSSWrestlerCount)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EWrestlerID_N,Z_Param_WrestlerID);
		P_GET_ENUM(EGender,Z_Param_Gender);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bIngestEOS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::AddSSWrestlerCount(Z_Param_WorldContextObject,EWrestlerID_N(Z_Param_WrestlerID),EGender(Z_Param_Gender),Z_Param_Value,Z_Param_bIngestEOS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execAddStat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bIngestEOS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::AddStat(Z_Param_WorldContextObject,Z_Param_Name,Z_Param_Value,Z_Param_bIngestEOS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execAddWrestlerStat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EELWrestlerStat,Z_Param_Stat);
		P_GET_ENUM(EWrestlerID_N,Z_Param_WrestlerID);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::AddWrestlerStat(Z_Param_WorldContextObject,EELWrestlerStat(Z_Param_Stat),EWrestlerID_N(Z_Param_WrestlerID),Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execClearCheatPenalty)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELStatsUtility::ClearCheatPenalty(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execGetBattlePassTotalPointStat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::GetBattlePassTotalPointStat(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execGetCasinoBattleRoyaleLastWinnerStat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWrestlerID_N*)Z_Param__Result=UELStatsUtility::GetCasinoBattleRoyaleLastWinnerStat(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execGetDisconnectionCount)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::GetDisconnectionCount(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execGetDisconnectionLevel)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::GetDisconnectionLevel(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execGetDisconnectionPenaltyCount)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::GetDisconnectionPenaltyCount(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execGetDisconnectionStats)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MatchCount);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_DisconnectCount);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_LatestMatchCount);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_LatestDisconnectCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UELStatsUtility::GetDisconnectionStats(Z_Param_WorldContextObject,Z_Param_Out_MatchCount,Z_Param_Out_DisconnectCount,Z_Param_Out_LatestMatchCount,Z_Param_Out_LatestDisconnectCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execGetELStats)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELStats**)Z_Param__Result=UELStatsUtility::GetELStats(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execGetGlobalStat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EELGlobalStat,Z_Param_Stat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::GetGlobalStat(Z_Param_WorldContextObject,EELGlobalStat(Z_Param_Stat));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execGetPenaltyDisconnectionCount)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::GetPenaltyDisconnectionCount(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execGetPlatformMaxStats)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_StatName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::GetPlatformMaxStats(Z_Param_WorldContextObject,Z_Param_StatName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execGetPlatformPostfix)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELStatsUtility::GetPlatformPostfix(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execGetPlayerRank)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Rank);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_RankPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELStatsUtility::GetPlayerRank(Z_Param_WorldContextObject,Z_Param_Out_Rank,Z_Param_Out_RankPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execGetSpecialStat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EELSpecialStat,Z_Param_Stat);
		P_GET_PROPERTY(FStrProperty,Z_Param_ParamName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::GetSpecialStat(Z_Param_WorldContextObject,EELSpecialStat(Z_Param_Stat),Z_Param_ParamName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execGetSSAttentionPoint)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::GetSSAttentionPoint(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execGetSSFeverCount)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::GetSSFeverCount(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execGetSSInGameFlag)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::GetSSInGameFlag(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execGetSSKillCount)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::GetSSKillCount(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execGetSSMaxScore)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::GetSSMaxScore(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execGetSSPlayCount)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::GetSSPlayCount(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execGetSSRankPoint)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::GetSSRankPoint(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execGetSSStarCount)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_Star);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::GetSSStarCount(Z_Param_WorldContextObject,Z_Param_Star);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execGetSSStarCountName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Star);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELStatsUtility::GetSSStarCountName(Z_Param_Star);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execGetSSTop5Count)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::GetSSTop5Count(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execGetSSTopCount)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::GetSSTopCount(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execGetSSTotalScore)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::GetSSTotalScore(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execGetSSWrestlerCount)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EWrestlerID_N,Z_Param_WrestlerID);
		P_GET_ENUM(EGender,Z_Param_Gender);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::GetSSWrestlerCount(Z_Param_WorldContextObject,EWrestlerID_N(Z_Param_WrestlerID),EGender(Z_Param_Gender));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execGetSSWrestlerCountName)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param_WrestlerID);
		P_GET_ENUM(EGender,Z_Param_Gender);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UELStatsUtility::GetSSWrestlerCountName(EWrestlerID_N(Z_Param_WrestlerID),EGender(Z_Param_Gender));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execGetStat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::GetStat(Z_Param_WorldContextObject,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execGetWarningDisconnectionCount)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::GetWarningDisconnectionCount(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execGetWrestlerStat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EELWrestlerStat,Z_Param_Stat);
		P_GET_ENUM(EWrestlerID_N,Z_Param_WrestlerID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::GetWrestlerStat(Z_Param_WorldContextObject,EELWrestlerStat(Z_Param_Stat),EWrestlerID_N(Z_Param_WrestlerID));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execIngestDirtyStats)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::IngestDirtyStats(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execIngestDisconnectionStats)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELStatsUtility::IngestDisconnectionStats(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execMaxGlobalStat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EELGlobalStat,Z_Param_Stat);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::MaxGlobalStat(Z_Param_WorldContextObject,EELGlobalStat(Z_Param_Stat),Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execMaxStat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bIngestEOS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::MaxStat(Z_Param_WorldContextObject,Z_Param_Name,Z_Param_Value,Z_Param_bIngestEOS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execMaxWrestlerStat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EELWrestlerStat,Z_Param_Stat);
		P_GET_ENUM(EWrestlerID_N,Z_Param_WrestlerID);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::MaxWrestlerStat(Z_Param_WorldContextObject,EELWrestlerStat(Z_Param_Stat),EWrestlerID_N(Z_Param_WrestlerID),Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execMinGlobalStat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EELGlobalStat,Z_Param_Stat);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::MinGlobalStat(Z_Param_WorldContextObject,EELGlobalStat(Z_Param_Stat),Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execMinStat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bIngestEOS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::MinStat(Z_Param_WorldContextObject,Z_Param_Name,Z_Param_Value,Z_Param_bIngestEOS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execMinWrestlerStat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EELWrestlerStat,Z_Param_Stat);
		P_GET_ENUM(EWrestlerID_N,Z_Param_WrestlerID);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::MinWrestlerStat(Z_Param_WorldContextObject,EELWrestlerStat(Z_Param_Stat),EWrestlerID_N(Z_Param_WrestlerID),Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execSetBattlePassTotalPointStat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::SetBattlePassTotalPointStat(Z_Param_WorldContextObject,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execSetCasinoBattleRoyaleLastWinnerStat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EWrestlerID_N,Z_Param_WrestlerID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWrestlerID_N*)Z_Param__Result=UELStatsUtility::SetCasinoBattleRoyaleLastWinnerStat(Z_Param_WorldContextObject,EWrestlerID_N(Z_Param_WrestlerID));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execSetCheatPenalty)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELStatsUtility::SetCheatPenalty(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execSetDebugDisconnectionLevel)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_DisconnectLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELStatsUtility::SetDebugDisconnectionLevel(Z_Param_WorldContextObject,Z_Param_DisconnectLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execSetExternalAccountId)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELStatsUtility::SetExternalAccountId(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execSetGlobalStat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EELGlobalStat,Z_Param_Stat);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::SetGlobalStat(Z_Param_WorldContextObject,EELGlobalStat(Z_Param_Stat),Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execSetPlayerBadgesToStat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Badges);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELStatsUtility::SetPlayerBadgesToStat(Z_Param_WorldContextObject,Z_Param_Out_Badges);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execSetPlayerIconToStat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIcon);
		P_GET_PROPERTY(FIntProperty,Z_Param_BGIcon);
		P_GET_STRUCT_REF(FUserProfileColorParam,Z_Param_Out_ColorParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UELStatsUtility::SetPlayerIconToStat(Z_Param_WorldContextObject,Z_Param_PlayerIcon,Z_Param_BGIcon,Z_Param_Out_ColorParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execSetPlayerRank)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_Rank);
		P_GET_PROPERTY(FIntProperty,Z_Param_RankPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELStatsUtility::SetPlayerRank(Z_Param_WorldContextObject,Z_Param_Rank,Z_Param_RankPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execSetPlayerRankPoint)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_RankPoint);
		P_GET_PROPERTY(FIntProperty,Z_Param_LeaderboardRank);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::SetPlayerRankPoint(Z_Param_WorldContextObject,Z_Param_RankPoint,Z_Param_LeaderboardRank);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execSetSpecialStat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EELSpecialStat,Z_Param_Stat);
		P_GET_PROPERTY(FStrProperty,Z_Param_ParamName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::SetSpecialStat(Z_Param_WorldContextObject,EELSpecialStat(Z_Param_Stat),Z_Param_ParamName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execSetSSInGameFlag)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::SetSSInGameFlag(Z_Param_WorldContextObject,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execSetSSMaxScore)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bIngestEOS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::SetSSMaxScore(Z_Param_WorldContextObject,Z_Param_Value,Z_Param_bIngestEOS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execSetSSRankPoint)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bIngestEOS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::SetSSRankPoint(Z_Param_WorldContextObject,Z_Param_Value,Z_Param_bIngestEOS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execSetStat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bIngestEOS);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::SetStat(Z_Param_WorldContextObject,Z_Param_Name,Z_Param_Value,Z_Param_bIngestEOS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStatsUtility::execSetWrestlerStat)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_ENUM(EELWrestlerStat,Z_Param_Stat);
		P_GET_ENUM(EWrestlerID_N,Z_Param_WrestlerID);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UELStatsUtility::SetWrestlerStat(Z_Param_WorldContextObject,EELWrestlerStat(Z_Param_Stat),EWrestlerID_N(Z_Param_WrestlerID),Z_Param_Value);
		P_NATIVE_END;
	}
	void UELStatsUtility::StaticRegisterNativesUELStatsUtility()
	{
		UClass* Class = UELStatsUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBattlePassTotalPointStat", &UELStatsUtility::execAddBattlePassTotalPointStat },
			{ "AddDisconnectionPenalty", &UELStatsUtility::execAddDisconnectionPenalty },
			{ "AddGlobalStat", &UELStatsUtility::execAddGlobalStat },
			{ "AddRankMatchSeasonCountStats", &UELStatsUtility::execAddRankMatchSeasonCountStats },
			{ "AddSpecialStat", &UELStatsUtility::execAddSpecialStat },
			{ "AddSSAttentionPoint", &UELStatsUtility::execAddSSAttentionPoint },
			{ "AddSSFeverCount", &UELStatsUtility::execAddSSFeverCount },
			{ "AddSSKillCount", &UELStatsUtility::execAddSSKillCount },
			{ "AddSSPlayCount", &UELStatsUtility::execAddSSPlayCount },
			{ "AddSSStarCount", &UELStatsUtility::execAddSSStarCount },
			{ "AddSSTop5Count", &UELStatsUtility::execAddSSTop5Count },
			{ "AddSSTopCount", &UELStatsUtility::execAddSSTopCount },
			{ "AddSSTotalScore", &UELStatsUtility::execAddSSTotalScore },
			{ "AddSSWrestlerCount", &UELStatsUtility::execAddSSWrestlerCount },
			{ "AddStat", &UELStatsUtility::execAddStat },
			{ "AddWrestlerStat", &UELStatsUtility::execAddWrestlerStat },
			{ "ClearCheatPenalty", &UELStatsUtility::execClearCheatPenalty },
			{ "GetBattlePassTotalPointStat", &UELStatsUtility::execGetBattlePassTotalPointStat },
			{ "GetCasinoBattleRoyaleLastWinnerStat", &UELStatsUtility::execGetCasinoBattleRoyaleLastWinnerStat },
			{ "GetDisconnectionCount", &UELStatsUtility::execGetDisconnectionCount },
			{ "GetDisconnectionLevel", &UELStatsUtility::execGetDisconnectionLevel },
			{ "GetDisconnectionPenaltyCount", &UELStatsUtility::execGetDisconnectionPenaltyCount },
			{ "GetDisconnectionStats", &UELStatsUtility::execGetDisconnectionStats },
			{ "GetELStats", &UELStatsUtility::execGetELStats },
			{ "GetGlobalStat", &UELStatsUtility::execGetGlobalStat },
			{ "GetPenaltyDisconnectionCount", &UELStatsUtility::execGetPenaltyDisconnectionCount },
			{ "GetPlatformMaxStats", &UELStatsUtility::execGetPlatformMaxStats },
			{ "GetPlatformPostfix", &UELStatsUtility::execGetPlatformPostfix },
			{ "GetPlayerRank", &UELStatsUtility::execGetPlayerRank },
			{ "GetSpecialStat", &UELStatsUtility::execGetSpecialStat },
			{ "GetSSAttentionPoint", &UELStatsUtility::execGetSSAttentionPoint },
			{ "GetSSFeverCount", &UELStatsUtility::execGetSSFeverCount },
			{ "GetSSInGameFlag", &UELStatsUtility::execGetSSInGameFlag },
			{ "GetSSKillCount", &UELStatsUtility::execGetSSKillCount },
			{ "GetSSMaxScore", &UELStatsUtility::execGetSSMaxScore },
			{ "GetSSPlayCount", &UELStatsUtility::execGetSSPlayCount },
			{ "GetSSRankPoint", &UELStatsUtility::execGetSSRankPoint },
			{ "GetSSStarCount", &UELStatsUtility::execGetSSStarCount },
			{ "GetSSStarCountName", &UELStatsUtility::execGetSSStarCountName },
			{ "GetSSTop5Count", &UELStatsUtility::execGetSSTop5Count },
			{ "GetSSTopCount", &UELStatsUtility::execGetSSTopCount },
			{ "GetSSTotalScore", &UELStatsUtility::execGetSSTotalScore },
			{ "GetSSWrestlerCount", &UELStatsUtility::execGetSSWrestlerCount },
			{ "GetSSWrestlerCountName", &UELStatsUtility::execGetSSWrestlerCountName },
			{ "GetStat", &UELStatsUtility::execGetStat },
			{ "GetWarningDisconnectionCount", &UELStatsUtility::execGetWarningDisconnectionCount },
			{ "GetWrestlerStat", &UELStatsUtility::execGetWrestlerStat },
			{ "IngestDirtyStats", &UELStatsUtility::execIngestDirtyStats },
			{ "IngestDisconnectionStats", &UELStatsUtility::execIngestDisconnectionStats },
			{ "MaxGlobalStat", &UELStatsUtility::execMaxGlobalStat },
			{ "MaxStat", &UELStatsUtility::execMaxStat },
			{ "MaxWrestlerStat", &UELStatsUtility::execMaxWrestlerStat },
			{ "MinGlobalStat", &UELStatsUtility::execMinGlobalStat },
			{ "MinStat", &UELStatsUtility::execMinStat },
			{ "MinWrestlerStat", &UELStatsUtility::execMinWrestlerStat },
			{ "SetBattlePassTotalPointStat", &UELStatsUtility::execSetBattlePassTotalPointStat },
			{ "SetCasinoBattleRoyaleLastWinnerStat", &UELStatsUtility::execSetCasinoBattleRoyaleLastWinnerStat },
			{ "SetCheatPenalty", &UELStatsUtility::execSetCheatPenalty },
			{ "SetDebugDisconnectionLevel", &UELStatsUtility::execSetDebugDisconnectionLevel },
			{ "SetExternalAccountId", &UELStatsUtility::execSetExternalAccountId },
			{ "SetGlobalStat", &UELStatsUtility::execSetGlobalStat },
			{ "SetPlayerBadgesToStat", &UELStatsUtility::execSetPlayerBadgesToStat },
			{ "SetPlayerIconToStat", &UELStatsUtility::execSetPlayerIconToStat },
			{ "SetPlayerRank", &UELStatsUtility::execSetPlayerRank },
			{ "SetPlayerRankPoint", &UELStatsUtility::execSetPlayerRankPoint },
			{ "SetSpecialStat", &UELStatsUtility::execSetSpecialStat },
			{ "SetSSInGameFlag", &UELStatsUtility::execSetSSInGameFlag },
			{ "SetSSMaxScore", &UELStatsUtility::execSetSSMaxScore },
			{ "SetSSRankPoint", &UELStatsUtility::execSetSSRankPoint },
			{ "SetStat", &UELStatsUtility::execSetStat },
			{ "SetWrestlerStat", &UELStatsUtility::execSetWrestlerStat },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELStatsUtility_AddBattlePassTotalPointStat_Statics
	{
		struct ELStatsUtility_eventAddBattlePassTotalPointStat_Parms
		{
			const UObject* WorldContextObject;
			int32 Value;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_AddBattlePassTotalPointStat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_AddBattlePassTotalPointStat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddBattlePassTotalPointStat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_AddBattlePassTotalPointStat_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddBattlePassTotalPointStat_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_AddBattlePassTotalPointStat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddBattlePassTotalPointStat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_AddBattlePassTotalPointStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddBattlePassTotalPointStat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_AddBattlePassTotalPointStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddBattlePassTotalPointStat_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddBattlePassTotalPointStat_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddBattlePassTotalPointStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_AddBattlePassTotalPointStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_AddBattlePassTotalPointStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "AddBattlePassTotalPointStat", nullptr, nullptr, sizeof(ELStatsUtility_eventAddBattlePassTotalPointStat_Parms), Z_Construct_UFunction_UELStatsUtility_AddBattlePassTotalPointStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddBattlePassTotalPointStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_AddBattlePassTotalPointStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddBattlePassTotalPointStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_AddBattlePassTotalPointStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_AddBattlePassTotalPointStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_AddDisconnectionPenalty_Statics
	{
		struct ELStatsUtility_eventAddDisconnectionPenalty_Parms
		{
			const UObject* WorldContextObject;
			int32 LeaderboardRank;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LeaderboardRank;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_AddDisconnectionPenalty_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_AddDisconnectionPenalty_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddDisconnectionPenalty_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_AddDisconnectionPenalty_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddDisconnectionPenalty_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_AddDisconnectionPenalty_Statics::NewProp_LeaderboardRank = { "LeaderboardRank", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddDisconnectionPenalty_Parms, LeaderboardRank), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_AddDisconnectionPenalty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddDisconnectionPenalty_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_AddDisconnectionPenalty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddDisconnectionPenalty_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddDisconnectionPenalty_Statics::NewProp_LeaderboardRank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddDisconnectionPenalty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_AddDisconnectionPenalty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_AddDisconnectionPenalty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "AddDisconnectionPenalty", nullptr, nullptr, sizeof(ELStatsUtility_eventAddDisconnectionPenalty_Parms), Z_Construct_UFunction_UELStatsUtility_AddDisconnectionPenalty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddDisconnectionPenalty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_AddDisconnectionPenalty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddDisconnectionPenalty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_AddDisconnectionPenalty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_AddDisconnectionPenalty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_AddGlobalStat_Statics
	{
		struct ELStatsUtility_eventAddGlobalStat_Parms
		{
			const UObject* WorldContextObject;
			EELGlobalStat Stat;
			int32 Value;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Stat_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Stat;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_AddGlobalStat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_AddGlobalStat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddGlobalStat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_AddGlobalStat_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddGlobalStat_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELStatsUtility_AddGlobalStat_Statics::NewProp_Stat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELStatsUtility_AddGlobalStat_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddGlobalStat_Parms, Stat), Z_Construct_UEnum_ABP_200508_EELGlobalStat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_AddGlobalStat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddGlobalStat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_AddGlobalStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddGlobalStat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_AddGlobalStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddGlobalStat_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddGlobalStat_Statics::NewProp_Stat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddGlobalStat_Statics::NewProp_Stat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddGlobalStat_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddGlobalStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_AddGlobalStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_AddGlobalStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "AddGlobalStat", nullptr, nullptr, sizeof(ELStatsUtility_eventAddGlobalStat_Parms), Z_Construct_UFunction_UELStatsUtility_AddGlobalStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddGlobalStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_AddGlobalStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddGlobalStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_AddGlobalStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_AddGlobalStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_AddRankMatchSeasonCountStats_Statics
	{
		struct ELStatsUtility_eventAddRankMatchSeasonCountStats_Parms
		{
			const UObject* WorldContextObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_AddRankMatchSeasonCountStats_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_AddRankMatchSeasonCountStats_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddRankMatchSeasonCountStats_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_AddRankMatchSeasonCountStats_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddRankMatchSeasonCountStats_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_AddRankMatchSeasonCountStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddRankMatchSeasonCountStats_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_AddRankMatchSeasonCountStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_AddRankMatchSeasonCountStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "AddRankMatchSeasonCountStats", nullptr, nullptr, sizeof(ELStatsUtility_eventAddRankMatchSeasonCountStats_Parms), Z_Construct_UFunction_UELStatsUtility_AddRankMatchSeasonCountStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddRankMatchSeasonCountStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_AddRankMatchSeasonCountStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddRankMatchSeasonCountStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_AddRankMatchSeasonCountStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_AddRankMatchSeasonCountStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_AddSpecialStat_Statics
	{
		struct ELStatsUtility_eventAddSpecialStat_Parms
		{
			const UObject* WorldContextObject;
			EELSpecialStat Stat;
			FString ParamName;
			int32 Value;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Stat_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Stat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ParamName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_AddSpecialStat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSpecialStat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddSpecialStat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_AddSpecialStat_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddSpecialStat_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELStatsUtility_AddSpecialStat_Statics::NewProp_Stat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSpecialStat_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddSpecialStat_Parms, Stat), Z_Construct_UEnum_ABP_200508_EELSpecialStat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_AddSpecialStat_Statics::NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSpecialStat_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddSpecialStat_Parms, ParamName), METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_AddSpecialStat_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddSpecialStat_Statics::NewProp_ParamName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSpecialStat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddSpecialStat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSpecialStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddSpecialStat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_AddSpecialStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSpecialStat_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSpecialStat_Statics::NewProp_Stat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSpecialStat_Statics::NewProp_Stat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSpecialStat_Statics::NewProp_ParamName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSpecialStat_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSpecialStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_AddSpecialStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_AddSpecialStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "AddSpecialStat", nullptr, nullptr, sizeof(ELStatsUtility_eventAddSpecialStat_Parms), Z_Construct_UFunction_UELStatsUtility_AddSpecialStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddSpecialStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_AddSpecialStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddSpecialStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_AddSpecialStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_AddSpecialStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_AddSSAttentionPoint_Statics
	{
		struct ELStatsUtility_eventAddSSAttentionPoint_Parms
		{
			const UObject* WorldContextObject;
			int32 Value;
			bool bIngestEOS;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_bIngestEOS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIngestEOS;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_AddSSAttentionPoint_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSAttentionPoint_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddSSAttentionPoint_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_AddSSAttentionPoint_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddSSAttentionPoint_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSAttentionPoint_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddSSAttentionPoint_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELStatsUtility_AddSSAttentionPoint_Statics::NewProp_bIngestEOS_SetBit(void* Obj)
	{
		((ELStatsUtility_eventAddSSAttentionPoint_Parms*)Obj)->bIngestEOS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSAttentionPoint_Statics::NewProp_bIngestEOS = { "bIngestEOS", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStatsUtility_eventAddSSAttentionPoint_Parms), &Z_Construct_UFunction_UELStatsUtility_AddSSAttentionPoint_Statics::NewProp_bIngestEOS_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSAttentionPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddSSAttentionPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_AddSSAttentionPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSAttentionPoint_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSAttentionPoint_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSAttentionPoint_Statics::NewProp_bIngestEOS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSAttentionPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_AddSSAttentionPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_AddSSAttentionPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "AddSSAttentionPoint", nullptr, nullptr, sizeof(ELStatsUtility_eventAddSSAttentionPoint_Parms), Z_Construct_UFunction_UELStatsUtility_AddSSAttentionPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddSSAttentionPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_AddSSAttentionPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddSSAttentionPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_AddSSAttentionPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_AddSSAttentionPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_AddSSFeverCount_Statics
	{
		struct ELStatsUtility_eventAddSSFeverCount_Parms
		{
			const UObject* WorldContextObject;
			int32 Value;
			bool bIngestEOS;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_bIngestEOS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIngestEOS;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_AddSSFeverCount_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSFeverCount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddSSFeverCount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_AddSSFeverCount_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddSSFeverCount_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSFeverCount_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddSSFeverCount_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELStatsUtility_AddSSFeverCount_Statics::NewProp_bIngestEOS_SetBit(void* Obj)
	{
		((ELStatsUtility_eventAddSSFeverCount_Parms*)Obj)->bIngestEOS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSFeverCount_Statics::NewProp_bIngestEOS = { "bIngestEOS", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStatsUtility_eventAddSSFeverCount_Parms), &Z_Construct_UFunction_UELStatsUtility_AddSSFeverCount_Statics::NewProp_bIngestEOS_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSFeverCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddSSFeverCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_AddSSFeverCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSFeverCount_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSFeverCount_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSFeverCount_Statics::NewProp_bIngestEOS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSFeverCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_AddSSFeverCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_AddSSFeverCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "AddSSFeverCount", nullptr, nullptr, sizeof(ELStatsUtility_eventAddSSFeverCount_Parms), Z_Construct_UFunction_UELStatsUtility_AddSSFeverCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddSSFeverCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_AddSSFeverCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddSSFeverCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_AddSSFeverCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_AddSSFeverCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_AddSSKillCount_Statics
	{
		struct ELStatsUtility_eventAddSSKillCount_Parms
		{
			const UObject* WorldContextObject;
			int32 Value;
			bool bIngestEOS;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_bIngestEOS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIngestEOS;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_AddSSKillCount_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSKillCount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddSSKillCount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_AddSSKillCount_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddSSKillCount_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSKillCount_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddSSKillCount_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELStatsUtility_AddSSKillCount_Statics::NewProp_bIngestEOS_SetBit(void* Obj)
	{
		((ELStatsUtility_eventAddSSKillCount_Parms*)Obj)->bIngestEOS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSKillCount_Statics::NewProp_bIngestEOS = { "bIngestEOS", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStatsUtility_eventAddSSKillCount_Parms), &Z_Construct_UFunction_UELStatsUtility_AddSSKillCount_Statics::NewProp_bIngestEOS_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSKillCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddSSKillCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_AddSSKillCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSKillCount_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSKillCount_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSKillCount_Statics::NewProp_bIngestEOS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSKillCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_AddSSKillCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_AddSSKillCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "AddSSKillCount", nullptr, nullptr, sizeof(ELStatsUtility_eventAddSSKillCount_Parms), Z_Construct_UFunction_UELStatsUtility_AddSSKillCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddSSKillCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_AddSSKillCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddSSKillCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_AddSSKillCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_AddSSKillCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_AddSSPlayCount_Statics
	{
		struct ELStatsUtility_eventAddSSPlayCount_Parms
		{
			const UObject* WorldContextObject;
			int32 Value;
			bool bIngestEOS;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_bIngestEOS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIngestEOS;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_AddSSPlayCount_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSPlayCount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddSSPlayCount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_AddSSPlayCount_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddSSPlayCount_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSPlayCount_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddSSPlayCount_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELStatsUtility_AddSSPlayCount_Statics::NewProp_bIngestEOS_SetBit(void* Obj)
	{
		((ELStatsUtility_eventAddSSPlayCount_Parms*)Obj)->bIngestEOS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSPlayCount_Statics::NewProp_bIngestEOS = { "bIngestEOS", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStatsUtility_eventAddSSPlayCount_Parms), &Z_Construct_UFunction_UELStatsUtility_AddSSPlayCount_Statics::NewProp_bIngestEOS_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSPlayCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddSSPlayCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_AddSSPlayCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSPlayCount_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSPlayCount_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSPlayCount_Statics::NewProp_bIngestEOS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSPlayCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_AddSSPlayCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_AddSSPlayCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "AddSSPlayCount", nullptr, nullptr, sizeof(ELStatsUtility_eventAddSSPlayCount_Parms), Z_Construct_UFunction_UELStatsUtility_AddSSPlayCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddSSPlayCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_AddSSPlayCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddSSPlayCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_AddSSPlayCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_AddSSPlayCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_AddSSStarCount_Statics
	{
		struct ELStatsUtility_eventAddSSStarCount_Parms
		{
			const UObject* WorldContextObject;
			int32 Star;
			int32 Value;
			bool bIngestEOS;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Star;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_bIngestEOS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIngestEOS;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_AddSSStarCount_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSStarCount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddSSStarCount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_AddSSStarCount_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddSSStarCount_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSStarCount_Statics::NewProp_Star = { "Star", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddSSStarCount_Parms, Star), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSStarCount_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddSSStarCount_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELStatsUtility_AddSSStarCount_Statics::NewProp_bIngestEOS_SetBit(void* Obj)
	{
		((ELStatsUtility_eventAddSSStarCount_Parms*)Obj)->bIngestEOS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSStarCount_Statics::NewProp_bIngestEOS = { "bIngestEOS", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStatsUtility_eventAddSSStarCount_Parms), &Z_Construct_UFunction_UELStatsUtility_AddSSStarCount_Statics::NewProp_bIngestEOS_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSStarCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddSSStarCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_AddSSStarCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSStarCount_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSStarCount_Statics::NewProp_Star,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSStarCount_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSStarCount_Statics::NewProp_bIngestEOS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSStarCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_AddSSStarCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_AddSSStarCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "AddSSStarCount", nullptr, nullptr, sizeof(ELStatsUtility_eventAddSSStarCount_Parms), Z_Construct_UFunction_UELStatsUtility_AddSSStarCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddSSStarCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_AddSSStarCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddSSStarCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_AddSSStarCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_AddSSStarCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_AddSSTop5Count_Statics
	{
		struct ELStatsUtility_eventAddSSTop5Count_Parms
		{
			const UObject* WorldContextObject;
			int32 Value;
			bool bIngestEOS;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_bIngestEOS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIngestEOS;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_AddSSTop5Count_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSTop5Count_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddSSTop5Count_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_AddSSTop5Count_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddSSTop5Count_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSTop5Count_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddSSTop5Count_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELStatsUtility_AddSSTop5Count_Statics::NewProp_bIngestEOS_SetBit(void* Obj)
	{
		((ELStatsUtility_eventAddSSTop5Count_Parms*)Obj)->bIngestEOS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSTop5Count_Statics::NewProp_bIngestEOS = { "bIngestEOS", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStatsUtility_eventAddSSTop5Count_Parms), &Z_Construct_UFunction_UELStatsUtility_AddSSTop5Count_Statics::NewProp_bIngestEOS_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSTop5Count_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddSSTop5Count_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_AddSSTop5Count_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSTop5Count_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSTop5Count_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSTop5Count_Statics::NewProp_bIngestEOS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSTop5Count_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_AddSSTop5Count_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_AddSSTop5Count_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "AddSSTop5Count", nullptr, nullptr, sizeof(ELStatsUtility_eventAddSSTop5Count_Parms), Z_Construct_UFunction_UELStatsUtility_AddSSTop5Count_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddSSTop5Count_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_AddSSTop5Count_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddSSTop5Count_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_AddSSTop5Count()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_AddSSTop5Count_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_AddSSTopCount_Statics
	{
		struct ELStatsUtility_eventAddSSTopCount_Parms
		{
			const UObject* WorldContextObject;
			int32 Value;
			bool bIngestEOS;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_bIngestEOS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIngestEOS;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_AddSSTopCount_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSTopCount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddSSTopCount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_AddSSTopCount_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddSSTopCount_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSTopCount_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddSSTopCount_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELStatsUtility_AddSSTopCount_Statics::NewProp_bIngestEOS_SetBit(void* Obj)
	{
		((ELStatsUtility_eventAddSSTopCount_Parms*)Obj)->bIngestEOS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSTopCount_Statics::NewProp_bIngestEOS = { "bIngestEOS", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStatsUtility_eventAddSSTopCount_Parms), &Z_Construct_UFunction_UELStatsUtility_AddSSTopCount_Statics::NewProp_bIngestEOS_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSTopCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddSSTopCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_AddSSTopCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSTopCount_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSTopCount_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSTopCount_Statics::NewProp_bIngestEOS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSTopCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_AddSSTopCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_AddSSTopCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "AddSSTopCount", nullptr, nullptr, sizeof(ELStatsUtility_eventAddSSTopCount_Parms), Z_Construct_UFunction_UELStatsUtility_AddSSTopCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddSSTopCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_AddSSTopCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddSSTopCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_AddSSTopCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_AddSSTopCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_AddSSTotalScore_Statics
	{
		struct ELStatsUtility_eventAddSSTotalScore_Parms
		{
			const UObject* WorldContextObject;
			int32 Value;
			bool bIngestEOS;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_bIngestEOS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIngestEOS;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_AddSSTotalScore_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSTotalScore_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddSSTotalScore_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_AddSSTotalScore_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddSSTotalScore_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSTotalScore_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddSSTotalScore_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELStatsUtility_AddSSTotalScore_Statics::NewProp_bIngestEOS_SetBit(void* Obj)
	{
		((ELStatsUtility_eventAddSSTotalScore_Parms*)Obj)->bIngestEOS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSTotalScore_Statics::NewProp_bIngestEOS = { "bIngestEOS", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStatsUtility_eventAddSSTotalScore_Parms), &Z_Construct_UFunction_UELStatsUtility_AddSSTotalScore_Statics::NewProp_bIngestEOS_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSTotalScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddSSTotalScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_AddSSTotalScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSTotalScore_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSTotalScore_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSTotalScore_Statics::NewProp_bIngestEOS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSTotalScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_AddSSTotalScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_AddSSTotalScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "AddSSTotalScore", nullptr, nullptr, sizeof(ELStatsUtility_eventAddSSTotalScore_Parms), Z_Construct_UFunction_UELStatsUtility_AddSSTotalScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddSSTotalScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_AddSSTotalScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddSSTotalScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_AddSSTotalScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_AddSSTotalScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_AddSSWrestlerCount_Statics
	{
		struct ELStatsUtility_eventAddSSWrestlerCount_Parms
		{
			const UObject* WorldContextObject;
			EWrestlerID_N WrestlerID;
			EGender Gender;
			int32 Value;
			bool bIngestEOS;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Gender_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Gender;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_bIngestEOS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIngestEOS;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_AddSSWrestlerCount_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSWrestlerCount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddSSWrestlerCount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_AddSSWrestlerCount_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddSSWrestlerCount_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSWrestlerCount_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSWrestlerCount_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddSSWrestlerCount_Parms, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSWrestlerCount_Statics::NewProp_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSWrestlerCount_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddSSWrestlerCount_Parms, Gender), Z_Construct_UEnum_ELITE_Core_EGender, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSWrestlerCount_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddSSWrestlerCount_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELStatsUtility_AddSSWrestlerCount_Statics::NewProp_bIngestEOS_SetBit(void* Obj)
	{
		((ELStatsUtility_eventAddSSWrestlerCount_Parms*)Obj)->bIngestEOS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSWrestlerCount_Statics::NewProp_bIngestEOS = { "bIngestEOS", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStatsUtility_eventAddSSWrestlerCount_Parms), &Z_Construct_UFunction_UELStatsUtility_AddSSWrestlerCount_Statics::NewProp_bIngestEOS_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_AddSSWrestlerCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddSSWrestlerCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_AddSSWrestlerCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSWrestlerCount_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSWrestlerCount_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSWrestlerCount_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSWrestlerCount_Statics::NewProp_Gender_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSWrestlerCount_Statics::NewProp_Gender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSWrestlerCount_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSWrestlerCount_Statics::NewProp_bIngestEOS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddSSWrestlerCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_AddSSWrestlerCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_AddSSWrestlerCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "AddSSWrestlerCount", nullptr, nullptr, sizeof(ELStatsUtility_eventAddSSWrestlerCount_Parms), Z_Construct_UFunction_UELStatsUtility_AddSSWrestlerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddSSWrestlerCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_AddSSWrestlerCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddSSWrestlerCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_AddSSWrestlerCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_AddSSWrestlerCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_AddStat_Statics
	{
		struct ELStatsUtility_eventAddStat_Parms
		{
			const UObject* WorldContextObject;
			FString Name;
			int32 Value;
			bool bIngestEOS;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_bIngestEOS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIngestEOS;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_AddStat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_AddStat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddStat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_AddStat_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddStat_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_AddStat_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELStatsUtility_AddStat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddStat_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_AddStat_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddStat_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_AddStat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddStat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELStatsUtility_AddStat_Statics::NewProp_bIngestEOS_SetBit(void* Obj)
	{
		((ELStatsUtility_eventAddStat_Parms*)Obj)->bIngestEOS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStatsUtility_AddStat_Statics::NewProp_bIngestEOS = { "bIngestEOS", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStatsUtility_eventAddStat_Parms), &Z_Construct_UFunction_UELStatsUtility_AddStat_Statics::NewProp_bIngestEOS_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_AddStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddStat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_AddStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddStat_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddStat_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddStat_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddStat_Statics::NewProp_bIngestEOS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_AddStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_AddStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "AddStat", nullptr, nullptr, sizeof(ELStatsUtility_eventAddStat_Parms), Z_Construct_UFunction_UELStatsUtility_AddStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_AddStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_AddStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_AddStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_AddWrestlerStat_Statics
	{
		struct ELStatsUtility_eventAddWrestlerStat_Parms
		{
			const UObject* WorldContextObject;
			EELWrestlerStat Stat;
			EWrestlerID_N WrestlerID;
			int32 Value;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Stat_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Stat;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_AddWrestlerStat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_AddWrestlerStat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddWrestlerStat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_AddWrestlerStat_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddWrestlerStat_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELStatsUtility_AddWrestlerStat_Statics::NewProp_Stat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELStatsUtility_AddWrestlerStat_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddWrestlerStat_Parms, Stat), Z_Construct_UEnum_ABP_200508_EELWrestlerStat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELStatsUtility_AddWrestlerStat_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELStatsUtility_AddWrestlerStat_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddWrestlerStat_Parms, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_AddWrestlerStat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddWrestlerStat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_AddWrestlerStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventAddWrestlerStat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_AddWrestlerStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddWrestlerStat_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddWrestlerStat_Statics::NewProp_Stat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddWrestlerStat_Statics::NewProp_Stat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddWrestlerStat_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddWrestlerStat_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddWrestlerStat_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_AddWrestlerStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_AddWrestlerStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_AddWrestlerStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "AddWrestlerStat", nullptr, nullptr, sizeof(ELStatsUtility_eventAddWrestlerStat_Parms), Z_Construct_UFunction_UELStatsUtility_AddWrestlerStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddWrestlerStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_AddWrestlerStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_AddWrestlerStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_AddWrestlerStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_AddWrestlerStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_ClearCheatPenalty_Statics
	{
		struct ELStatsUtility_eventClearCheatPenalty_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_ClearCheatPenalty_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_ClearCheatPenalty_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventClearCheatPenalty_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_ClearCheatPenalty_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_ClearCheatPenalty_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELStatsUtility_ClearCheatPenalty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELStatsUtility_eventClearCheatPenalty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStatsUtility_ClearCheatPenalty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStatsUtility_eventClearCheatPenalty_Parms), &Z_Construct_UFunction_UELStatsUtility_ClearCheatPenalty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_ClearCheatPenalty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_ClearCheatPenalty_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_ClearCheatPenalty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_ClearCheatPenalty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_ClearCheatPenalty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "ClearCheatPenalty", nullptr, nullptr, sizeof(ELStatsUtility_eventClearCheatPenalty_Parms), Z_Construct_UFunction_UELStatsUtility_ClearCheatPenalty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_ClearCheatPenalty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_ClearCheatPenalty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_ClearCheatPenalty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_ClearCheatPenalty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_ClearCheatPenalty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_GetBattlePassTotalPointStat_Statics
	{
		struct ELStatsUtility_eventGetBattlePassTotalPointStat_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetBattlePassTotalPointStat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_GetBattlePassTotalPointStat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetBattlePassTotalPointStat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetBattlePassTotalPointStat_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetBattlePassTotalPointStat_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_GetBattlePassTotalPointStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetBattlePassTotalPointStat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_GetBattlePassTotalPointStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetBattlePassTotalPointStat_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetBattlePassTotalPointStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetBattlePassTotalPointStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_GetBattlePassTotalPointStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "GetBattlePassTotalPointStat", nullptr, nullptr, sizeof(ELStatsUtility_eventGetBattlePassTotalPointStat_Parms), Z_Construct_UFunction_UELStatsUtility_GetBattlePassTotalPointStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetBattlePassTotalPointStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetBattlePassTotalPointStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetBattlePassTotalPointStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_GetBattlePassTotalPointStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_GetBattlePassTotalPointStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_GetCasinoBattleRoyaleLastWinnerStat_Statics
	{
		struct ELStatsUtility_eventGetCasinoBattleRoyaleLastWinnerStat_Parms
		{
			const UObject* WorldContextObject;
			EWrestlerID_N ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetCasinoBattleRoyaleLastWinnerStat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_GetCasinoBattleRoyaleLastWinnerStat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetCasinoBattleRoyaleLastWinnerStat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetCasinoBattleRoyaleLastWinnerStat_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetCasinoBattleRoyaleLastWinnerStat_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELStatsUtility_GetCasinoBattleRoyaleLastWinnerStat_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELStatsUtility_GetCasinoBattleRoyaleLastWinnerStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetCasinoBattleRoyaleLastWinnerStat_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_GetCasinoBattleRoyaleLastWinnerStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetCasinoBattleRoyaleLastWinnerStat_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetCasinoBattleRoyaleLastWinnerStat_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetCasinoBattleRoyaleLastWinnerStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetCasinoBattleRoyaleLastWinnerStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_GetCasinoBattleRoyaleLastWinnerStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "GetCasinoBattleRoyaleLastWinnerStat", nullptr, nullptr, sizeof(ELStatsUtility_eventGetCasinoBattleRoyaleLastWinnerStat_Parms), Z_Construct_UFunction_UELStatsUtility_GetCasinoBattleRoyaleLastWinnerStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetCasinoBattleRoyaleLastWinnerStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetCasinoBattleRoyaleLastWinnerStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetCasinoBattleRoyaleLastWinnerStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_GetCasinoBattleRoyaleLastWinnerStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_GetCasinoBattleRoyaleLastWinnerStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_GetDisconnectionCount_Statics
	{
		struct ELStatsUtility_eventGetDisconnectionCount_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetDisconnectionCount_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_GetDisconnectionCount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetDisconnectionCount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetDisconnectionCount_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetDisconnectionCount_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_GetDisconnectionCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetDisconnectionCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_GetDisconnectionCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetDisconnectionCount_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetDisconnectionCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetDisconnectionCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_GetDisconnectionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "GetDisconnectionCount", nullptr, nullptr, sizeof(ELStatsUtility_eventGetDisconnectionCount_Parms), Z_Construct_UFunction_UELStatsUtility_GetDisconnectionCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetDisconnectionCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetDisconnectionCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetDisconnectionCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_GetDisconnectionCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_GetDisconnectionCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_GetDisconnectionLevel_Statics
	{
		struct ELStatsUtility_eventGetDisconnectionLevel_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetDisconnectionLevel_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_GetDisconnectionLevel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetDisconnectionLevel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetDisconnectionLevel_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetDisconnectionLevel_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_GetDisconnectionLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetDisconnectionLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_GetDisconnectionLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetDisconnectionLevel_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetDisconnectionLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetDisconnectionLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_GetDisconnectionLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "GetDisconnectionLevel", nullptr, nullptr, sizeof(ELStatsUtility_eventGetDisconnectionLevel_Parms), Z_Construct_UFunction_UELStatsUtility_GetDisconnectionLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetDisconnectionLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetDisconnectionLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetDisconnectionLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_GetDisconnectionLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_GetDisconnectionLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_GetDisconnectionPenaltyCount_Statics
	{
		struct ELStatsUtility_eventGetDisconnectionPenaltyCount_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetDisconnectionPenaltyCount_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_GetDisconnectionPenaltyCount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetDisconnectionPenaltyCount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetDisconnectionPenaltyCount_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetDisconnectionPenaltyCount_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_GetDisconnectionPenaltyCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetDisconnectionPenaltyCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_GetDisconnectionPenaltyCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetDisconnectionPenaltyCount_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetDisconnectionPenaltyCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetDisconnectionPenaltyCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_GetDisconnectionPenaltyCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "GetDisconnectionPenaltyCount", nullptr, nullptr, sizeof(ELStatsUtility_eventGetDisconnectionPenaltyCount_Parms), Z_Construct_UFunction_UELStatsUtility_GetDisconnectionPenaltyCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetDisconnectionPenaltyCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetDisconnectionPenaltyCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetDisconnectionPenaltyCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_GetDisconnectionPenaltyCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_GetDisconnectionPenaltyCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_GetDisconnectionStats_Statics
	{
		struct ELStatsUtility_eventGetDisconnectionStats_Parms
		{
			const UObject* WorldContextObject;
			int32 MatchCount;
			int32 DisconnectCount;
			int32 LatestMatchCount;
			int32 LatestDisconnectCount;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MatchCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DisconnectCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LatestMatchCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LatestDisconnectCount;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetDisconnectionStats_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_GetDisconnectionStats_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetDisconnectionStats_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetDisconnectionStats_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetDisconnectionStats_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_GetDisconnectionStats_Statics::NewProp_MatchCount = { "MatchCount", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetDisconnectionStats_Parms, MatchCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_GetDisconnectionStats_Statics::NewProp_DisconnectCount = { "DisconnectCount", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetDisconnectionStats_Parms, DisconnectCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_GetDisconnectionStats_Statics::NewProp_LatestMatchCount = { "LatestMatchCount", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetDisconnectionStats_Parms, LatestMatchCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_GetDisconnectionStats_Statics::NewProp_LatestDisconnectCount = { "LatestDisconnectCount", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetDisconnectionStats_Parms, LatestDisconnectCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELStatsUtility_GetDisconnectionStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetDisconnectionStats_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_GetDisconnectionStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetDisconnectionStats_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetDisconnectionStats_Statics::NewProp_MatchCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetDisconnectionStats_Statics::NewProp_DisconnectCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetDisconnectionStats_Statics::NewProp_LatestMatchCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetDisconnectionStats_Statics::NewProp_LatestDisconnectCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetDisconnectionStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetDisconnectionStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_GetDisconnectionStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "GetDisconnectionStats", nullptr, nullptr, sizeof(ELStatsUtility_eventGetDisconnectionStats_Parms), Z_Construct_UFunction_UELStatsUtility_GetDisconnectionStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetDisconnectionStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetDisconnectionStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetDisconnectionStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_GetDisconnectionStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_GetDisconnectionStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_GetELStats_Statics
	{
		struct ELStatsUtility_eventGetELStats_Parms
		{
			const UObject* WorldContextObject;
			UELStats* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetELStats_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_GetELStats_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetELStats_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetELStats_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetELStats_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_GetELStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetELStats_Parms, ReturnValue), Z_Construct_UClass_UELStats_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_GetELStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetELStats_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetELStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetELStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_GetELStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "GetELStats", nullptr, nullptr, sizeof(ELStatsUtility_eventGetELStats_Parms), Z_Construct_UFunction_UELStatsUtility_GetELStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetELStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetELStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetELStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_GetELStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_GetELStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_GetGlobalStat_Statics
	{
		struct ELStatsUtility_eventGetGlobalStat_Parms
		{
			const UObject* WorldContextObject;
			EELGlobalStat Stat;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Stat_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Stat;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetGlobalStat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_GetGlobalStat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetGlobalStat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetGlobalStat_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetGlobalStat_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELStatsUtility_GetGlobalStat_Statics::NewProp_Stat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELStatsUtility_GetGlobalStat_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetGlobalStat_Parms, Stat), Z_Construct_UEnum_ABP_200508_EELGlobalStat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_GetGlobalStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetGlobalStat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_GetGlobalStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetGlobalStat_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetGlobalStat_Statics::NewProp_Stat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetGlobalStat_Statics::NewProp_Stat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetGlobalStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetGlobalStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_GetGlobalStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "GetGlobalStat", nullptr, nullptr, sizeof(ELStatsUtility_eventGetGlobalStat_Parms), Z_Construct_UFunction_UELStatsUtility_GetGlobalStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetGlobalStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetGlobalStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetGlobalStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_GetGlobalStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_GetGlobalStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_GetPenaltyDisconnectionCount_Statics
	{
		struct ELStatsUtility_eventGetPenaltyDisconnectionCount_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetPenaltyDisconnectionCount_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_GetPenaltyDisconnectionCount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetPenaltyDisconnectionCount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetPenaltyDisconnectionCount_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetPenaltyDisconnectionCount_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_GetPenaltyDisconnectionCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetPenaltyDisconnectionCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_GetPenaltyDisconnectionCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetPenaltyDisconnectionCount_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetPenaltyDisconnectionCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetPenaltyDisconnectionCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_GetPenaltyDisconnectionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "GetPenaltyDisconnectionCount", nullptr, nullptr, sizeof(ELStatsUtility_eventGetPenaltyDisconnectionCount_Parms), Z_Construct_UFunction_UELStatsUtility_GetPenaltyDisconnectionCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetPenaltyDisconnectionCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetPenaltyDisconnectionCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetPenaltyDisconnectionCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_GetPenaltyDisconnectionCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_GetPenaltyDisconnectionCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_GetPlatformMaxStats_Statics
	{
		struct ELStatsUtility_eventGetPlatformMaxStats_Parms
		{
			const UObject* WorldContextObject;
			FString StatName;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetPlatformMaxStats_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_GetPlatformMaxStats_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetPlatformMaxStats_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetPlatformMaxStats_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetPlatformMaxStats_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetPlatformMaxStats_Statics::NewProp_StatName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELStatsUtility_GetPlatformMaxStats_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetPlatformMaxStats_Parms, StatName), METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetPlatformMaxStats_Statics::NewProp_StatName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetPlatformMaxStats_Statics::NewProp_StatName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_GetPlatformMaxStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetPlatformMaxStats_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_GetPlatformMaxStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetPlatformMaxStats_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetPlatformMaxStats_Statics::NewProp_StatName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetPlatformMaxStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetPlatformMaxStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_GetPlatformMaxStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "GetPlatformMaxStats", nullptr, nullptr, sizeof(ELStatsUtility_eventGetPlatformMaxStats_Parms), Z_Construct_UFunction_UELStatsUtility_GetPlatformMaxStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetPlatformMaxStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetPlatformMaxStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetPlatformMaxStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_GetPlatformMaxStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_GetPlatformMaxStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_GetPlatformPostfix_Statics
	{
		struct ELStatsUtility_eventGetPlatformPostfix_Parms
		{
			const UObject* WorldContextObject;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetPlatformPostfix_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_GetPlatformPostfix_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetPlatformPostfix_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetPlatformPostfix_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetPlatformPostfix_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELStatsUtility_GetPlatformPostfix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetPlatformPostfix_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_GetPlatformPostfix_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetPlatformPostfix_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetPlatformPostfix_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetPlatformPostfix_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_GetPlatformPostfix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "GetPlatformPostfix", nullptr, nullptr, sizeof(ELStatsUtility_eventGetPlatformPostfix_Parms), Z_Construct_UFunction_UELStatsUtility_GetPlatformPostfix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetPlatformPostfix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetPlatformPostfix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetPlatformPostfix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_GetPlatformPostfix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_GetPlatformPostfix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_GetPlayerRank_Statics
	{
		struct ELStatsUtility_eventGetPlayerRank_Parms
		{
			const UObject* WorldContextObject;
			int32 Rank;
			int32 RankPoint;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Rank;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RankPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetPlayerRank_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_GetPlayerRank_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetPlayerRank_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetPlayerRank_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetPlayerRank_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_GetPlayerRank_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetPlayerRank_Parms, Rank), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_GetPlayerRank_Statics::NewProp_RankPoint = { "RankPoint", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetPlayerRank_Parms, RankPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_GetPlayerRank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetPlayerRank_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetPlayerRank_Statics::NewProp_Rank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetPlayerRank_Statics::NewProp_RankPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetPlayerRank_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_GetPlayerRank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "GetPlayerRank", nullptr, nullptr, sizeof(ELStatsUtility_eventGetPlayerRank_Parms), Z_Construct_UFunction_UELStatsUtility_GetPlayerRank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetPlayerRank_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetPlayerRank_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetPlayerRank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_GetPlayerRank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_GetPlayerRank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_GetSpecialStat_Statics
	{
		struct ELStatsUtility_eventGetSpecialStat_Parms
		{
			const UObject* WorldContextObject;
			EELSpecialStat Stat;
			FString ParamName;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Stat_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Stat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ParamName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetSpecialStat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_GetSpecialStat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetSpecialStat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetSpecialStat_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSpecialStat_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELStatsUtility_GetSpecialStat_Statics::NewProp_Stat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELStatsUtility_GetSpecialStat_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetSpecialStat_Parms, Stat), Z_Construct_UEnum_ABP_200508_EELSpecialStat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetSpecialStat_Statics::NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELStatsUtility_GetSpecialStat_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetSpecialStat_Parms, ParamName), METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetSpecialStat_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSpecialStat_Statics::NewProp_ParamName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_GetSpecialStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetSpecialStat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_GetSpecialStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSpecialStat_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSpecialStat_Statics::NewProp_Stat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSpecialStat_Statics::NewProp_Stat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSpecialStat_Statics::NewProp_ParamName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSpecialStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetSpecialStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_GetSpecialStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "GetSpecialStat", nullptr, nullptr, sizeof(ELStatsUtility_eventGetSpecialStat_Parms), Z_Construct_UFunction_UELStatsUtility_GetSpecialStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSpecialStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetSpecialStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSpecialStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_GetSpecialStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_GetSpecialStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_GetSSAttentionPoint_Statics
	{
		struct ELStatsUtility_eventGetSSAttentionPoint_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetSSAttentionPoint_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_GetSSAttentionPoint_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetSSAttentionPoint_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetSSAttentionPoint_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSAttentionPoint_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_GetSSAttentionPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetSSAttentionPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_GetSSAttentionPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSSAttentionPoint_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSSAttentionPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetSSAttentionPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_GetSSAttentionPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "GetSSAttentionPoint", nullptr, nullptr, sizeof(ELStatsUtility_eventGetSSAttentionPoint_Parms), Z_Construct_UFunction_UELStatsUtility_GetSSAttentionPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSAttentionPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetSSAttentionPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSAttentionPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_GetSSAttentionPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_GetSSAttentionPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_GetSSFeverCount_Statics
	{
		struct ELStatsUtility_eventGetSSFeverCount_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetSSFeverCount_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_GetSSFeverCount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetSSFeverCount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetSSFeverCount_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSFeverCount_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_GetSSFeverCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetSSFeverCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_GetSSFeverCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSSFeverCount_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSSFeverCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetSSFeverCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_GetSSFeverCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "GetSSFeverCount", nullptr, nullptr, sizeof(ELStatsUtility_eventGetSSFeverCount_Parms), Z_Construct_UFunction_UELStatsUtility_GetSSFeverCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSFeverCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetSSFeverCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSFeverCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_GetSSFeverCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_GetSSFeverCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_GetSSInGameFlag_Statics
	{
		struct ELStatsUtility_eventGetSSInGameFlag_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetSSInGameFlag_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_GetSSInGameFlag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetSSInGameFlag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetSSInGameFlag_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSInGameFlag_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_GetSSInGameFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetSSInGameFlag_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_GetSSInGameFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSSInGameFlag_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSSInGameFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetSSInGameFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_GetSSInGameFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "GetSSInGameFlag", nullptr, nullptr, sizeof(ELStatsUtility_eventGetSSInGameFlag_Parms), Z_Construct_UFunction_UELStatsUtility_GetSSInGameFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSInGameFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetSSInGameFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSInGameFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_GetSSInGameFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_GetSSInGameFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_GetSSKillCount_Statics
	{
		struct ELStatsUtility_eventGetSSKillCount_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetSSKillCount_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_GetSSKillCount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetSSKillCount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetSSKillCount_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSKillCount_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_GetSSKillCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetSSKillCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_GetSSKillCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSSKillCount_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSSKillCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetSSKillCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_GetSSKillCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "GetSSKillCount", nullptr, nullptr, sizeof(ELStatsUtility_eventGetSSKillCount_Parms), Z_Construct_UFunction_UELStatsUtility_GetSSKillCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSKillCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetSSKillCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSKillCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_GetSSKillCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_GetSSKillCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_GetSSMaxScore_Statics
	{
		struct ELStatsUtility_eventGetSSMaxScore_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetSSMaxScore_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_GetSSMaxScore_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetSSMaxScore_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetSSMaxScore_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSMaxScore_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_GetSSMaxScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetSSMaxScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_GetSSMaxScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSSMaxScore_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSSMaxScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetSSMaxScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_GetSSMaxScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "GetSSMaxScore", nullptr, nullptr, sizeof(ELStatsUtility_eventGetSSMaxScore_Parms), Z_Construct_UFunction_UELStatsUtility_GetSSMaxScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSMaxScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetSSMaxScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSMaxScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_GetSSMaxScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_GetSSMaxScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_GetSSPlayCount_Statics
	{
		struct ELStatsUtility_eventGetSSPlayCount_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetSSPlayCount_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_GetSSPlayCount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetSSPlayCount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetSSPlayCount_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSPlayCount_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_GetSSPlayCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetSSPlayCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_GetSSPlayCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSSPlayCount_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSSPlayCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetSSPlayCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_GetSSPlayCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "GetSSPlayCount", nullptr, nullptr, sizeof(ELStatsUtility_eventGetSSPlayCount_Parms), Z_Construct_UFunction_UELStatsUtility_GetSSPlayCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSPlayCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetSSPlayCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSPlayCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_GetSSPlayCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_GetSSPlayCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_GetSSRankPoint_Statics
	{
		struct ELStatsUtility_eventGetSSRankPoint_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetSSRankPoint_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_GetSSRankPoint_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetSSRankPoint_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetSSRankPoint_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSRankPoint_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_GetSSRankPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetSSRankPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_GetSSRankPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSSRankPoint_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSSRankPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetSSRankPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_GetSSRankPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "GetSSRankPoint", nullptr, nullptr, sizeof(ELStatsUtility_eventGetSSRankPoint_Parms), Z_Construct_UFunction_UELStatsUtility_GetSSRankPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSRankPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetSSRankPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSRankPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_GetSSRankPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_GetSSRankPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_GetSSStarCount_Statics
	{
		struct ELStatsUtility_eventGetSSStarCount_Parms
		{
			const UObject* WorldContextObject;
			int32 Star;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Star;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetSSStarCount_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_GetSSStarCount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetSSStarCount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetSSStarCount_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSStarCount_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_GetSSStarCount_Statics::NewProp_Star = { "Star", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetSSStarCount_Parms, Star), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_GetSSStarCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetSSStarCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_GetSSStarCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSSStarCount_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSSStarCount_Statics::NewProp_Star,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSSStarCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetSSStarCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_GetSSStarCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "GetSSStarCount", nullptr, nullptr, sizeof(ELStatsUtility_eventGetSSStarCount_Parms), Z_Construct_UFunction_UELStatsUtility_GetSSStarCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSStarCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetSSStarCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSStarCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_GetSSStarCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_GetSSStarCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_GetSSStarCountName_Statics
	{
		struct ELStatsUtility_eventGetSSStarCountName_Parms
		{
			int32 Star;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Star;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_GetSSStarCountName_Statics::NewProp_Star = { "Star", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetSSStarCountName_Parms, Star), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELStatsUtility_GetSSStarCountName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetSSStarCountName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_GetSSStarCountName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSSStarCountName_Statics::NewProp_Star,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSSStarCountName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetSSStarCountName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_GetSSStarCountName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "GetSSStarCountName", nullptr, nullptr, sizeof(ELStatsUtility_eventGetSSStarCountName_Parms), Z_Construct_UFunction_UELStatsUtility_GetSSStarCountName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSStarCountName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetSSStarCountName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSStarCountName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_GetSSStarCountName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_GetSSStarCountName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_GetSSTop5Count_Statics
	{
		struct ELStatsUtility_eventGetSSTop5Count_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetSSTop5Count_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_GetSSTop5Count_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetSSTop5Count_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetSSTop5Count_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSTop5Count_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_GetSSTop5Count_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetSSTop5Count_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_GetSSTop5Count_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSSTop5Count_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSSTop5Count_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetSSTop5Count_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_GetSSTop5Count_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "GetSSTop5Count", nullptr, nullptr, sizeof(ELStatsUtility_eventGetSSTop5Count_Parms), Z_Construct_UFunction_UELStatsUtility_GetSSTop5Count_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSTop5Count_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetSSTop5Count_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSTop5Count_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_GetSSTop5Count()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_GetSSTop5Count_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_GetSSTopCount_Statics
	{
		struct ELStatsUtility_eventGetSSTopCount_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetSSTopCount_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_GetSSTopCount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetSSTopCount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetSSTopCount_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSTopCount_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_GetSSTopCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetSSTopCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_GetSSTopCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSSTopCount_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSSTopCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetSSTopCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_GetSSTopCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "GetSSTopCount", nullptr, nullptr, sizeof(ELStatsUtility_eventGetSSTopCount_Parms), Z_Construct_UFunction_UELStatsUtility_GetSSTopCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSTopCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetSSTopCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSTopCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_GetSSTopCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_GetSSTopCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_GetSSTotalScore_Statics
	{
		struct ELStatsUtility_eventGetSSTotalScore_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetSSTotalScore_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_GetSSTotalScore_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetSSTotalScore_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetSSTotalScore_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSTotalScore_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_GetSSTotalScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetSSTotalScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_GetSSTotalScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSSTotalScore_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSSTotalScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetSSTotalScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_GetSSTotalScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "GetSSTotalScore", nullptr, nullptr, sizeof(ELStatsUtility_eventGetSSTotalScore_Parms), Z_Construct_UFunction_UELStatsUtility_GetSSTotalScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSTotalScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetSSTotalScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSTotalScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_GetSSTotalScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_GetSSTotalScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCount_Statics
	{
		struct ELStatsUtility_eventGetSSWrestlerCount_Parms
		{
			const UObject* WorldContextObject;
			EWrestlerID_N WrestlerID;
			EGender Gender;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Gender_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Gender;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCount_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetSSWrestlerCount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCount_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCount_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCount_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCount_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetSSWrestlerCount_Parms, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCount_Statics::NewProp_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCount_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetSSWrestlerCount_Parms, Gender), Z_Construct_UEnum_ELITE_Core_EGender, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetSSWrestlerCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCount_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCount_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCount_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCount_Statics::NewProp_Gender_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCount_Statics::NewProp_Gender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "GetSSWrestlerCount", nullptr, nullptr, sizeof(ELStatsUtility_eventGetSSWrestlerCount_Parms), Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCountName_Statics
	{
		struct ELStatsUtility_eventGetSSWrestlerCountName_Parms
		{
			EWrestlerID_N WrestlerID;
			EGender Gender;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Gender_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Gender;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCountName_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCountName_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetSSWrestlerCountName_Parms, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCountName_Statics::NewProp_Gender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCountName_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetSSWrestlerCountName_Parms, Gender), Z_Construct_UEnum_ELITE_Core_EGender, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCountName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetSSWrestlerCountName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCountName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCountName_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCountName_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCountName_Statics::NewProp_Gender_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCountName_Statics::NewProp_Gender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCountName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCountName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCountName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "GetSSWrestlerCountName", nullptr, nullptr, sizeof(ELStatsUtility_eventGetSSWrestlerCountName_Parms), Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCountName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCountName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCountName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCountName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCountName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCountName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_GetStat_Statics
	{
		struct ELStatsUtility_eventGetStat_Parms
		{
			const UObject* WorldContextObject;
			FString Name;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetStat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_GetStat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetStat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetStat_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetStat_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetStat_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELStatsUtility_GetStat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetStat_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetStat_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetStat_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_GetStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetStat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_GetStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetStat_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetStat_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_GetStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "GetStat", nullptr, nullptr, sizeof(ELStatsUtility_eventGetStat_Parms), Z_Construct_UFunction_UELStatsUtility_GetStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_GetStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_GetStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_GetWarningDisconnectionCount_Statics
	{
		struct ELStatsUtility_eventGetWarningDisconnectionCount_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetWarningDisconnectionCount_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_GetWarningDisconnectionCount_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetWarningDisconnectionCount_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetWarningDisconnectionCount_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetWarningDisconnectionCount_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_GetWarningDisconnectionCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetWarningDisconnectionCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_GetWarningDisconnectionCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetWarningDisconnectionCount_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetWarningDisconnectionCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetWarningDisconnectionCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_GetWarningDisconnectionCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "GetWarningDisconnectionCount", nullptr, nullptr, sizeof(ELStatsUtility_eventGetWarningDisconnectionCount_Parms), Z_Construct_UFunction_UELStatsUtility_GetWarningDisconnectionCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetWarningDisconnectionCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetWarningDisconnectionCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetWarningDisconnectionCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_GetWarningDisconnectionCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_GetWarningDisconnectionCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_GetWrestlerStat_Statics
	{
		struct ELStatsUtility_eventGetWrestlerStat_Parms
		{
			const UObject* WorldContextObject;
			EELWrestlerStat Stat;
			EWrestlerID_N WrestlerID;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Stat_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Stat;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetWrestlerStat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_GetWrestlerStat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetWrestlerStat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetWrestlerStat_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetWrestlerStat_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELStatsUtility_GetWrestlerStat_Statics::NewProp_Stat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELStatsUtility_GetWrestlerStat_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetWrestlerStat_Parms, Stat), Z_Construct_UEnum_ABP_200508_EELWrestlerStat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELStatsUtility_GetWrestlerStat_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELStatsUtility_GetWrestlerStat_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetWrestlerStat_Parms, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_GetWrestlerStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventGetWrestlerStat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_GetWrestlerStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetWrestlerStat_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetWrestlerStat_Statics::NewProp_Stat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetWrestlerStat_Statics::NewProp_Stat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetWrestlerStat_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetWrestlerStat_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_GetWrestlerStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_GetWrestlerStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_GetWrestlerStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "GetWrestlerStat", nullptr, nullptr, sizeof(ELStatsUtility_eventGetWrestlerStat_Parms), Z_Construct_UFunction_UELStatsUtility_GetWrestlerStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetWrestlerStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_GetWrestlerStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_GetWrestlerStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_GetWrestlerStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_GetWrestlerStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_IngestDirtyStats_Statics
	{
		struct ELStatsUtility_eventIngestDirtyStats_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_IngestDirtyStats_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_IngestDirtyStats_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventIngestDirtyStats_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_IngestDirtyStats_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_IngestDirtyStats_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_IngestDirtyStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventIngestDirtyStats_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_IngestDirtyStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_IngestDirtyStats_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_IngestDirtyStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_IngestDirtyStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_IngestDirtyStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "IngestDirtyStats", nullptr, nullptr, sizeof(ELStatsUtility_eventIngestDirtyStats_Parms), Z_Construct_UFunction_UELStatsUtility_IngestDirtyStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_IngestDirtyStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_IngestDirtyStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_IngestDirtyStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_IngestDirtyStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_IngestDirtyStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_IngestDisconnectionStats_Statics
	{
		struct ELStatsUtility_eventIngestDisconnectionStats_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_IngestDisconnectionStats_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_IngestDisconnectionStats_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventIngestDisconnectionStats_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_IngestDisconnectionStats_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_IngestDisconnectionStats_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELStatsUtility_IngestDisconnectionStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELStatsUtility_eventIngestDisconnectionStats_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStatsUtility_IngestDisconnectionStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStatsUtility_eventIngestDisconnectionStats_Parms), &Z_Construct_UFunction_UELStatsUtility_IngestDisconnectionStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_IngestDisconnectionStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_IngestDisconnectionStats_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_IngestDisconnectionStats_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_IngestDisconnectionStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_IngestDisconnectionStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "IngestDisconnectionStats", nullptr, nullptr, sizeof(ELStatsUtility_eventIngestDisconnectionStats_Parms), Z_Construct_UFunction_UELStatsUtility_IngestDisconnectionStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_IngestDisconnectionStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_IngestDisconnectionStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_IngestDisconnectionStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_IngestDisconnectionStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_IngestDisconnectionStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_MaxGlobalStat_Statics
	{
		struct ELStatsUtility_eventMaxGlobalStat_Parms
		{
			const UObject* WorldContextObject;
			EELGlobalStat Stat;
			int32 Value;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Stat_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Stat;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_MaxGlobalStat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_MaxGlobalStat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventMaxGlobalStat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_MaxGlobalStat_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_MaxGlobalStat_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELStatsUtility_MaxGlobalStat_Statics::NewProp_Stat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELStatsUtility_MaxGlobalStat_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventMaxGlobalStat_Parms, Stat), Z_Construct_UEnum_ABP_200508_EELGlobalStat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_MaxGlobalStat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventMaxGlobalStat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_MaxGlobalStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventMaxGlobalStat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_MaxGlobalStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_MaxGlobalStat_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_MaxGlobalStat_Statics::NewProp_Stat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_MaxGlobalStat_Statics::NewProp_Stat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_MaxGlobalStat_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_MaxGlobalStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_MaxGlobalStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_MaxGlobalStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "MaxGlobalStat", nullptr, nullptr, sizeof(ELStatsUtility_eventMaxGlobalStat_Parms), Z_Construct_UFunction_UELStatsUtility_MaxGlobalStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_MaxGlobalStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_MaxGlobalStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_MaxGlobalStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_MaxGlobalStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_MaxGlobalStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_MaxStat_Statics
	{
		struct ELStatsUtility_eventMaxStat_Parms
		{
			const UObject* WorldContextObject;
			FString Name;
			int32 Value;
			bool bIngestEOS;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_bIngestEOS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIngestEOS;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_MaxStat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_MaxStat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventMaxStat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_MaxStat_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_MaxStat_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_MaxStat_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELStatsUtility_MaxStat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventMaxStat_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_MaxStat_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_MaxStat_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_MaxStat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventMaxStat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELStatsUtility_MaxStat_Statics::NewProp_bIngestEOS_SetBit(void* Obj)
	{
		((ELStatsUtility_eventMaxStat_Parms*)Obj)->bIngestEOS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStatsUtility_MaxStat_Statics::NewProp_bIngestEOS = { "bIngestEOS", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStatsUtility_eventMaxStat_Parms), &Z_Construct_UFunction_UELStatsUtility_MaxStat_Statics::NewProp_bIngestEOS_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_MaxStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventMaxStat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_MaxStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_MaxStat_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_MaxStat_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_MaxStat_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_MaxStat_Statics::NewProp_bIngestEOS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_MaxStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_MaxStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_MaxStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "MaxStat", nullptr, nullptr, sizeof(ELStatsUtility_eventMaxStat_Parms), Z_Construct_UFunction_UELStatsUtility_MaxStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_MaxStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_MaxStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_MaxStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_MaxStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_MaxStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_MaxWrestlerStat_Statics
	{
		struct ELStatsUtility_eventMaxWrestlerStat_Parms
		{
			const UObject* WorldContextObject;
			EELWrestlerStat Stat;
			EWrestlerID_N WrestlerID;
			int32 Value;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Stat_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Stat;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_MaxWrestlerStat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_MaxWrestlerStat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventMaxWrestlerStat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_MaxWrestlerStat_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_MaxWrestlerStat_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELStatsUtility_MaxWrestlerStat_Statics::NewProp_Stat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELStatsUtility_MaxWrestlerStat_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventMaxWrestlerStat_Parms, Stat), Z_Construct_UEnum_ABP_200508_EELWrestlerStat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELStatsUtility_MaxWrestlerStat_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELStatsUtility_MaxWrestlerStat_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventMaxWrestlerStat_Parms, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_MaxWrestlerStat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventMaxWrestlerStat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_MaxWrestlerStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventMaxWrestlerStat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_MaxWrestlerStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_MaxWrestlerStat_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_MaxWrestlerStat_Statics::NewProp_Stat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_MaxWrestlerStat_Statics::NewProp_Stat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_MaxWrestlerStat_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_MaxWrestlerStat_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_MaxWrestlerStat_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_MaxWrestlerStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_MaxWrestlerStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_MaxWrestlerStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "MaxWrestlerStat", nullptr, nullptr, sizeof(ELStatsUtility_eventMaxWrestlerStat_Parms), Z_Construct_UFunction_UELStatsUtility_MaxWrestlerStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_MaxWrestlerStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_MaxWrestlerStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_MaxWrestlerStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_MaxWrestlerStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_MaxWrestlerStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_MinGlobalStat_Statics
	{
		struct ELStatsUtility_eventMinGlobalStat_Parms
		{
			const UObject* WorldContextObject;
			EELGlobalStat Stat;
			int32 Value;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Stat_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Stat;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_MinGlobalStat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_MinGlobalStat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventMinGlobalStat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_MinGlobalStat_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_MinGlobalStat_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELStatsUtility_MinGlobalStat_Statics::NewProp_Stat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELStatsUtility_MinGlobalStat_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventMinGlobalStat_Parms, Stat), Z_Construct_UEnum_ABP_200508_EELGlobalStat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_MinGlobalStat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventMinGlobalStat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_MinGlobalStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventMinGlobalStat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_MinGlobalStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_MinGlobalStat_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_MinGlobalStat_Statics::NewProp_Stat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_MinGlobalStat_Statics::NewProp_Stat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_MinGlobalStat_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_MinGlobalStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_MinGlobalStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_MinGlobalStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "MinGlobalStat", nullptr, nullptr, sizeof(ELStatsUtility_eventMinGlobalStat_Parms), Z_Construct_UFunction_UELStatsUtility_MinGlobalStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_MinGlobalStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_MinGlobalStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_MinGlobalStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_MinGlobalStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_MinGlobalStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_MinStat_Statics
	{
		struct ELStatsUtility_eventMinStat_Parms
		{
			const UObject* WorldContextObject;
			FString Name;
			int32 Value;
			bool bIngestEOS;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_bIngestEOS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIngestEOS;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_MinStat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_MinStat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventMinStat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_MinStat_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_MinStat_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_MinStat_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELStatsUtility_MinStat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventMinStat_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_MinStat_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_MinStat_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_MinStat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventMinStat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELStatsUtility_MinStat_Statics::NewProp_bIngestEOS_SetBit(void* Obj)
	{
		((ELStatsUtility_eventMinStat_Parms*)Obj)->bIngestEOS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStatsUtility_MinStat_Statics::NewProp_bIngestEOS = { "bIngestEOS", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStatsUtility_eventMinStat_Parms), &Z_Construct_UFunction_UELStatsUtility_MinStat_Statics::NewProp_bIngestEOS_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_MinStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventMinStat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_MinStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_MinStat_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_MinStat_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_MinStat_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_MinStat_Statics::NewProp_bIngestEOS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_MinStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_MinStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_MinStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "MinStat", nullptr, nullptr, sizeof(ELStatsUtility_eventMinStat_Parms), Z_Construct_UFunction_UELStatsUtility_MinStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_MinStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_MinStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_MinStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_MinStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_MinStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_MinWrestlerStat_Statics
	{
		struct ELStatsUtility_eventMinWrestlerStat_Parms
		{
			const UObject* WorldContextObject;
			EELWrestlerStat Stat;
			EWrestlerID_N WrestlerID;
			int32 Value;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Stat_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Stat;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_MinWrestlerStat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_MinWrestlerStat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventMinWrestlerStat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_MinWrestlerStat_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_MinWrestlerStat_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELStatsUtility_MinWrestlerStat_Statics::NewProp_Stat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELStatsUtility_MinWrestlerStat_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventMinWrestlerStat_Parms, Stat), Z_Construct_UEnum_ABP_200508_EELWrestlerStat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELStatsUtility_MinWrestlerStat_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELStatsUtility_MinWrestlerStat_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventMinWrestlerStat_Parms, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_MinWrestlerStat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventMinWrestlerStat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_MinWrestlerStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventMinWrestlerStat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_MinWrestlerStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_MinWrestlerStat_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_MinWrestlerStat_Statics::NewProp_Stat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_MinWrestlerStat_Statics::NewProp_Stat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_MinWrestlerStat_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_MinWrestlerStat_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_MinWrestlerStat_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_MinWrestlerStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_MinWrestlerStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_MinWrestlerStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "MinWrestlerStat", nullptr, nullptr, sizeof(ELStatsUtility_eventMinWrestlerStat_Parms), Z_Construct_UFunction_UELStatsUtility_MinWrestlerStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_MinWrestlerStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_MinWrestlerStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_MinWrestlerStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_MinWrestlerStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_MinWrestlerStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_SetBattlePassTotalPointStat_Statics
	{
		struct ELStatsUtility_eventSetBattlePassTotalPointStat_Parms
		{
			const UObject* WorldContextObject;
			int32 Value;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_SetBattlePassTotalPointStat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_SetBattlePassTotalPointStat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetBattlePassTotalPointStat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_SetBattlePassTotalPointStat_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetBattlePassTotalPointStat_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_SetBattlePassTotalPointStat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetBattlePassTotalPointStat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_SetBattlePassTotalPointStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetBattlePassTotalPointStat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_SetBattlePassTotalPointStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetBattlePassTotalPointStat_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetBattlePassTotalPointStat_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetBattlePassTotalPointStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_SetBattlePassTotalPointStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_SetBattlePassTotalPointStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "SetBattlePassTotalPointStat", nullptr, nullptr, sizeof(ELStatsUtility_eventSetBattlePassTotalPointStat_Parms), Z_Construct_UFunction_UELStatsUtility_SetBattlePassTotalPointStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetBattlePassTotalPointStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_SetBattlePassTotalPointStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetBattlePassTotalPointStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_SetBattlePassTotalPointStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_SetBattlePassTotalPointStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_SetCasinoBattleRoyaleLastWinnerStat_Statics
	{
		struct ELStatsUtility_eventSetCasinoBattleRoyaleLastWinnerStat_Parms
		{
			const UObject* WorldContextObject;
			EWrestlerID_N WrestlerID;
			EWrestlerID_N ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_SetCasinoBattleRoyaleLastWinnerStat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_SetCasinoBattleRoyaleLastWinnerStat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetCasinoBattleRoyaleLastWinnerStat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_SetCasinoBattleRoyaleLastWinnerStat_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetCasinoBattleRoyaleLastWinnerStat_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELStatsUtility_SetCasinoBattleRoyaleLastWinnerStat_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELStatsUtility_SetCasinoBattleRoyaleLastWinnerStat_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetCasinoBattleRoyaleLastWinnerStat_Parms, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELStatsUtility_SetCasinoBattleRoyaleLastWinnerStat_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELStatsUtility_SetCasinoBattleRoyaleLastWinnerStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetCasinoBattleRoyaleLastWinnerStat_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_SetCasinoBattleRoyaleLastWinnerStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetCasinoBattleRoyaleLastWinnerStat_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetCasinoBattleRoyaleLastWinnerStat_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetCasinoBattleRoyaleLastWinnerStat_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetCasinoBattleRoyaleLastWinnerStat_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetCasinoBattleRoyaleLastWinnerStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_SetCasinoBattleRoyaleLastWinnerStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_SetCasinoBattleRoyaleLastWinnerStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "SetCasinoBattleRoyaleLastWinnerStat", nullptr, nullptr, sizeof(ELStatsUtility_eventSetCasinoBattleRoyaleLastWinnerStat_Parms), Z_Construct_UFunction_UELStatsUtility_SetCasinoBattleRoyaleLastWinnerStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetCasinoBattleRoyaleLastWinnerStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_SetCasinoBattleRoyaleLastWinnerStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetCasinoBattleRoyaleLastWinnerStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_SetCasinoBattleRoyaleLastWinnerStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_SetCasinoBattleRoyaleLastWinnerStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_SetCheatPenalty_Statics
	{
		struct ELStatsUtility_eventSetCheatPenalty_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_SetCheatPenalty_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_SetCheatPenalty_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetCheatPenalty_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_SetCheatPenalty_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetCheatPenalty_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELStatsUtility_SetCheatPenalty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELStatsUtility_eventSetCheatPenalty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStatsUtility_SetCheatPenalty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStatsUtility_eventSetCheatPenalty_Parms), &Z_Construct_UFunction_UELStatsUtility_SetCheatPenalty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_SetCheatPenalty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetCheatPenalty_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetCheatPenalty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_SetCheatPenalty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_SetCheatPenalty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "SetCheatPenalty", nullptr, nullptr, sizeof(ELStatsUtility_eventSetCheatPenalty_Parms), Z_Construct_UFunction_UELStatsUtility_SetCheatPenalty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetCheatPenalty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_SetCheatPenalty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetCheatPenalty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_SetCheatPenalty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_SetCheatPenalty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_SetDebugDisconnectionLevel_Statics
	{
		struct ELStatsUtility_eventSetDebugDisconnectionLevel_Parms
		{
			const UObject* WorldContextObject;
			int32 DisconnectLevel;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DisconnectLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_SetDebugDisconnectionLevel_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_SetDebugDisconnectionLevel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetDebugDisconnectionLevel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_SetDebugDisconnectionLevel_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetDebugDisconnectionLevel_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_SetDebugDisconnectionLevel_Statics::NewProp_DisconnectLevel = { "DisconnectLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetDebugDisconnectionLevel_Parms, DisconnectLevel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_SetDebugDisconnectionLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetDebugDisconnectionLevel_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetDebugDisconnectionLevel_Statics::NewProp_DisconnectLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_SetDebugDisconnectionLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_SetDebugDisconnectionLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "SetDebugDisconnectionLevel", nullptr, nullptr, sizeof(ELStatsUtility_eventSetDebugDisconnectionLevel_Parms), Z_Construct_UFunction_UELStatsUtility_SetDebugDisconnectionLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetDebugDisconnectionLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_SetDebugDisconnectionLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetDebugDisconnectionLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_SetDebugDisconnectionLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_SetDebugDisconnectionLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_SetExternalAccountId_Statics
	{
		struct ELStatsUtility_eventSetExternalAccountId_Parms
		{
			const UObject* WorldContextObject;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_SetExternalAccountId_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_SetExternalAccountId_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetExternalAccountId_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_SetExternalAccountId_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetExternalAccountId_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UELStatsUtility_SetExternalAccountId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELStatsUtility_eventSetExternalAccountId_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStatsUtility_SetExternalAccountId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStatsUtility_eventSetExternalAccountId_Parms), &Z_Construct_UFunction_UELStatsUtility_SetExternalAccountId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_SetExternalAccountId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetExternalAccountId_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetExternalAccountId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_SetExternalAccountId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_SetExternalAccountId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "SetExternalAccountId", nullptr, nullptr, sizeof(ELStatsUtility_eventSetExternalAccountId_Parms), Z_Construct_UFunction_UELStatsUtility_SetExternalAccountId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetExternalAccountId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_SetExternalAccountId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetExternalAccountId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_SetExternalAccountId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_SetExternalAccountId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_SetGlobalStat_Statics
	{
		struct ELStatsUtility_eventSetGlobalStat_Parms
		{
			const UObject* WorldContextObject;
			EELGlobalStat Stat;
			int32 Value;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Stat_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Stat;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_SetGlobalStat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_SetGlobalStat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetGlobalStat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_SetGlobalStat_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetGlobalStat_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELStatsUtility_SetGlobalStat_Statics::NewProp_Stat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELStatsUtility_SetGlobalStat_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetGlobalStat_Parms, Stat), Z_Construct_UEnum_ABP_200508_EELGlobalStat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_SetGlobalStat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetGlobalStat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_SetGlobalStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetGlobalStat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_SetGlobalStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetGlobalStat_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetGlobalStat_Statics::NewProp_Stat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetGlobalStat_Statics::NewProp_Stat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetGlobalStat_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetGlobalStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_SetGlobalStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_SetGlobalStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "SetGlobalStat", nullptr, nullptr, sizeof(ELStatsUtility_eventSetGlobalStat_Parms), Z_Construct_UFunction_UELStatsUtility_SetGlobalStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetGlobalStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_SetGlobalStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetGlobalStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_SetGlobalStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_SetGlobalStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_SetPlayerBadgesToStat_Statics
	{
		struct ELStatsUtility_eventSetPlayerBadgesToStat_Parms
		{
			const UObject* WorldContextObject;
			TArray<int32> Badges;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Badges_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Badges_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Badges;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_SetPlayerBadgesToStat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_SetPlayerBadgesToStat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetPlayerBadgesToStat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_SetPlayerBadgesToStat_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetPlayerBadgesToStat_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_SetPlayerBadgesToStat_Statics::NewProp_Badges_Inner = { "Badges", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_SetPlayerBadgesToStat_Statics::NewProp_Badges_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELStatsUtility_SetPlayerBadgesToStat_Statics::NewProp_Badges = { "Badges", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetPlayerBadgesToStat_Parms, Badges), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_SetPlayerBadgesToStat_Statics::NewProp_Badges_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetPlayerBadgesToStat_Statics::NewProp_Badges_MetaData)) };
	void Z_Construct_UFunction_UELStatsUtility_SetPlayerBadgesToStat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELStatsUtility_eventSetPlayerBadgesToStat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStatsUtility_SetPlayerBadgesToStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStatsUtility_eventSetPlayerBadgesToStat_Parms), &Z_Construct_UFunction_UELStatsUtility_SetPlayerBadgesToStat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_SetPlayerBadgesToStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetPlayerBadgesToStat_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetPlayerBadgesToStat_Statics::NewProp_Badges_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetPlayerBadgesToStat_Statics::NewProp_Badges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetPlayerBadgesToStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_SetPlayerBadgesToStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_SetPlayerBadgesToStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "SetPlayerBadgesToStat", nullptr, nullptr, sizeof(ELStatsUtility_eventSetPlayerBadgesToStat_Parms), Z_Construct_UFunction_UELStatsUtility_SetPlayerBadgesToStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetPlayerBadgesToStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_SetPlayerBadgesToStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetPlayerBadgesToStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_SetPlayerBadgesToStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_SetPlayerBadgesToStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_SetPlayerIconToStat_Statics
	{
		struct ELStatsUtility_eventSetPlayerIconToStat_Parms
		{
			const UObject* WorldContextObject;
			int32 PlayerIcon;
			int32 BGIcon;
			FUserProfileColorParam ColorParam;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerIcon;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BGIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorParam;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_SetPlayerIconToStat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_SetPlayerIconToStat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetPlayerIconToStat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_SetPlayerIconToStat_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetPlayerIconToStat_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_SetPlayerIconToStat_Statics::NewProp_PlayerIcon = { "PlayerIcon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetPlayerIconToStat_Parms, PlayerIcon), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_SetPlayerIconToStat_Statics::NewProp_BGIcon = { "BGIcon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetPlayerIconToStat_Parms, BGIcon), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_SetPlayerIconToStat_Statics::NewProp_ColorParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELStatsUtility_SetPlayerIconToStat_Statics::NewProp_ColorParam = { "ColorParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetPlayerIconToStat_Parms, ColorParam), Z_Construct_UScriptStruct_FUserProfileColorParam, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_SetPlayerIconToStat_Statics::NewProp_ColorParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetPlayerIconToStat_Statics::NewProp_ColorParam_MetaData)) };
	void Z_Construct_UFunction_UELStatsUtility_SetPlayerIconToStat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELStatsUtility_eventSetPlayerIconToStat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStatsUtility_SetPlayerIconToStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStatsUtility_eventSetPlayerIconToStat_Parms), &Z_Construct_UFunction_UELStatsUtility_SetPlayerIconToStat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_SetPlayerIconToStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetPlayerIconToStat_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetPlayerIconToStat_Statics::NewProp_PlayerIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetPlayerIconToStat_Statics::NewProp_BGIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetPlayerIconToStat_Statics::NewProp_ColorParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetPlayerIconToStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_SetPlayerIconToStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_SetPlayerIconToStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "SetPlayerIconToStat", nullptr, nullptr, sizeof(ELStatsUtility_eventSetPlayerIconToStat_Parms), Z_Construct_UFunction_UELStatsUtility_SetPlayerIconToStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetPlayerIconToStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_SetPlayerIconToStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetPlayerIconToStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_SetPlayerIconToStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_SetPlayerIconToStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_SetPlayerRank_Statics
	{
		struct ELStatsUtility_eventSetPlayerRank_Parms
		{
			const UObject* WorldContextObject;
			int32 Rank;
			int32 RankPoint;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Rank;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RankPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_SetPlayerRank_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_SetPlayerRank_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetPlayerRank_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_SetPlayerRank_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetPlayerRank_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_SetPlayerRank_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetPlayerRank_Parms, Rank), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_SetPlayerRank_Statics::NewProp_RankPoint = { "RankPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetPlayerRank_Parms, RankPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_SetPlayerRank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetPlayerRank_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetPlayerRank_Statics::NewProp_Rank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetPlayerRank_Statics::NewProp_RankPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_SetPlayerRank_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_SetPlayerRank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "SetPlayerRank", nullptr, nullptr, sizeof(ELStatsUtility_eventSetPlayerRank_Parms), Z_Construct_UFunction_UELStatsUtility_SetPlayerRank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetPlayerRank_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_SetPlayerRank_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetPlayerRank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_SetPlayerRank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_SetPlayerRank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_SetPlayerRankPoint_Statics
	{
		struct ELStatsUtility_eventSetPlayerRankPoint_Parms
		{
			const UObject* WorldContextObject;
			int32 RankPoint;
			int32 LeaderboardRank;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RankPoint;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LeaderboardRank;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_SetPlayerRankPoint_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_SetPlayerRankPoint_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetPlayerRankPoint_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_SetPlayerRankPoint_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetPlayerRankPoint_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_SetPlayerRankPoint_Statics::NewProp_RankPoint = { "RankPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetPlayerRankPoint_Parms, RankPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_SetPlayerRankPoint_Statics::NewProp_LeaderboardRank = { "LeaderboardRank", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetPlayerRankPoint_Parms, LeaderboardRank), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_SetPlayerRankPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetPlayerRankPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_SetPlayerRankPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetPlayerRankPoint_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetPlayerRankPoint_Statics::NewProp_RankPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetPlayerRankPoint_Statics::NewProp_LeaderboardRank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetPlayerRankPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_SetPlayerRankPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_SetPlayerRankPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "SetPlayerRankPoint", nullptr, nullptr, sizeof(ELStatsUtility_eventSetPlayerRankPoint_Parms), Z_Construct_UFunction_UELStatsUtility_SetPlayerRankPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetPlayerRankPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_SetPlayerRankPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetPlayerRankPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_SetPlayerRankPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_SetPlayerRankPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_SetSpecialStat_Statics
	{
		struct ELStatsUtility_eventSetSpecialStat_Parms
		{
			const UObject* WorldContextObject;
			EELSpecialStat Stat;
			FString ParamName;
			int32 Value;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Stat_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Stat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ParamName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_SetSpecialStat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_SetSpecialStat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetSpecialStat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_SetSpecialStat_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetSpecialStat_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELStatsUtility_SetSpecialStat_Statics::NewProp_Stat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELStatsUtility_SetSpecialStat_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetSpecialStat_Parms, Stat), Z_Construct_UEnum_ABP_200508_EELSpecialStat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_SetSpecialStat_Statics::NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELStatsUtility_SetSpecialStat_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetSpecialStat_Parms, ParamName), METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_SetSpecialStat_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetSpecialStat_Statics::NewProp_ParamName_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_SetSpecialStat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetSpecialStat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_SetSpecialStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetSpecialStat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_SetSpecialStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetSpecialStat_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetSpecialStat_Statics::NewProp_Stat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetSpecialStat_Statics::NewProp_Stat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetSpecialStat_Statics::NewProp_ParamName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetSpecialStat_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetSpecialStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_SetSpecialStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_SetSpecialStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "SetSpecialStat", nullptr, nullptr, sizeof(ELStatsUtility_eventSetSpecialStat_Parms), Z_Construct_UFunction_UELStatsUtility_SetSpecialStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetSpecialStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_SetSpecialStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetSpecialStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_SetSpecialStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_SetSpecialStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_SetSSInGameFlag_Statics
	{
		struct ELStatsUtility_eventSetSSInGameFlag_Parms
		{
			const UObject* WorldContextObject;
			int32 Value;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_SetSSInGameFlag_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_SetSSInGameFlag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetSSInGameFlag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_SetSSInGameFlag_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetSSInGameFlag_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_SetSSInGameFlag_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetSSInGameFlag_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_SetSSInGameFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetSSInGameFlag_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_SetSSInGameFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetSSInGameFlag_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetSSInGameFlag_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetSSInGameFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_SetSSInGameFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_SetSSInGameFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "SetSSInGameFlag", nullptr, nullptr, sizeof(ELStatsUtility_eventSetSSInGameFlag_Parms), Z_Construct_UFunction_UELStatsUtility_SetSSInGameFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetSSInGameFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_SetSSInGameFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetSSInGameFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_SetSSInGameFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_SetSSInGameFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_SetSSMaxScore_Statics
	{
		struct ELStatsUtility_eventSetSSMaxScore_Parms
		{
			const UObject* WorldContextObject;
			int32 Value;
			bool bIngestEOS;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_bIngestEOS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIngestEOS;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_SetSSMaxScore_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_SetSSMaxScore_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetSSMaxScore_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_SetSSMaxScore_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetSSMaxScore_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_SetSSMaxScore_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetSSMaxScore_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELStatsUtility_SetSSMaxScore_Statics::NewProp_bIngestEOS_SetBit(void* Obj)
	{
		((ELStatsUtility_eventSetSSMaxScore_Parms*)Obj)->bIngestEOS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStatsUtility_SetSSMaxScore_Statics::NewProp_bIngestEOS = { "bIngestEOS", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStatsUtility_eventSetSSMaxScore_Parms), &Z_Construct_UFunction_UELStatsUtility_SetSSMaxScore_Statics::NewProp_bIngestEOS_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_SetSSMaxScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetSSMaxScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_SetSSMaxScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetSSMaxScore_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetSSMaxScore_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetSSMaxScore_Statics::NewProp_bIngestEOS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetSSMaxScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_SetSSMaxScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_SetSSMaxScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "SetSSMaxScore", nullptr, nullptr, sizeof(ELStatsUtility_eventSetSSMaxScore_Parms), Z_Construct_UFunction_UELStatsUtility_SetSSMaxScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetSSMaxScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_SetSSMaxScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetSSMaxScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_SetSSMaxScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_SetSSMaxScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_SetSSRankPoint_Statics
	{
		struct ELStatsUtility_eventSetSSRankPoint_Parms
		{
			const UObject* WorldContextObject;
			int32 Value;
			bool bIngestEOS;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_bIngestEOS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIngestEOS;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_SetSSRankPoint_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_SetSSRankPoint_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetSSRankPoint_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_SetSSRankPoint_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetSSRankPoint_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_SetSSRankPoint_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetSSRankPoint_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELStatsUtility_SetSSRankPoint_Statics::NewProp_bIngestEOS_SetBit(void* Obj)
	{
		((ELStatsUtility_eventSetSSRankPoint_Parms*)Obj)->bIngestEOS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStatsUtility_SetSSRankPoint_Statics::NewProp_bIngestEOS = { "bIngestEOS", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStatsUtility_eventSetSSRankPoint_Parms), &Z_Construct_UFunction_UELStatsUtility_SetSSRankPoint_Statics::NewProp_bIngestEOS_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_SetSSRankPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetSSRankPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_SetSSRankPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetSSRankPoint_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetSSRankPoint_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetSSRankPoint_Statics::NewProp_bIngestEOS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetSSRankPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_SetSSRankPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_SetSSRankPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "SetSSRankPoint", nullptr, nullptr, sizeof(ELStatsUtility_eventSetSSRankPoint_Parms), Z_Construct_UFunction_UELStatsUtility_SetSSRankPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetSSRankPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_SetSSRankPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetSSRankPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_SetSSRankPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_SetSSRankPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_SetStat_Statics
	{
		struct ELStatsUtility_eventSetStat_Parms
		{
			const UObject* WorldContextObject;
			FString Name;
			int32 Value;
			bool bIngestEOS;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_bIngestEOS_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIngestEOS;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_SetStat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_SetStat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetStat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_SetStat_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetStat_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_SetStat_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UELStatsUtility_SetStat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetStat_Parms, Name), METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_SetStat_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetStat_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_SetStat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetStat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELStatsUtility_SetStat_Statics::NewProp_bIngestEOS_SetBit(void* Obj)
	{
		((ELStatsUtility_eventSetStat_Parms*)Obj)->bIngestEOS = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELStatsUtility_SetStat_Statics::NewProp_bIngestEOS = { "bIngestEOS", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELStatsUtility_eventSetStat_Parms), &Z_Construct_UFunction_UELStatsUtility_SetStat_Statics::NewProp_bIngestEOS_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_SetStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetStat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_SetStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetStat_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetStat_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetStat_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetStat_Statics::NewProp_bIngestEOS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_SetStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_SetStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "SetStat", nullptr, nullptr, sizeof(ELStatsUtility_eventSetStat_Parms), Z_Construct_UFunction_UELStatsUtility_SetStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_SetStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_SetStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_SetStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStatsUtility_SetWrestlerStat_Statics
	{
		struct ELStatsUtility_eventSetWrestlerStat_Parms
		{
			const UObject* WorldContextObject;
			EELWrestlerStat Stat;
			EWrestlerID_N WrestlerID;
			int32 Value;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Stat_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Stat;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WrestlerID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_WrestlerID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_SetWrestlerStat_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELStatsUtility_SetWrestlerStat_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetWrestlerStat_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_SetWrestlerStat_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetWrestlerStat_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELStatsUtility_SetWrestlerStat_Statics::NewProp_Stat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELStatsUtility_SetWrestlerStat_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetWrestlerStat_Parms, Stat), Z_Construct_UEnum_ABP_200508_EELWrestlerStat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELStatsUtility_SetWrestlerStat_Statics::NewProp_WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELStatsUtility_SetWrestlerStat_Statics::NewProp_WrestlerID = { "WrestlerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetWrestlerStat_Parms, WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_SetWrestlerStat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetWrestlerStat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStatsUtility_SetWrestlerStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStatsUtility_eventSetWrestlerStat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStatsUtility_SetWrestlerStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetWrestlerStat_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetWrestlerStat_Statics::NewProp_Stat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetWrestlerStat_Statics::NewProp_Stat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetWrestlerStat_Statics::NewProp_WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetWrestlerStat_Statics::NewProp_WrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetWrestlerStat_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStatsUtility_SetWrestlerStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStatsUtility_SetWrestlerStat_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStatsUtility_SetWrestlerStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStatsUtility, nullptr, "SetWrestlerStat", nullptr, nullptr, sizeof(ELStatsUtility_eventSetWrestlerStat_Parms), Z_Construct_UFunction_UELStatsUtility_SetWrestlerStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetWrestlerStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStatsUtility_SetWrestlerStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStatsUtility_SetWrestlerStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStatsUtility_SetWrestlerStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStatsUtility_SetWrestlerStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELStatsUtility_NoRegister()
	{
		return UELStatsUtility::StaticClass();
	}
	struct Z_Construct_UClass_UELStatsUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELStatsUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELStatsUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELStatsUtility_AddBattlePassTotalPointStat, "AddBattlePassTotalPointStat" }, // 991548830
		{ &Z_Construct_UFunction_UELStatsUtility_AddDisconnectionPenalty, "AddDisconnectionPenalty" }, // 1813495092
		{ &Z_Construct_UFunction_UELStatsUtility_AddGlobalStat, "AddGlobalStat" }, // 2266421315
		{ &Z_Construct_UFunction_UELStatsUtility_AddRankMatchSeasonCountStats, "AddRankMatchSeasonCountStats" }, // 2545649124
		{ &Z_Construct_UFunction_UELStatsUtility_AddSpecialStat, "AddSpecialStat" }, // 814032881
		{ &Z_Construct_UFunction_UELStatsUtility_AddSSAttentionPoint, "AddSSAttentionPoint" }, // 3391059054
		{ &Z_Construct_UFunction_UELStatsUtility_AddSSFeverCount, "AddSSFeverCount" }, // 2550644969
		{ &Z_Construct_UFunction_UELStatsUtility_AddSSKillCount, "AddSSKillCount" }, // 3613259405
		{ &Z_Construct_UFunction_UELStatsUtility_AddSSPlayCount, "AddSSPlayCount" }, // 285190990
		{ &Z_Construct_UFunction_UELStatsUtility_AddSSStarCount, "AddSSStarCount" }, // 3887456913
		{ &Z_Construct_UFunction_UELStatsUtility_AddSSTop5Count, "AddSSTop5Count" }, // 4195357508
		{ &Z_Construct_UFunction_UELStatsUtility_AddSSTopCount, "AddSSTopCount" }, // 586954568
		{ &Z_Construct_UFunction_UELStatsUtility_AddSSTotalScore, "AddSSTotalScore" }, // 2892378526
		{ &Z_Construct_UFunction_UELStatsUtility_AddSSWrestlerCount, "AddSSWrestlerCount" }, // 304649229
		{ &Z_Construct_UFunction_UELStatsUtility_AddStat, "AddStat" }, // 2600221431
		{ &Z_Construct_UFunction_UELStatsUtility_AddWrestlerStat, "AddWrestlerStat" }, // 2811249540
		{ &Z_Construct_UFunction_UELStatsUtility_ClearCheatPenalty, "ClearCheatPenalty" }, // 4184218080
		{ &Z_Construct_UFunction_UELStatsUtility_GetBattlePassTotalPointStat, "GetBattlePassTotalPointStat" }, // 3237602397
		{ &Z_Construct_UFunction_UELStatsUtility_GetCasinoBattleRoyaleLastWinnerStat, "GetCasinoBattleRoyaleLastWinnerStat" }, // 1027059575
		{ &Z_Construct_UFunction_UELStatsUtility_GetDisconnectionCount, "GetDisconnectionCount" }, // 680638911
		{ &Z_Construct_UFunction_UELStatsUtility_GetDisconnectionLevel, "GetDisconnectionLevel" }, // 2385966969
		{ &Z_Construct_UFunction_UELStatsUtility_GetDisconnectionPenaltyCount, "GetDisconnectionPenaltyCount" }, // 2379747604
		{ &Z_Construct_UFunction_UELStatsUtility_GetDisconnectionStats, "GetDisconnectionStats" }, // 594928594
		{ &Z_Construct_UFunction_UELStatsUtility_GetELStats, "GetELStats" }, // 2801166481
		{ &Z_Construct_UFunction_UELStatsUtility_GetGlobalStat, "GetGlobalStat" }, // 3297383066
		{ &Z_Construct_UFunction_UELStatsUtility_GetPenaltyDisconnectionCount, "GetPenaltyDisconnectionCount" }, // 2541804751
		{ &Z_Construct_UFunction_UELStatsUtility_GetPlatformMaxStats, "GetPlatformMaxStats" }, // 3781111051
		{ &Z_Construct_UFunction_UELStatsUtility_GetPlatformPostfix, "GetPlatformPostfix" }, // 1100638444
		{ &Z_Construct_UFunction_UELStatsUtility_GetPlayerRank, "GetPlayerRank" }, // 3414655466
		{ &Z_Construct_UFunction_UELStatsUtility_GetSpecialStat, "GetSpecialStat" }, // 2390741182
		{ &Z_Construct_UFunction_UELStatsUtility_GetSSAttentionPoint, "GetSSAttentionPoint" }, // 161185797
		{ &Z_Construct_UFunction_UELStatsUtility_GetSSFeverCount, "GetSSFeverCount" }, // 1624262042
		{ &Z_Construct_UFunction_UELStatsUtility_GetSSInGameFlag, "GetSSInGameFlag" }, // 3553367878
		{ &Z_Construct_UFunction_UELStatsUtility_GetSSKillCount, "GetSSKillCount" }, // 251258988
		{ &Z_Construct_UFunction_UELStatsUtility_GetSSMaxScore, "GetSSMaxScore" }, // 315986303
		{ &Z_Construct_UFunction_UELStatsUtility_GetSSPlayCount, "GetSSPlayCount" }, // 1266553389
		{ &Z_Construct_UFunction_UELStatsUtility_GetSSRankPoint, "GetSSRankPoint" }, // 702135228
		{ &Z_Construct_UFunction_UELStatsUtility_GetSSStarCount, "GetSSStarCount" }, // 1069706608
		{ &Z_Construct_UFunction_UELStatsUtility_GetSSStarCountName, "GetSSStarCountName" }, // 1019066360
		{ &Z_Construct_UFunction_UELStatsUtility_GetSSTop5Count, "GetSSTop5Count" }, // 747220166
		{ &Z_Construct_UFunction_UELStatsUtility_GetSSTopCount, "GetSSTopCount" }, // 2428835978
		{ &Z_Construct_UFunction_UELStatsUtility_GetSSTotalScore, "GetSSTotalScore" }, // 591226549
		{ &Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCount, "GetSSWrestlerCount" }, // 1342750073
		{ &Z_Construct_UFunction_UELStatsUtility_GetSSWrestlerCountName, "GetSSWrestlerCountName" }, // 540471177
		{ &Z_Construct_UFunction_UELStatsUtility_GetStat, "GetStat" }, // 193057404
		{ &Z_Construct_UFunction_UELStatsUtility_GetWarningDisconnectionCount, "GetWarningDisconnectionCount" }, // 2565795150
		{ &Z_Construct_UFunction_UELStatsUtility_GetWrestlerStat, "GetWrestlerStat" }, // 4268798909
		{ &Z_Construct_UFunction_UELStatsUtility_IngestDirtyStats, "IngestDirtyStats" }, // 3739482700
		{ &Z_Construct_UFunction_UELStatsUtility_IngestDisconnectionStats, "IngestDisconnectionStats" }, // 3056585289
		{ &Z_Construct_UFunction_UELStatsUtility_MaxGlobalStat, "MaxGlobalStat" }, // 2753323064
		{ &Z_Construct_UFunction_UELStatsUtility_MaxStat, "MaxStat" }, // 3222876486
		{ &Z_Construct_UFunction_UELStatsUtility_MaxWrestlerStat, "MaxWrestlerStat" }, // 2677429588
		{ &Z_Construct_UFunction_UELStatsUtility_MinGlobalStat, "MinGlobalStat" }, // 1765694040
		{ &Z_Construct_UFunction_UELStatsUtility_MinStat, "MinStat" }, // 322685149
		{ &Z_Construct_UFunction_UELStatsUtility_MinWrestlerStat, "MinWrestlerStat" }, // 1400470766
		{ &Z_Construct_UFunction_UELStatsUtility_SetBattlePassTotalPointStat, "SetBattlePassTotalPointStat" }, // 245524199
		{ &Z_Construct_UFunction_UELStatsUtility_SetCasinoBattleRoyaleLastWinnerStat, "SetCasinoBattleRoyaleLastWinnerStat" }, // 1223701228
		{ &Z_Construct_UFunction_UELStatsUtility_SetCheatPenalty, "SetCheatPenalty" }, // 2198668749
		{ &Z_Construct_UFunction_UELStatsUtility_SetDebugDisconnectionLevel, "SetDebugDisconnectionLevel" }, // 2263466661
		{ &Z_Construct_UFunction_UELStatsUtility_SetExternalAccountId, "SetExternalAccountId" }, // 1974986303
		{ &Z_Construct_UFunction_UELStatsUtility_SetGlobalStat, "SetGlobalStat" }, // 114832819
		{ &Z_Construct_UFunction_UELStatsUtility_SetPlayerBadgesToStat, "SetPlayerBadgesToStat" }, // 1883511107
		{ &Z_Construct_UFunction_UELStatsUtility_SetPlayerIconToStat, "SetPlayerIconToStat" }, // 3276253671
		{ &Z_Construct_UFunction_UELStatsUtility_SetPlayerRank, "SetPlayerRank" }, // 3137950877
		{ &Z_Construct_UFunction_UELStatsUtility_SetPlayerRankPoint, "SetPlayerRankPoint" }, // 1513318116
		{ &Z_Construct_UFunction_UELStatsUtility_SetSpecialStat, "SetSpecialStat" }, // 3392599771
		{ &Z_Construct_UFunction_UELStatsUtility_SetSSInGameFlag, "SetSSInGameFlag" }, // 3039242149
		{ &Z_Construct_UFunction_UELStatsUtility_SetSSMaxScore, "SetSSMaxScore" }, // 2853666448
		{ &Z_Construct_UFunction_UELStatsUtility_SetSSRankPoint, "SetSSRankPoint" }, // 430403290
		{ &Z_Construct_UFunction_UELStatsUtility_SetStat, "SetStat" }, // 2920135105
		{ &Z_Construct_UFunction_UELStatsUtility_SetWrestlerStat, "SetWrestlerStat" }, // 1461289632
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELStatsUtility_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELStatsUtility.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELStatsUtility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELStatsUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELStatsUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELStatsUtility_Statics::ClassParams = {
		&UELStatsUtility::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELStatsUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELStatsUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELStatsUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELStatsUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELStatsUtility, 4119917604);
	template<> ABP_200508_API UClass* StaticClass<UELStatsUtility>()
	{
		return UELStatsUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELStatsUtility(Z_Construct_UClass_UELStatsUtility, &UELStatsUtility::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELStatsUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELStatsUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
