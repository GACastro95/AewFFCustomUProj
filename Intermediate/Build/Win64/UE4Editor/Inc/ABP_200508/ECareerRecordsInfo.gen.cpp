// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerRecordsInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerRecordsInfo() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerRecordsInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerRecordsInfo_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerRecordsInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerRecordsInfo"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerRecordsInfo>()
	{
		return ECareerRecordsInfo_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerRecordsInfo(ECareerRecordsInfo_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerRecordsInfo"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerRecordsInfo_Hash() { return 1807194075U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerRecordsInfo()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerRecordsInfo"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerRecordsInfo_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerRecordsInfo::None", (int64)ECareerRecordsInfo::None },
				{ "ECareerRecordsInfo::TotalMatche", (int64)ECareerRecordsInfo::TotalMatche },
				{ "ECareerRecordsInfo::Wins", (int64)ECareerRecordsInfo::Wins },
				{ "ECareerRecordsInfo::Losses", (int64)ECareerRecordsInfo::Losses },
				{ "ECareerRecordsInfo::Draws", (int64)ECareerRecordsInfo::Draws },
				{ "ECareerRecordsInfo::BestMatchScore", (int64)ECareerRecordsInfo::BestMatchScore },
				{ "ECareerRecordsInfo::AverageMatchScore", (int64)ECareerRecordsInfo::AverageMatchScore },
				{ "ECareerRecordsInfo::TotalSkillPoint", (int64)ECareerRecordsInfo::TotalSkillPoint },
				{ "ECareerRecordsInfo::TotalCareerMoney", (int64)ECareerRecordsInfo::TotalCareerMoney },
				{ "ECareerRecordsInfo::TimesRank_D", (int64)ECareerRecordsInfo::TimesRank_D },
				{ "ECareerRecordsInfo::TimesRank_C", (int64)ECareerRecordsInfo::TimesRank_C },
				{ "ECareerRecordsInfo::TimesRank_B", (int64)ECareerRecordsInfo::TimesRank_B },
				{ "ECareerRecordsInfo::TimesRank_B_Plus", (int64)ECareerRecordsInfo::TimesRank_B_Plus },
				{ "ECareerRecordsInfo::TimesRank_A", (int64)ECareerRecordsInfo::TimesRank_A },
				{ "ECareerRecordsInfo::TimesRank_A_Plus", (int64)ECareerRecordsInfo::TimesRank_A_Plus },
				{ "ECareerRecordsInfo::WorldChampionShips", (int64)ECareerRecordsInfo::WorldChampionShips },
				{ "ECareerRecordsInfo::WomensChampionShips", (int64)ECareerRecordsInfo::WomensChampionShips },
				{ "ECareerRecordsInfo::TagChampionShips", (int64)ECareerRecordsInfo::TagChampionShips },
				{ "ECareerRecordsInfo::TntChampionShips", (int64)ECareerRecordsInfo::TntChampionShips },
				{ "ECareerRecordsInfo::TbsChampionShips", (int64)ECareerRecordsInfo::TbsChampionShips },
				{ "ECareerRecordsInfo::FtwChampionShips", (int64)ECareerRecordsInfo::FtwChampionShips },
				{ "ECareerRecordsInfo::DynamiteWins", (int64)ECareerRecordsInfo::DynamiteWins },
				{ "ECareerRecordsInfo::RampageWins", (int64)ECareerRecordsInfo::RampageWins },
				{ "ECareerRecordsInfo::DarkWins", (int64)ECareerRecordsInfo::DarkWins },
				{ "ECareerRecordsInfo::PpvWins", (int64)ECareerRecordsInfo::PpvWins },
				{ "ECareerRecordsInfo::TotalWorkouts", (int64)ECareerRecordsInfo::TotalWorkouts },
				{ "ECareerRecordsInfo::TotalLightWorkouts", (int64)ECareerRecordsInfo::TotalLightWorkouts },
				{ "ECareerRecordsInfo::SuccessfulLightWorkouts", (int64)ECareerRecordsInfo::SuccessfulLightWorkouts },
				{ "ECareerRecordsInfo::TotalStandardRoutines", (int64)ECareerRecordsInfo::TotalStandardRoutines },
				{ "ECareerRecordsInfo::SuccessfulStandardRoutines", (int64)ECareerRecordsInfo::SuccessfulStandardRoutines },
				{ "ECareerRecordsInfo::TotalIntenseTraining", (int64)ECareerRecordsInfo::TotalIntenseTraining },
				{ "ECareerRecordsInfo::SuccessfulIntenseTraining", (int64)ECareerRecordsInfo::SuccessfulIntenseTraining },
				{ "ECareerRecordsInfo::TotalDinings", (int64)ECareerRecordsInfo::TotalDinings },
				{ "ECareerRecordsInfo::TotalSightSeeing", (int64)ECareerRecordsInfo::TotalSightSeeing },
				{ "ECareerRecordsInfo::TotalPressConferences", (int64)ECareerRecordsInfo::TotalPressConferences },
				{ "ECareerRecordsInfo::TotalMeetGreets", (int64)ECareerRecordsInfo::TotalMeetGreets },
				{ "ECareerRecordsInfo::TotalTalkShow", (int64)ECareerRecordsInfo::TotalTalkShow },
				{ "ECareerRecordsInfo::TotalMinigamesPlay", (int64)ECareerRecordsInfo::TotalMinigamesPlay },
				{ "ECareerRecordsInfo::TotalMinigamesWon", (int64)ECareerRecordsInfo::TotalMinigamesWon },
				{ "ECareerRecordsInfo::TotalHospital", (int64)ECareerRecordsInfo::TotalHospital },
				{ "ECareerRecordsInfo::TotalHospitalRecovery_A", (int64)ECareerRecordsInfo::TotalHospitalRecovery_A },
				{ "ECareerRecordsInfo::TotalHospitalRecovery_B", (int64)ECareerRecordsInfo::TotalHospitalRecovery_B },
				{ "ECareerRecordsInfo::TotalOtherMatches", (int64)ECareerRecordsInfo::TotalOtherMatches },
				{ "ECareerRecordsInfo::OtherMatchWins", (int64)ECareerRecordsInfo::OtherMatchWins },
				{ "ECareerRecordsInfo::Injuries", (int64)ECareerRecordsInfo::Injuries },
				{ "ECareerRecordsInfo::UsedEnergyRecovery", (int64)ECareerRecordsInfo::UsedEnergyRecovery },
				{ "ECareerRecordsInfo::UsedMotivationBoost", (int64)ECareerRecordsInfo::UsedMotivationBoost },
				{ "ECareerRecordsInfo::UsedInjuryTreatment", (int64)ECareerRecordsInfo::UsedInjuryTreatment },
				{ "ECareerRecordsInfo::UsedSkillPointBooster", (int64)ECareerRecordsInfo::UsedSkillPointBooster },
				{ "ECareerRecordsInfo::UsedMomentumBooster", (int64)ECareerRecordsInfo::UsedMomentumBooster },
				{ "ECareerRecordsInfo::UsedSpecialState", (int64)ECareerRecordsInfo::UsedSpecialState },
				{ "ECareerRecordsInfo::SnapshotsTaken", (int64)ECareerRecordsInfo::SnapshotsTaken },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AverageMatchScore.Name", "ECareerRecordsInfo::AverageMatchScore" },
				{ "BestMatchScore.Name", "ECareerRecordsInfo::BestMatchScore" },
				{ "BlueprintType", "true" },
				{ "DarkWins.Name", "ECareerRecordsInfo::DarkWins" },
				{ "Draws.Name", "ECareerRecordsInfo::Draws" },
				{ "DynamiteWins.Name", "ECareerRecordsInfo::DynamiteWins" },
				{ "FtwChampionShips.Name", "ECareerRecordsInfo::FtwChampionShips" },
				{ "Injuries.Name", "ECareerRecordsInfo::Injuries" },
				{ "Losses.Name", "ECareerRecordsInfo::Losses" },
				{ "ModuleRelativePath", "Public/ECareerRecordsInfo.h" },
				{ "None.Name", "ECareerRecordsInfo::None" },
				{ "OtherMatchWins.Name", "ECareerRecordsInfo::OtherMatchWins" },
				{ "PpvWins.Name", "ECareerRecordsInfo::PpvWins" },
				{ "RampageWins.Name", "ECareerRecordsInfo::RampageWins" },
				{ "SnapshotsTaken.Name", "ECareerRecordsInfo::SnapshotsTaken" },
				{ "SuccessfulIntenseTraining.Name", "ECareerRecordsInfo::SuccessfulIntenseTraining" },
				{ "SuccessfulLightWorkouts.Name", "ECareerRecordsInfo::SuccessfulLightWorkouts" },
				{ "SuccessfulStandardRoutines.Name", "ECareerRecordsInfo::SuccessfulStandardRoutines" },
				{ "TagChampionShips.Name", "ECareerRecordsInfo::TagChampionShips" },
				{ "TbsChampionShips.Name", "ECareerRecordsInfo::TbsChampionShips" },
				{ "TimesRank_A.Name", "ECareerRecordsInfo::TimesRank_A" },
				{ "TimesRank_A_Plus.Name", "ECareerRecordsInfo::TimesRank_A_Plus" },
				{ "TimesRank_B.Name", "ECareerRecordsInfo::TimesRank_B" },
				{ "TimesRank_B_Plus.Name", "ECareerRecordsInfo::TimesRank_B_Plus" },
				{ "TimesRank_C.Name", "ECareerRecordsInfo::TimesRank_C" },
				{ "TimesRank_D.Name", "ECareerRecordsInfo::TimesRank_D" },
				{ "TntChampionShips.Name", "ECareerRecordsInfo::TntChampionShips" },
				{ "TotalCareerMoney.Name", "ECareerRecordsInfo::TotalCareerMoney" },
				{ "TotalDinings.Name", "ECareerRecordsInfo::TotalDinings" },
				{ "TotalHospital.Name", "ECareerRecordsInfo::TotalHospital" },
				{ "TotalHospitalRecovery_A.Name", "ECareerRecordsInfo::TotalHospitalRecovery_A" },
				{ "TotalHospitalRecovery_B.Name", "ECareerRecordsInfo::TotalHospitalRecovery_B" },
				{ "TotalIntenseTraining.Name", "ECareerRecordsInfo::TotalIntenseTraining" },
				{ "TotalLightWorkouts.Name", "ECareerRecordsInfo::TotalLightWorkouts" },
				{ "TotalMatche.Name", "ECareerRecordsInfo::TotalMatche" },
				{ "TotalMeetGreets.Name", "ECareerRecordsInfo::TotalMeetGreets" },
				{ "TotalMinigamesPlay.Name", "ECareerRecordsInfo::TotalMinigamesPlay" },
				{ "TotalMinigamesWon.Name", "ECareerRecordsInfo::TotalMinigamesWon" },
				{ "TotalOtherMatches.Name", "ECareerRecordsInfo::TotalOtherMatches" },
				{ "TotalPressConferences.Name", "ECareerRecordsInfo::TotalPressConferences" },
				{ "TotalSightSeeing.Name", "ECareerRecordsInfo::TotalSightSeeing" },
				{ "TotalSkillPoint.Name", "ECareerRecordsInfo::TotalSkillPoint" },
				{ "TotalStandardRoutines.Name", "ECareerRecordsInfo::TotalStandardRoutines" },
				{ "TotalTalkShow.Name", "ECareerRecordsInfo::TotalTalkShow" },
				{ "TotalWorkouts.Name", "ECareerRecordsInfo::TotalWorkouts" },
				{ "UsedEnergyRecovery.Name", "ECareerRecordsInfo::UsedEnergyRecovery" },
				{ "UsedInjuryTreatment.Name", "ECareerRecordsInfo::UsedInjuryTreatment" },
				{ "UsedMomentumBooster.Name", "ECareerRecordsInfo::UsedMomentumBooster" },
				{ "UsedMotivationBoost.Name", "ECareerRecordsInfo::UsedMotivationBoost" },
				{ "UsedSkillPointBooster.Name", "ECareerRecordsInfo::UsedSkillPointBooster" },
				{ "UsedSpecialState.Name", "ECareerRecordsInfo::UsedSpecialState" },
				{ "Wins.Name", "ECareerRecordsInfo::Wins" },
				{ "WomensChampionShips.Name", "ECareerRecordsInfo::WomensChampionShips" },
				{ "WorldChampionShips.Name", "ECareerRecordsInfo::WorldChampionShips" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerRecordsInfo",
				"ECareerRecordsInfo",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
