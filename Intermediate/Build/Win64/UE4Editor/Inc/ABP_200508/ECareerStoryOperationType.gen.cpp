// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerStoryOperationType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerStoryOperationType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerStoryOperationType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerStoryOperationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerStoryOperationType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerStoryOperationType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerStoryOperationType>()
	{
		return ECareerStoryOperationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerStoryOperationType(ECareerStoryOperationType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerStoryOperationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerStoryOperationType_Hash() { return 1934194458U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerStoryOperationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerStoryOperationType"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerStoryOperationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerStoryOperationType::EVENT", (int64)ECareerStoryOperationType::EVENT },
				{ "ECareerStoryOperationType::EVENT_BREAK", (int64)ECareerStoryOperationType::EVENT_BREAK },
				{ "ECareerStoryOperationType::EVENT_FINISH_STORY", (int64)ECareerStoryOperationType::EVENT_FINISH_STORY },
				{ "ECareerStoryOperationType::MATCH", (int64)ECareerStoryOperationType::MATCH },
				{ "ECareerStoryOperationType::CAW_START", (int64)ECareerStoryOperationType::CAW_START },
				{ "ECareerStoryOperationType::MAP", (int64)ECareerStoryOperationType::MAP },
				{ "ECareerStoryOperationType::MAINMENU", (int64)ECareerStoryOperationType::MAINMENU },
				{ "ECareerStoryOperationType::MINIGAME", (int64)ECareerStoryOperationType::MINIGAME },
				{ "ECareerStoryOperationType::CUTSCENE", (int64)ECareerStoryOperationType::CUTSCENE },
				{ "ECareerStoryOperationType::MOVIESCENE", (int64)ECareerStoryOperationType::MOVIESCENE },
				{ "ECareerStoryOperationType::LAYOUTSCENE", (int64)ECareerStoryOperationType::LAYOUTSCENE },
				{ "ECareerStoryOperationType::SCRIPT_END", (int64)ECareerStoryOperationType::SCRIPT_END },
				{ "ECareerStoryOperationType::CAW_FINISH", (int64)ECareerStoryOperationType::CAW_FINISH },
				{ "ECareerStoryOperationType::MATCH_REWARD_A", (int64)ECareerStoryOperationType::MATCH_REWARD_A },
				{ "ECareerStoryOperationType::MATCH_REWARD_B", (int64)ECareerStoryOperationType::MATCH_REWARD_B },
				{ "ECareerStoryOperationType::MATCH_REWARD_C", (int64)ECareerStoryOperationType::MATCH_REWARD_C },
				{ "ECareerStoryOperationType::EVENT_REWARD_A", (int64)ECareerStoryOperationType::EVENT_REWARD_A },
				{ "ECareerStoryOperationType::EVENT_REWARD_B", (int64)ECareerStoryOperationType::EVENT_REWARD_B },
				{ "ECareerStoryOperationType::EVENT_REWARD_C", (int64)ECareerStoryOperationType::EVENT_REWARD_C },
				{ "ECareerStoryOperationType::MINIGAME_REWARD_A", (int64)ECareerStoryOperationType::MINIGAME_REWARD_A },
				{ "ECareerStoryOperationType::MINIGAME_REWARD_B", (int64)ECareerStoryOperationType::MINIGAME_REWARD_B },
				{ "ECareerStoryOperationType::MINIGAME_REWARD_C", (int64)ECareerStoryOperationType::MINIGAME_REWARD_C },
				{ "ECareerStoryOperationType::COMMAND_SUCCESS_REWARD", (int64)ECareerStoryOperationType::COMMAND_SUCCESS_REWARD },
				{ "ECareerStoryOperationType::COMMAND_FAILED_REWARD", (int64)ECareerStoryOperationType::COMMAND_FAILED_REWARD },
				{ "ECareerStoryOperationType::REWARD_MOTIVATION_DOWN", (int64)ECareerStoryOperationType::REWARD_MOTIVATION_DOWN },
				{ "ECareerStoryOperationType::SETUP_RANDOM_RIVALS", (int64)ECareerStoryOperationType::SETUP_RANDOM_RIVALS },
				{ "ECareerStoryOperationType::CONTINUE_SAME_LOCATION_EVENT", (int64)ECareerStoryOperationType::CONTINUE_SAME_LOCATION_EVENT },
				{ "ECareerStoryOperationType::CHECK_WIN_WEEK_1", (int64)ECareerStoryOperationType::CHECK_WIN_WEEK_1 },
				{ "ECareerStoryOperationType::CHECK_WIN_WEEK_2", (int64)ECareerStoryOperationType::CHECK_WIN_WEEK_2 },
				{ "ECareerStoryOperationType::CHECK_WIN_WEEK_3", (int64)ECareerStoryOperationType::CHECK_WIN_WEEK_3 },
				{ "ECareerStoryOperationType::CHECK_WIN_WEEK_4", (int64)ECareerStoryOperationType::CHECK_WIN_WEEK_4 },
				{ "ECareerStoryOperationType::COMPARE_PLAYER_WRESTLER_ID", (int64)ECareerStoryOperationType::COMPARE_PLAYER_WRESTLER_ID },
				{ "ECareerStoryOperationType::COMPARE_RIVAL_WRESTLER_ID", (int64)ECareerStoryOperationType::COMPARE_RIVAL_WRESTLER_ID },
				{ "ECareerStoryOperationType::COMPARE_DATE_WRESTLER_ID", (int64)ECareerStoryOperationType::COMPARE_DATE_WRESTLER_ID },
				{ "ECareerStoryOperationType::SET_TURN_NUM", (int64)ECareerStoryOperationType::SET_TURN_NUM },
				{ "ECareerStoryOperationType::CHECK_LEGEND_WRESTLER", (int64)ECareerStoryOperationType::CHECK_LEGEND_WRESTLER },
				{ "ECareerStoryOperationType::CHECK_TOPTALENT_WRESTLER", (int64)ECareerStoryOperationType::CHECK_TOPTALENT_WRESTLER },
				{ "ECareerStoryOperationType::GET_INJURED", (int64)ECareerStoryOperationType::GET_INJURED },
				{ "ECareerStoryOperationType::SNAPSHOT", (int64)ECareerStoryOperationType::SNAPSHOT },
				{ "ECareerStoryOperationType::SELECT_DATE_PARTNER", (int64)ECareerStoryOperationType::SELECT_DATE_PARTNER },
				{ "ECareerStoryOperationType::GET_PLAYER_CHOICES", (int64)ECareerStoryOperationType::GET_PLAYER_CHOICES },
				{ "ECareerStoryOperationType::SET_PARTNER_WITH_PARTNERRIVAL", (int64)ECareerStoryOperationType::SET_PARTNER_WITH_PARTNERRIVAL },
				{ "ECareerStoryOperationType::CHECK_ATTACKED_MANAGER", (int64)ECareerStoryOperationType::CHECK_ATTACKED_MANAGER },
				{ "ECareerStoryOperationType::CHECK_PLAYER_GENDER_MALE", (int64)ECareerStoryOperationType::CHECK_PLAYER_GENDER_MALE },
				{ "ECareerStoryOperationType::CHECK_PLAYER_GENDER_FEMALE", (int64)ECareerStoryOperationType::CHECK_PLAYER_GENDER_FEMALE },
				{ "ECareerStoryOperationType::UNLOCK_DARK", (int64)ECareerStoryOperationType::UNLOCK_DARK },
				{ "ECareerStoryOperationType::UNLOCK_RAMPAGE", (int64)ECareerStoryOperationType::UNLOCK_RAMPAGE },
				{ "ECareerStoryOperationType::CHECK_WIN_TARGET", (int64)ECareerStoryOperationType::CHECK_WIN_TARGET },
				{ "ECareerStoryOperationType::TONYKHAN_TWEET", (int64)ECareerStoryOperationType::TONYKHAN_TWEET },
				{ "ECareerStoryOperationType::SET_BELT_WORLD", (int64)ECareerStoryOperationType::SET_BELT_WORLD },
				{ "ECareerStoryOperationType::SET_BELT_TNT", (int64)ECareerStoryOperationType::SET_BELT_TNT },
				{ "ECareerStoryOperationType::SET_BELT_WOMENS", (int64)ECareerStoryOperationType::SET_BELT_WOMENS },
				{ "ECareerStoryOperationType::SET_BELT_TAG_A", (int64)ECareerStoryOperationType::SET_BELT_TAG_A },
				{ "ECareerStoryOperationType::SET_BELT_TAG_B", (int64)ECareerStoryOperationType::SET_BELT_TAG_B },
				{ "ECareerStoryOperationType::SET_BELT_FTW", (int64)ECareerStoryOperationType::SET_BELT_FTW },
				{ "ECareerStoryOperationType::SET_BELT_TBS", (int64)ECareerStoryOperationType::SET_BELT_TBS },
				{ "ECareerStoryOperationType::VACANT_BELT_WORLD", (int64)ECareerStoryOperationType::VACANT_BELT_WORLD },
				{ "ECareerStoryOperationType::PROBABILITY_MOTIVATION", (int64)ECareerStoryOperationType::PROBABILITY_MOTIVATION },
				{ "ECareerStoryOperationType::CHECK_PLAYER_HEIGHT", (int64)ECareerStoryOperationType::CHECK_PLAYER_HEIGHT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CAW_FINISH.Name", "ECareerStoryOperationType::CAW_FINISH" },
				{ "CAW_START.Name", "ECareerStoryOperationType::CAW_START" },
				{ "CHECK_ATTACKED_MANAGER.Name", "ECareerStoryOperationType::CHECK_ATTACKED_MANAGER" },
				{ "CHECK_LEGEND_WRESTLER.Name", "ECareerStoryOperationType::CHECK_LEGEND_WRESTLER" },
				{ "CHECK_PLAYER_GENDER_FEMALE.Name", "ECareerStoryOperationType::CHECK_PLAYER_GENDER_FEMALE" },
				{ "CHECK_PLAYER_GENDER_MALE.Name", "ECareerStoryOperationType::CHECK_PLAYER_GENDER_MALE" },
				{ "CHECK_PLAYER_HEIGHT.Name", "ECareerStoryOperationType::CHECK_PLAYER_HEIGHT" },
				{ "CHECK_TOPTALENT_WRESTLER.Name", "ECareerStoryOperationType::CHECK_TOPTALENT_WRESTLER" },
				{ "CHECK_WIN_TARGET.Name", "ECareerStoryOperationType::CHECK_WIN_TARGET" },
				{ "CHECK_WIN_WEEK_1.Name", "ECareerStoryOperationType::CHECK_WIN_WEEK_1" },
				{ "CHECK_WIN_WEEK_2.Name", "ECareerStoryOperationType::CHECK_WIN_WEEK_2" },
				{ "CHECK_WIN_WEEK_3.Name", "ECareerStoryOperationType::CHECK_WIN_WEEK_3" },
				{ "CHECK_WIN_WEEK_4.Name", "ECareerStoryOperationType::CHECK_WIN_WEEK_4" },
				{ "COMMAND_FAILED_REWARD.Name", "ECareerStoryOperationType::COMMAND_FAILED_REWARD" },
				{ "COMMAND_SUCCESS_REWARD.Name", "ECareerStoryOperationType::COMMAND_SUCCESS_REWARD" },
				{ "COMPARE_DATE_WRESTLER_ID.Name", "ECareerStoryOperationType::COMPARE_DATE_WRESTLER_ID" },
				{ "COMPARE_PLAYER_WRESTLER_ID.Name", "ECareerStoryOperationType::COMPARE_PLAYER_WRESTLER_ID" },
				{ "COMPARE_RIVAL_WRESTLER_ID.Name", "ECareerStoryOperationType::COMPARE_RIVAL_WRESTLER_ID" },
				{ "CONTINUE_SAME_LOCATION_EVENT.Name", "ECareerStoryOperationType::CONTINUE_SAME_LOCATION_EVENT" },
				{ "CUTSCENE.Name", "ECareerStoryOperationType::CUTSCENE" },
				{ "EVENT.Name", "ECareerStoryOperationType::EVENT" },
				{ "EVENT_BREAK.Name", "ECareerStoryOperationType::EVENT_BREAK" },
				{ "EVENT_FINISH_STORY.Name", "ECareerStoryOperationType::EVENT_FINISH_STORY" },
				{ "EVENT_REWARD_A.Name", "ECareerStoryOperationType::EVENT_REWARD_A" },
				{ "EVENT_REWARD_B.Name", "ECareerStoryOperationType::EVENT_REWARD_B" },
				{ "EVENT_REWARD_C.Name", "ECareerStoryOperationType::EVENT_REWARD_C" },
				{ "GET_INJURED.Name", "ECareerStoryOperationType::GET_INJURED" },
				{ "GET_PLAYER_CHOICES.Name", "ECareerStoryOperationType::GET_PLAYER_CHOICES" },
				{ "LAYOUTSCENE.Name", "ECareerStoryOperationType::LAYOUTSCENE" },
				{ "MAINMENU.Name", "ECareerStoryOperationType::MAINMENU" },
				{ "MAP.Name", "ECareerStoryOperationType::MAP" },
				{ "MATCH.Name", "ECareerStoryOperationType::MATCH" },
				{ "MATCH_REWARD_A.Name", "ECareerStoryOperationType::MATCH_REWARD_A" },
				{ "MATCH_REWARD_B.Name", "ECareerStoryOperationType::MATCH_REWARD_B" },
				{ "MATCH_REWARD_C.Name", "ECareerStoryOperationType::MATCH_REWARD_C" },
				{ "MINIGAME.Name", "ECareerStoryOperationType::MINIGAME" },
				{ "MINIGAME_REWARD_A.Name", "ECareerStoryOperationType::MINIGAME_REWARD_A" },
				{ "MINIGAME_REWARD_B.Name", "ECareerStoryOperationType::MINIGAME_REWARD_B" },
				{ "MINIGAME_REWARD_C.Name", "ECareerStoryOperationType::MINIGAME_REWARD_C" },
				{ "ModuleRelativePath", "Public/ECareerStoryOperationType.h" },
				{ "MOVIESCENE.Name", "ECareerStoryOperationType::MOVIESCENE" },
				{ "PROBABILITY_MOTIVATION.Name", "ECareerStoryOperationType::PROBABILITY_MOTIVATION" },
				{ "REWARD_MOTIVATION_DOWN.Name", "ECareerStoryOperationType::REWARD_MOTIVATION_DOWN" },
				{ "SCRIPT_END.Name", "ECareerStoryOperationType::SCRIPT_END" },
				{ "SELECT_DATE_PARTNER.Name", "ECareerStoryOperationType::SELECT_DATE_PARTNER" },
				{ "SET_BELT_FTW.Name", "ECareerStoryOperationType::SET_BELT_FTW" },
				{ "SET_BELT_TAG_A.Name", "ECareerStoryOperationType::SET_BELT_TAG_A" },
				{ "SET_BELT_TAG_B.Name", "ECareerStoryOperationType::SET_BELT_TAG_B" },
				{ "SET_BELT_TBS.Name", "ECareerStoryOperationType::SET_BELT_TBS" },
				{ "SET_BELT_TNT.Name", "ECareerStoryOperationType::SET_BELT_TNT" },
				{ "SET_BELT_WOMENS.Name", "ECareerStoryOperationType::SET_BELT_WOMENS" },
				{ "SET_BELT_WORLD.Name", "ECareerStoryOperationType::SET_BELT_WORLD" },
				{ "SET_PARTNER_WITH_PARTNERRIVAL.Name", "ECareerStoryOperationType::SET_PARTNER_WITH_PARTNERRIVAL" },
				{ "SET_TURN_NUM.Name", "ECareerStoryOperationType::SET_TURN_NUM" },
				{ "SETUP_RANDOM_RIVALS.Name", "ECareerStoryOperationType::SETUP_RANDOM_RIVALS" },
				{ "SNAPSHOT.Name", "ECareerStoryOperationType::SNAPSHOT" },
				{ "TONYKHAN_TWEET.Name", "ECareerStoryOperationType::TONYKHAN_TWEET" },
				{ "UNLOCK_DARK.Name", "ECareerStoryOperationType::UNLOCK_DARK" },
				{ "UNLOCK_RAMPAGE.Name", "ECareerStoryOperationType::UNLOCK_RAMPAGE" },
				{ "VACANT_BELT_WORLD.Name", "ECareerStoryOperationType::VACANT_BELT_WORLD" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerStoryOperationType",
				"ECareerStoryOperationType",
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
