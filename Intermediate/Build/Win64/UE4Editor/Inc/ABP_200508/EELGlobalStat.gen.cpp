// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EELGlobalStat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELGlobalStat() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELGlobalStat();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EELGlobalStat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EELGlobalStat, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EELGlobalStat"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EELGlobalStat>()
	{
		return EELGlobalStat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELGlobalStat(EELGlobalStat_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EELGlobalStat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EELGlobalStat_Hash() { return 2154516302U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EELGlobalStat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELGlobalStat"), 0, Get_Z_Construct_UEnum_ABP_200508_EELGlobalStat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELGlobalStat::Pinfall_Win", (int64)EELGlobalStat::Pinfall_Win },
				{ "EELGlobalStat::Pinfall_Lose", (int64)EELGlobalStat::Pinfall_Lose },
				{ "EELGlobalStat::Submission_Win", (int64)EELGlobalStat::Submission_Win },
				{ "EELGlobalStat::Submission_Lose", (int64)EELGlobalStat::Submission_Lose },
				{ "EELGlobalStat::DQ_Win", (int64)EELGlobalStat::DQ_Win },
				{ "EELGlobalStat::DQ_Lose", (int64)EELGlobalStat::DQ_Lose },
				{ "EELGlobalStat::CountOut_Win", (int64)EELGlobalStat::CountOut_Win },
				{ "EELGlobalStat::CountOut_Lose", (int64)EELGlobalStat::CountOut_Lose },
				{ "EELGlobalStat::Ladder_Win", (int64)EELGlobalStat::Ladder_Win },
				{ "EELGlobalStat::Ladder_Lose", (int64)EELGlobalStat::Ladder_Lose },
				{ "EELGlobalStat::Pinfall_Break", (int64)EELGlobalStat::Pinfall_Break },
				{ "EELGlobalStat::Taunt", (int64)EELGlobalStat::Taunt },
				{ "EELGlobalStat::Run_Distance", (int64)EELGlobalStat::Run_Distance },
				{ "EELGlobalStat::Finisher", (int64)EELGlobalStat::Finisher },
				{ "EELGlobalStat::Championship", (int64)EELGlobalStat::Championship },
				{ "EELGlobalStat::AIMatch", (int64)EELGlobalStat::AIMatch },
				{ "EELGlobalStat::Create_PlayTime", (int64)EELGlobalStat::Create_PlayTime },
				{ "EELGlobalStat::Career_PlayTime", (int64)EELGlobalStat::Career_PlayTime },
				{ "EELGlobalStat::Career_Clear", (int64)EELGlobalStat::Career_Clear },
				{ "EELGlobalStat::Spent_AEWCash", (int64)EELGlobalStat::Spent_AEWCash },
				{ "EELGlobalStat::Earned_AEWCash", (int64)EELGlobalStat::Earned_AEWCash },
				{ "EELGlobalStat::Spent_AEWGold", (int64)EELGlobalStat::Spent_AEWGold },
				{ "EELGlobalStat::Earned_AEWGold", (int64)EELGlobalStat::Earned_AEWGold },
				{ "EELGlobalStat::BattlePass_Complete", (int64)EELGlobalStat::BattlePass_Complete },
				{ "EELGlobalStat::AchievedChallenge", (int64)EELGlobalStat::AchievedChallenge },
				{ "EELGlobalStat::Table_Broken", (int64)EELGlobalStat::Table_Broken },
				{ "EELGlobalStat::Pushpin", (int64)EELGlobalStat::Pushpin },
				{ "EELGlobalStat::Weapon_Attached", (int64)EELGlobalStat::Weapon_Attached },
				{ "EELGlobalStat::Explosion", (int64)EELGlobalStat::Explosion },
				{ "EELGlobalStat::Explosion_CountDown", (int64)EELGlobalStat::Explosion_CountDown },
				{ "EELGlobalStat::TagTeam_Touch", (int64)EELGlobalStat::TagTeam_Touch },
				{ "EELGlobalStat::Create_Wrestler_Male", (int64)EELGlobalStat::Create_Wrestler_Male },
				{ "EELGlobalStat::Create_Wrestler_Female", (int64)EELGlobalStat::Create_Wrestler_Female },
				{ "EELGlobalStat::Create_Arena", (int64)EELGlobalStat::Create_Arena },
				{ "EELGlobalStat::Create_Team", (int64)EELGlobalStat::Create_Team },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AchievedChallenge.Name", "EELGlobalStat::AchievedChallenge" },
				{ "AIMatch.Name", "EELGlobalStat::AIMatch" },
				{ "BattlePass_Complete.Name", "EELGlobalStat::BattlePass_Complete" },
				{ "BlueprintType", "true" },
				{ "Career_Clear.Name", "EELGlobalStat::Career_Clear" },
				{ "Career_PlayTime.Name", "EELGlobalStat::Career_PlayTime" },
				{ "Championship.Name", "EELGlobalStat::Championship" },
				{ "CountOut_Lose.Name", "EELGlobalStat::CountOut_Lose" },
				{ "CountOut_Win.Name", "EELGlobalStat::CountOut_Win" },
				{ "Create_Arena.Name", "EELGlobalStat::Create_Arena" },
				{ "Create_PlayTime.Name", "EELGlobalStat::Create_PlayTime" },
				{ "Create_Team.Name", "EELGlobalStat::Create_Team" },
				{ "Create_Wrestler_Female.Name", "EELGlobalStat::Create_Wrestler_Female" },
				{ "Create_Wrestler_Male.Name", "EELGlobalStat::Create_Wrestler_Male" },
				{ "DQ_Lose.Name", "EELGlobalStat::DQ_Lose" },
				{ "DQ_Win.Name", "EELGlobalStat::DQ_Win" },
				{ "Earned_AEWCash.Name", "EELGlobalStat::Earned_AEWCash" },
				{ "Earned_AEWGold.Name", "EELGlobalStat::Earned_AEWGold" },
				{ "Explosion.Name", "EELGlobalStat::Explosion" },
				{ "Explosion_CountDown.Name", "EELGlobalStat::Explosion_CountDown" },
				{ "Finisher.Name", "EELGlobalStat::Finisher" },
				{ "Ladder_Lose.Name", "EELGlobalStat::Ladder_Lose" },
				{ "Ladder_Win.Name", "EELGlobalStat::Ladder_Win" },
				{ "ModuleRelativePath", "Public/EELGlobalStat.h" },
				{ "Pinfall_Break.Name", "EELGlobalStat::Pinfall_Break" },
				{ "Pinfall_Lose.Name", "EELGlobalStat::Pinfall_Lose" },
				{ "Pinfall_Win.Name", "EELGlobalStat::Pinfall_Win" },
				{ "Pushpin.Name", "EELGlobalStat::Pushpin" },
				{ "Run_Distance.Name", "EELGlobalStat::Run_Distance" },
				{ "Spent_AEWCash.Name", "EELGlobalStat::Spent_AEWCash" },
				{ "Spent_AEWGold.Name", "EELGlobalStat::Spent_AEWGold" },
				{ "Submission_Lose.Name", "EELGlobalStat::Submission_Lose" },
				{ "Submission_Win.Name", "EELGlobalStat::Submission_Win" },
				{ "Table_Broken.Name", "EELGlobalStat::Table_Broken" },
				{ "TagTeam_Touch.Name", "EELGlobalStat::TagTeam_Touch" },
				{ "Taunt.Name", "EELGlobalStat::Taunt" },
				{ "Weapon_Attached.Name", "EELGlobalStat::Weapon_Attached" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EELGlobalStat",
				"EELGlobalStat",
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
