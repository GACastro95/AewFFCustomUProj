// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ChallengeRecordSaveData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChallengeRecordSaveData() {}
// Cross Module References
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeRecordSaveData();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FChallengeAttackSkillRecord();
// End Cross Module References
class UScriptStruct* FChallengeRecordSaveData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ABP_200508_API uint32 Get_Z_Construct_UScriptStruct_FChallengeRecordSaveData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChallengeRecordSaveData, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ChallengeRecordSaveData"), sizeof(FChallengeRecordSaveData), Get_Z_Construct_UScriptStruct_FChallengeRecordSaveData_Hash());
	}
	return Singleton;
}
template<> ABP_200508_API UScriptStruct* StaticStruct<FChallengeRecordSaveData>()
{
	return FChallengeRecordSaveData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChallengeRecordSaveData(FChallengeRecordSaveData::StaticStruct, TEXT("/Script/ABP_200508"), TEXT("ChallengeRecordSaveData"), false, nullptr, nullptr);
static struct FScriptStruct_ABP_200508_StaticRegisterNativesFChallengeRecordSaveData
{
	FScriptStruct_ABP_200508_StaticRegisterNativesFChallengeRecordSaveData()
	{
		UScriptStruct::DeferCppStructOps<FChallengeRecordSaveData>(FName(TEXT("ChallengeRecordSaveData")));
	}
} ScriptStruct_ABP_200508_StaticRegisterNativesFChallengeRecordSaveData;
	struct Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WrestlerMatchRecordList_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WrestlerMatchRecordList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackSkillRecord_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttackSkillRecord;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WatchingsGameCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WatchingsGameCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalCreatedCustomWrestler_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalCreatedCustomWrestler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearedTargetMatchResultScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ClearedTargetMatchResultScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalMatchResultScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalMatchResultScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalClearedCarrerMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalClearedCarrerMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalPlayedMiniGame_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalPlayedMiniGame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalPlayedStadiumStampedeMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalPlayedStadiumStampedeMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalStadiumStampedeModeVictoryRoyal_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalStadiumStampedeModeVictoryRoyal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalSSWeakStrikeTechniqueHitCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalSSWeakStrikeTechniqueHitCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalSSStrongStrikeTechniqueHitCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalSSStrongStrikeTechniqueHitCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalSSJumpAttackHitCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalSSJumpAttackHitCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalSSNearWeaponAttackDamageCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalSSNearWeaponAttackDamageCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalSSFarWeaponAttackDamageCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalSSFarWeaponAttackDamageCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalSSThrowingWeaponAttackDamageCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalSSThrowingWeaponAttackDamageCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalSSFinisherSuccessCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalSSFinisherSuccessCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalSSVictoryRoyalWrestlerTypeToBalance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalSSVictoryRoyalWrestlerTypeToBalance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalSSVictoryRoyalWrestlerTypeToHighFly_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalSSVictoryRoyalWrestlerTypeToHighFly;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalSSVictoryRoyalWrestlerTypeToPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalSSVictoryRoyalWrestlerTypeToPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalWrestlerKillCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalWrestlerKillCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalSlotMachinePlayCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalSlotMachinePlayCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalVendingMachineBuyCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalVendingMachineBuyCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalRevivalCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalRevivalCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalAbilityUseCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalAbilityUseCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSSituationMoveCountInOneMatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SSSituationMoveCountInOneMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSFinisherSuccessCountInOneMatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SSFinisherSuccessCountInOneMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSWrestlerKillCountInOneMatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SSWrestlerKillCountInOneMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSSlotMachinePlayCountInOneMatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SSSlotMachinePlayCountInOneMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSVendingMachineBuyCountInOneMatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SSVendingMachineBuyCountInOneMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSAbilityUseCountInOneMatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SSAbilityUseCountInOneMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSFeverCountInOneMatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SSFeverCountInOneMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSEpicWeaponHitInOneMatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SSEpicWeaponHitInOneMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSTreasureBoxInOneMatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SSTreasureBoxInOneMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSExpItemInOneMatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SSExpItemInOneMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SSHighestReachPlayerRank_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SSHighestReachPlayerRank;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChallengeRecordSaveData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChallengeRecordSaveData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_WrestlerMatchRecordList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRecordSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeRecordSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_WrestlerMatchRecordList = { "WrestlerMatchRecordList", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(WrestlerMatchRecordList, FChallengeRecordSaveData), STRUCT_OFFSET(FChallengeRecordSaveData, WrestlerMatchRecordList), Z_Construct_UScriptStruct_FChallengeWrestlerMatchRecord, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_WrestlerMatchRecordList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_WrestlerMatchRecordList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_AttackSkillRecord_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRecordSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeRecordSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_AttackSkillRecord = { "AttackSkillRecord", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRecordSaveData, AttackSkillRecord), Z_Construct_UScriptStruct_FChallengeAttackSkillRecord, METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_AttackSkillRecord_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_AttackSkillRecord_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_WatchingsGameCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRecordSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeRecordSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_WatchingsGameCount = { "WatchingsGameCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRecordSaveData, WatchingsGameCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_WatchingsGameCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_WatchingsGameCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalCreatedCustomWrestler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRecordSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeRecordSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalCreatedCustomWrestler = { "TotalCreatedCustomWrestler", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRecordSaveData, TotalCreatedCustomWrestler), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalCreatedCustomWrestler_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalCreatedCustomWrestler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_ClearedTargetMatchResultScore_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRecordSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeRecordSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_ClearedTargetMatchResultScore = { "ClearedTargetMatchResultScore", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRecordSaveData, ClearedTargetMatchResultScore), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_ClearedTargetMatchResultScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_ClearedTargetMatchResultScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalMatchResultScore_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRecordSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeRecordSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalMatchResultScore = { "TotalMatchResultScore", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRecordSaveData, TotalMatchResultScore), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalMatchResultScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalMatchResultScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalClearedCarrerMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRecordSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeRecordSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalClearedCarrerMode = { "TotalClearedCarrerMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRecordSaveData, TotalClearedCarrerMode), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalClearedCarrerMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalClearedCarrerMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalPlayedMiniGame_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRecordSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeRecordSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalPlayedMiniGame = { "TotalPlayedMiniGame", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRecordSaveData, TotalPlayedMiniGame), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalPlayedMiniGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalPlayedMiniGame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalPlayedStadiumStampedeMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRecordSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeRecordSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalPlayedStadiumStampedeMode = { "TotalPlayedStadiumStampedeMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRecordSaveData, TotalPlayedStadiumStampedeMode), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalPlayedStadiumStampedeMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalPlayedStadiumStampedeMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalStadiumStampedeModeVictoryRoyal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRecordSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeRecordSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalStadiumStampedeModeVictoryRoyal = { "TotalStadiumStampedeModeVictoryRoyal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRecordSaveData, TotalStadiumStampedeModeVictoryRoyal), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalStadiumStampedeModeVictoryRoyal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalStadiumStampedeModeVictoryRoyal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSWeakStrikeTechniqueHitCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRecordSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeRecordSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSWeakStrikeTechniqueHitCount = { "TotalSSWeakStrikeTechniqueHitCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRecordSaveData, TotalSSWeakStrikeTechniqueHitCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSWeakStrikeTechniqueHitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSWeakStrikeTechniqueHitCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSStrongStrikeTechniqueHitCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRecordSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeRecordSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSStrongStrikeTechniqueHitCount = { "TotalSSStrongStrikeTechniqueHitCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRecordSaveData, TotalSSStrongStrikeTechniqueHitCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSStrongStrikeTechniqueHitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSStrongStrikeTechniqueHitCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSJumpAttackHitCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRecordSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeRecordSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSJumpAttackHitCount = { "TotalSSJumpAttackHitCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRecordSaveData, TotalSSJumpAttackHitCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSJumpAttackHitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSJumpAttackHitCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSNearWeaponAttackDamageCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRecordSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeRecordSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSNearWeaponAttackDamageCount = { "TotalSSNearWeaponAttackDamageCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRecordSaveData, TotalSSNearWeaponAttackDamageCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSNearWeaponAttackDamageCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSNearWeaponAttackDamageCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSFarWeaponAttackDamageCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRecordSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeRecordSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSFarWeaponAttackDamageCount = { "TotalSSFarWeaponAttackDamageCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRecordSaveData, TotalSSFarWeaponAttackDamageCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSFarWeaponAttackDamageCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSFarWeaponAttackDamageCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSThrowingWeaponAttackDamageCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRecordSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeRecordSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSThrowingWeaponAttackDamageCount = { "TotalSSThrowingWeaponAttackDamageCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRecordSaveData, TotalSSThrowingWeaponAttackDamageCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSThrowingWeaponAttackDamageCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSThrowingWeaponAttackDamageCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSFinisherSuccessCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRecordSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeRecordSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSFinisherSuccessCount = { "TotalSSFinisherSuccessCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRecordSaveData, TotalSSFinisherSuccessCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSFinisherSuccessCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSFinisherSuccessCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSVictoryRoyalWrestlerTypeToBalance_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRecordSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeRecordSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSVictoryRoyalWrestlerTypeToBalance = { "TotalSSVictoryRoyalWrestlerTypeToBalance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRecordSaveData, TotalSSVictoryRoyalWrestlerTypeToBalance), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSVictoryRoyalWrestlerTypeToBalance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSVictoryRoyalWrestlerTypeToBalance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSVictoryRoyalWrestlerTypeToHighFly_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRecordSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeRecordSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSVictoryRoyalWrestlerTypeToHighFly = { "TotalSSVictoryRoyalWrestlerTypeToHighFly", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRecordSaveData, TotalSSVictoryRoyalWrestlerTypeToHighFly), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSVictoryRoyalWrestlerTypeToHighFly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSVictoryRoyalWrestlerTypeToHighFly_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSVictoryRoyalWrestlerTypeToPower_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRecordSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeRecordSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSVictoryRoyalWrestlerTypeToPower = { "TotalSSVictoryRoyalWrestlerTypeToPower", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRecordSaveData, TotalSSVictoryRoyalWrestlerTypeToPower), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSVictoryRoyalWrestlerTypeToPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSVictoryRoyalWrestlerTypeToPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalWrestlerKillCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRecordSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeRecordSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalWrestlerKillCount = { "TotalWrestlerKillCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRecordSaveData, TotalWrestlerKillCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalWrestlerKillCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalWrestlerKillCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSlotMachinePlayCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRecordSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeRecordSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSlotMachinePlayCount = { "TotalSlotMachinePlayCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRecordSaveData, TotalSlotMachinePlayCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSlotMachinePlayCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSlotMachinePlayCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalVendingMachineBuyCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRecordSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeRecordSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalVendingMachineBuyCount = { "TotalVendingMachineBuyCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRecordSaveData, TotalVendingMachineBuyCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalVendingMachineBuyCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalVendingMachineBuyCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalRevivalCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRecordSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeRecordSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalRevivalCount = { "TotalRevivalCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRecordSaveData, TotalRevivalCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalRevivalCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalRevivalCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalAbilityUseCount_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRecordSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeRecordSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalAbilityUseCount = { "TotalAbilityUseCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRecordSaveData, TotalAbilityUseCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalAbilityUseCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalAbilityUseCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSSituationMoveCountInOneMatch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRecordSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeRecordSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSSituationMoveCountInOneMatch = { "SSSituationMoveCountInOneMatch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRecordSaveData, SSSituationMoveCountInOneMatch), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSSituationMoveCountInOneMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSSituationMoveCountInOneMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSFinisherSuccessCountInOneMatch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRecordSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeRecordSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSFinisherSuccessCountInOneMatch = { "SSFinisherSuccessCountInOneMatch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRecordSaveData, SSFinisherSuccessCountInOneMatch), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSFinisherSuccessCountInOneMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSFinisherSuccessCountInOneMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSWrestlerKillCountInOneMatch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRecordSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeRecordSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSWrestlerKillCountInOneMatch = { "SSWrestlerKillCountInOneMatch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRecordSaveData, SSWrestlerKillCountInOneMatch), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSWrestlerKillCountInOneMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSWrestlerKillCountInOneMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSSlotMachinePlayCountInOneMatch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRecordSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeRecordSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSSlotMachinePlayCountInOneMatch = { "SSSlotMachinePlayCountInOneMatch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRecordSaveData, SSSlotMachinePlayCountInOneMatch), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSSlotMachinePlayCountInOneMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSSlotMachinePlayCountInOneMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSVendingMachineBuyCountInOneMatch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRecordSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeRecordSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSVendingMachineBuyCountInOneMatch = { "SSVendingMachineBuyCountInOneMatch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRecordSaveData, SSVendingMachineBuyCountInOneMatch), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSVendingMachineBuyCountInOneMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSVendingMachineBuyCountInOneMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSAbilityUseCountInOneMatch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRecordSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeRecordSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSAbilityUseCountInOneMatch = { "SSAbilityUseCountInOneMatch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRecordSaveData, SSAbilityUseCountInOneMatch), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSAbilityUseCountInOneMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSAbilityUseCountInOneMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSFeverCountInOneMatch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRecordSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeRecordSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSFeverCountInOneMatch = { "SSFeverCountInOneMatch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRecordSaveData, SSFeverCountInOneMatch), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSFeverCountInOneMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSFeverCountInOneMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSEpicWeaponHitInOneMatch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRecordSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeRecordSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSEpicWeaponHitInOneMatch = { "SSEpicWeaponHitInOneMatch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRecordSaveData, SSEpicWeaponHitInOneMatch), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSEpicWeaponHitInOneMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSEpicWeaponHitInOneMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSTreasureBoxInOneMatch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRecordSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeRecordSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSTreasureBoxInOneMatch = { "SSTreasureBoxInOneMatch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRecordSaveData, SSTreasureBoxInOneMatch), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSTreasureBoxInOneMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSTreasureBoxInOneMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSExpItemInOneMatch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRecordSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeRecordSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSExpItemInOneMatch = { "SSExpItemInOneMatch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRecordSaveData, SSExpItemInOneMatch), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSExpItemInOneMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSExpItemInOneMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSHighestReachPlayerRank_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ChallengeRecordSaveData" },
		{ "ModuleRelativePath", "Public/ChallengeRecordSaveData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSHighestReachPlayerRank = { "SSHighestReachPlayerRank", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChallengeRecordSaveData, SSHighestReachPlayerRank), METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSHighestReachPlayerRank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSHighestReachPlayerRank_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_WrestlerMatchRecordList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_AttackSkillRecord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_WatchingsGameCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalCreatedCustomWrestler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_ClearedTargetMatchResultScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalMatchResultScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalClearedCarrerMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalPlayedMiniGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalPlayedStadiumStampedeMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalStadiumStampedeModeVictoryRoyal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSWeakStrikeTechniqueHitCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSStrongStrikeTechniqueHitCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSJumpAttackHitCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSNearWeaponAttackDamageCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSFarWeaponAttackDamageCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSThrowingWeaponAttackDamageCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSFinisherSuccessCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSVictoryRoyalWrestlerTypeToBalance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSVictoryRoyalWrestlerTypeToHighFly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSSVictoryRoyalWrestlerTypeToPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalWrestlerKillCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalSlotMachinePlayCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalVendingMachineBuyCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalRevivalCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_TotalAbilityUseCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSSituationMoveCountInOneMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSFinisherSuccessCountInOneMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSWrestlerKillCountInOneMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSSlotMachinePlayCountInOneMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSVendingMachineBuyCountInOneMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSAbilityUseCountInOneMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSFeverCountInOneMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSEpicWeaponHitInOneMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSTreasureBoxInOneMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSExpItemInOneMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::NewProp_SSHighestReachPlayerRank,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
		nullptr,
		&NewStructOps,
		"ChallengeRecordSaveData",
		sizeof(FChallengeRecordSaveData),
		alignof(FChallengeRecordSaveData),
		Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChallengeRecordSaveData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChallengeRecordSaveData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChallengeRecordSaveData"), sizeof(FChallengeRecordSaveData), Get_Z_Construct_UScriptStruct_FChallengeRecordSaveData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChallengeRecordSaveData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChallengeRecordSaveData_Hash() { return 2862337962U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
