// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/CareerRecordInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCareerRecordInfo() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerRecordInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
class UScriptStruct* FCareerRecordInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FCareerRecordInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCareerRecordInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("CareerRecordInfo"), sizeof(FCareerRecordInfo), Get_Z_Construct_UScriptStruct_FCareerRecordInfo_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FCareerRecordInfo>()
{
	return FCareerRecordInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCareerRecordInfo(FCareerRecordInfo::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("CareerRecordInfo"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFCareerRecordInfo
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFCareerRecordInfo()
	{
		UScriptStruct::DeferCppStructOps<FCareerRecordInfo>(FName(TEXT("CareerRecordInfo")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFCareerRecordInfo;
	struct Z_Construct_UScriptStruct_FCareerRecordInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Match_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Match;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinMatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WinMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoseMatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LoseMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawMatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DrawMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMatchScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxMatchScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AveMatchScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AveMatchScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CareerMoney_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CareerMoney;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SkillPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearRankD_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ClearRankD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearRankC_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ClearRankC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearRankB_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ClearRankB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearRankB_Plus_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ClearRankB_Plus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearRankA_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ClearRankA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearRankA_Plus_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ClearRankA_Plus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AEW_World_Championship_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AEW_World_Championship;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AEW_Womens_Championship_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AEW_Womens_Championship;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AEW_World_Tag_Championship_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AEW_World_Tag_Championship;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TNT_Championship_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TNT_Championship;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TBS_Championship_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TBS_Championship;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FTW_Championship_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FTW_Championship;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinDynamite_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WinDynamite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinRampage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WinRampage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinDark_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WinDark;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinPPV_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WinPPV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Workout_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Workout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightWorkout_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightWorkout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightWorkoutSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightWorkoutSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandardRoutine_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StandardRoutine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandardRoutineSccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StandardRoutineSccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntenseTraining_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntenseTraining;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntenseTrainingSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntenseTrainingSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dining_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Dining;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightSeeing_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SightSeeing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PressConferecne_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PressConferecne;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutographSigning_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AutographSigning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TVTalkShow_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TVTalkShow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Minigame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Minigame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinMinigame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WinMinigame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hospital_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Hospital;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HospitalA_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HospitalA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HospitalB_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HospitalB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherMatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WinOtherMatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WinOtherMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Injury_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Injury;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemEnegyRecovery_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemEnegyRecovery;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemMotivationBoost_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemMotivationBoost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemInjuryTreatment_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemInjuryTreatment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSkillPointBooster_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemSkillPointBooster;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemMomentumBooster_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemMomentumBooster;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemFinisherMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemFinisherMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Snapshot_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Snapshot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCareerRecordInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_Match_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_Match = { "Match", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, Match), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_Match_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_Match_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_WinMatch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_WinMatch = { "WinMatch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, WinMatch), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_WinMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_WinMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_LoseMatch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_LoseMatch = { "LoseMatch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, LoseMatch), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_LoseMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_LoseMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_DrawMatch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_DrawMatch = { "DrawMatch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, DrawMatch), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_DrawMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_DrawMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_MaxMatchScore_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_MaxMatchScore = { "MaxMatchScore", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, MaxMatchScore), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_MaxMatchScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_MaxMatchScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_AveMatchScore_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_AveMatchScore = { "AveMatchScore", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, AveMatchScore), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_AveMatchScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_AveMatchScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_CareerMoney_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_CareerMoney = { "CareerMoney", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, CareerMoney), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_CareerMoney_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_CareerMoney_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_SkillPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_SkillPoint = { "SkillPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, SkillPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_SkillPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_SkillPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ClearRankD_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ClearRankD = { "ClearRankD", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, ClearRankD), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ClearRankD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ClearRankD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ClearRankC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ClearRankC = { "ClearRankC", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, ClearRankC), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ClearRankC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ClearRankC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ClearRankB_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ClearRankB = { "ClearRankB", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, ClearRankB), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ClearRankB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ClearRankB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ClearRankB_Plus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ClearRankB_Plus = { "ClearRankB_Plus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, ClearRankB_Plus), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ClearRankB_Plus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ClearRankB_Plus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ClearRankA_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ClearRankA = { "ClearRankA", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, ClearRankA), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ClearRankA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ClearRankA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ClearRankA_Plus_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ClearRankA_Plus = { "ClearRankA_Plus", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, ClearRankA_Plus), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ClearRankA_Plus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ClearRankA_Plus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_AEW_World_Championship_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_AEW_World_Championship = { "AEW_World_Championship", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, AEW_World_Championship), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_AEW_World_Championship_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_AEW_World_Championship_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_AEW_Womens_Championship_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_AEW_Womens_Championship = { "AEW_Womens_Championship", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, AEW_Womens_Championship), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_AEW_Womens_Championship_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_AEW_Womens_Championship_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_AEW_World_Tag_Championship_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_AEW_World_Tag_Championship = { "AEW_World_Tag_Championship", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, AEW_World_Tag_Championship), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_AEW_World_Tag_Championship_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_AEW_World_Tag_Championship_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_TNT_Championship_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_TNT_Championship = { "TNT_Championship", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, TNT_Championship), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_TNT_Championship_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_TNT_Championship_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_TBS_Championship_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_TBS_Championship = { "TBS_Championship", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, TBS_Championship), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_TBS_Championship_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_TBS_Championship_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_FTW_Championship_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_FTW_Championship = { "FTW_Championship", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, FTW_Championship), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_FTW_Championship_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_FTW_Championship_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_WinDynamite_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_WinDynamite = { "WinDynamite", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, WinDynamite), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_WinDynamite_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_WinDynamite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_WinRampage_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_WinRampage = { "WinRampage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, WinRampage), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_WinRampage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_WinRampage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_WinDark_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_WinDark = { "WinDark", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, WinDark), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_WinDark_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_WinDark_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_WinPPV_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_WinPPV = { "WinPPV", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, WinPPV), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_WinPPV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_WinPPV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_Workout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_Workout = { "Workout", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, Workout), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_Workout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_Workout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_LightWorkout_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_LightWorkout = { "LightWorkout", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, LightWorkout), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_LightWorkout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_LightWorkout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_LightWorkoutSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_LightWorkoutSuccess = { "LightWorkoutSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, LightWorkoutSuccess), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_LightWorkoutSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_LightWorkoutSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_StandardRoutine_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_StandardRoutine = { "StandardRoutine", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, StandardRoutine), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_StandardRoutine_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_StandardRoutine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_StandardRoutineSccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_StandardRoutineSccess = { "StandardRoutineSccess", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, StandardRoutineSccess), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_StandardRoutineSccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_StandardRoutineSccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_IntenseTraining_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_IntenseTraining = { "IntenseTraining", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, IntenseTraining), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_IntenseTraining_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_IntenseTraining_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_IntenseTrainingSuccess_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_IntenseTrainingSuccess = { "IntenseTrainingSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, IntenseTrainingSuccess), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_IntenseTrainingSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_IntenseTrainingSuccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_Dining_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_Dining = { "Dining", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, Dining), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_Dining_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_Dining_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_SightSeeing_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_SightSeeing = { "SightSeeing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, SightSeeing), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_SightSeeing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_SightSeeing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_PressConferecne_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_PressConferecne = { "PressConferecne", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, PressConferecne), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_PressConferecne_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_PressConferecne_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_AutographSigning_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_AutographSigning = { "AutographSigning", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, AutographSigning), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_AutographSigning_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_AutographSigning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_TVTalkShow_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_TVTalkShow = { "TVTalkShow", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, TVTalkShow), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_TVTalkShow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_TVTalkShow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_Minigame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_Minigame = { "Minigame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, Minigame), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_Minigame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_Minigame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_WinMinigame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_WinMinigame = { "WinMinigame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, WinMinigame), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_WinMinigame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_WinMinigame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_Hospital_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_Hospital = { "Hospital", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, Hospital), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_Hospital_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_Hospital_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_HospitalA_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_HospitalA = { "HospitalA", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, HospitalA), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_HospitalA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_HospitalA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_HospitalB_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_HospitalB = { "HospitalB", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, HospitalB), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_HospitalB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_HospitalB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_OtherMatch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_OtherMatch = { "OtherMatch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, OtherMatch), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_OtherMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_OtherMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_WinOtherMatch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_WinOtherMatch = { "WinOtherMatch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, WinOtherMatch), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_WinOtherMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_WinOtherMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_Injury_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_Injury = { "Injury", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, Injury), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_Injury_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_Injury_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ItemEnegyRecovery_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ItemEnegyRecovery = { "ItemEnegyRecovery", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, ItemEnegyRecovery), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ItemEnegyRecovery_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ItemEnegyRecovery_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ItemMotivationBoost_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ItemMotivationBoost = { "ItemMotivationBoost", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, ItemMotivationBoost), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ItemMotivationBoost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ItemMotivationBoost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ItemInjuryTreatment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ItemInjuryTreatment = { "ItemInjuryTreatment", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, ItemInjuryTreatment), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ItemInjuryTreatment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ItemInjuryTreatment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ItemSkillPointBooster_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ItemSkillPointBooster = { "ItemSkillPointBooster", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, ItemSkillPointBooster), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ItemSkillPointBooster_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ItemSkillPointBooster_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ItemMomentumBooster_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ItemMomentumBooster = { "ItemMomentumBooster", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, ItemMomentumBooster), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ItemMomentumBooster_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ItemMomentumBooster_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ItemFinisherMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ItemFinisherMode = { "ItemFinisherMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, ItemFinisherMode), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ItemFinisherMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ItemFinisherMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_Snapshot_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "CareerRecordInfo" },
		{ "ModuleRelativePath", "Public/CareerRecordInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_Snapshot = { "Snapshot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCareerRecordInfo, Snapshot), METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_Snapshot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_Snapshot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_Match,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_WinMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_LoseMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_DrawMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_MaxMatchScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_AveMatchScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_CareerMoney,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_SkillPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ClearRankD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ClearRankC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ClearRankB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ClearRankB_Plus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ClearRankA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ClearRankA_Plus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_AEW_World_Championship,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_AEW_Womens_Championship,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_AEW_World_Tag_Championship,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_TNT_Championship,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_TBS_Championship,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_FTW_Championship,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_WinDynamite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_WinRampage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_WinDark,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_WinPPV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_Workout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_LightWorkout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_LightWorkoutSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_StandardRoutine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_StandardRoutineSccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_IntenseTraining,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_IntenseTrainingSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_Dining,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_SightSeeing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_PressConferecne,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_AutographSigning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_TVTalkShow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_Minigame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_WinMinigame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_Hospital,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_HospitalA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_HospitalB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_OtherMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_WinOtherMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_Injury,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ItemEnegyRecovery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ItemMotivationBoost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ItemInjuryTreatment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ItemSkillPointBooster,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ItemMomentumBooster,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_ItemFinisherMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::NewProp_Snapshot,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"CareerRecordInfo",
		sizeof(FCareerRecordInfo),
		alignof(FCareerRecordInfo),
		Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCareerRecordInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCareerRecordInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CareerRecordInfo"), sizeof(FCareerRecordInfo), Get_Z_Construct_UScriptStruct_FCareerRecordInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCareerRecordInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCareerRecordInfo_Hash() { return 4002035092U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
