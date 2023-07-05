// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EELEntranceNameplateCommentConditionType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELEntranceNameplateCommentConditionType() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELEntranceNameplateCommentConditionType();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EELEntranceNameplateCommentConditionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EELEntranceNameplateCommentConditionType, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EELEntranceNameplateCommentConditionType"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EELEntranceNameplateCommentConditionType>()
	{
		return EELEntranceNameplateCommentConditionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELEntranceNameplateCommentConditionType(EELEntranceNameplateCommentConditionType_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EELEntranceNameplateCommentConditionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EELEntranceNameplateCommentConditionType_Hash() { return 3862236154U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EELEntranceNameplateCommentConditionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELEntranceNameplateCommentConditionType"), 0, Get_Z_Construct_UEnum_ELITE_Game_EELEntranceNameplateCommentConditionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELEntranceNameplateCommentConditionType::Always", (int64)EELEntranceNameplateCommentConditionType::Always },
				{ "EELEntranceNameplateCommentConditionType::WrestlerID", (int64)EELEntranceNameplateCommentConditionType::WrestlerID },
				{ "EELEntranceNameplateCommentConditionType::Birthday", (int64)EELEntranceNameplateCommentConditionType::Birthday },
				{ "EELEntranceNameplateCommentConditionType::TeamName", (int64)EELEntranceNameplateCommentConditionType::TeamName },
				{ "EELEntranceNameplateCommentConditionType::Streak", (int64)EELEntranceNameplateCommentConditionType::Streak },
				{ "EELEntranceNameplateCommentConditionType::LastEntry", (int64)EELEntranceNameplateCommentConditionType::LastEntry },
				{ "EELEntranceNameplateCommentConditionType::EntryCount", (int64)EELEntranceNameplateCommentConditionType::EntryCount },
				{ "EELEntranceNameplateCommentConditionType::WithManager", (int64)EELEntranceNameplateCommentConditionType::WithManager },
				{ "EELEntranceNameplateCommentConditionType::TitleHolder", (int64)EELEntranceNameplateCommentConditionType::TitleHolder },
				{ "EELEntranceNameplateCommentConditionType::TitleDefendDays", (int64)EELEntranceNameplateCommentConditionType::TitleDefendDays },
				{ "EELEntranceNameplateCommentConditionType::BattleRoyalWinner", (int64)EELEntranceNameplateCommentConditionType::BattleRoyalWinner },
				{ "EELEntranceNameplateCommentConditionType::CAWHeight", (int64)EELEntranceNameplateCommentConditionType::CAWHeight },
				{ "EELEntranceNameplateCommentConditionType::CAWWeight", (int64)EELEntranceNameplateCommentConditionType::CAWWeight },
				{ "EELEntranceNameplateCommentConditionType::TagTeamID", (int64)EELEntranceNameplateCommentConditionType::TagTeamID },
				{ "EELEntranceNameplateCommentConditionType::Skill_Momentum", (int64)EELEntranceNameplateCommentConditionType::Skill_Momentum },
				{ "EELEntranceNameplateCommentConditionType::Skill_FinisherSlot", (int64)EELEntranceNameplateCommentConditionType::Skill_FinisherSlot },
				{ "EELEntranceNameplateCommentConditionType::Skill_SignatureSlot", (int64)EELEntranceNameplateCommentConditionType::Skill_SignatureSlot },
				{ "EELEntranceNameplateCommentConditionType::Skill_ChainWrestling", (int64)EELEntranceNameplateCommentConditionType::Skill_ChainWrestling },
				{ "EELEntranceNameplateCommentConditionType::Skill_ArmPower", (int64)EELEntranceNameplateCommentConditionType::Skill_ArmPower },
				{ "EELEntranceNameplateCommentConditionType::Skill_KickPower", (int64)EELEntranceNameplateCommentConditionType::Skill_KickPower },
				{ "EELEntranceNameplateCommentConditionType::Skill_GrapplePower", (int64)EELEntranceNameplateCommentConditionType::Skill_GrapplePower },
				{ "EELEntranceNameplateCommentConditionType::Skill_DivingPower", (int64)EELEntranceNameplateCommentConditionType::Skill_DivingPower },
				{ "EELEntranceNameplateCommentConditionType::Skill_SpringboardPower", (int64)EELEntranceNameplateCommentConditionType::Skill_SpringboardPower },
				{ "EELEntranceNameplateCommentConditionType::Skill_MovementSpeed", (int64)EELEntranceNameplateCommentConditionType::Skill_MovementSpeed },
				{ "EELEntranceNameplateCommentConditionType::ActionSkill", (int64)EELEntranceNameplateCommentConditionType::ActionSkill },
				{ "EELEntranceNameplateCommentConditionType::PassiveSkill", (int64)EELEntranceNameplateCommentConditionType::PassiveSkill },
				{ "EELEntranceNameplateCommentConditionType::AIType", (int64)EELEntranceNameplateCommentConditionType::AIType },
				{ "EELEntranceNameplateCommentConditionType::StreakForOnline", (int64)EELEntranceNameplateCommentConditionType::StreakForOnline },
				{ "EELEntranceNameplateCommentConditionType::LastEntryForOnline", (int64)EELEntranceNameplateCommentConditionType::LastEntryForOnline },
				{ "EELEntranceNameplateCommentConditionType::EntryCountForOnline", (int64)EELEntranceNameplateCommentConditionType::EntryCountForOnline },
				{ "EELEntranceNameplateCommentConditionType::MatchScoreAverage", (int64)EELEntranceNameplateCommentConditionType::MatchScoreAverage },
				{ "EELEntranceNameplateCommentConditionType::MatchScoreMax", (int64)EELEntranceNameplateCommentConditionType::MatchScoreMax },
				{ "EELEntranceNameplateCommentConditionType::CreateCAW", (int64)EELEntranceNameplateCommentConditionType::CreateCAW },
				{ "EELEntranceNameplateCommentConditionType::CreateCAA", (int64)EELEntranceNameplateCommentConditionType::CreateCAA },
				{ "EELEntranceNameplateCommentConditionType::RareItem", (int64)EELEntranceNameplateCommentConditionType::RareItem },
				{ "EELEntranceNameplateCommentConditionType::CareerClear", (int64)EELEntranceNameplateCommentConditionType::CareerClear },
				{ "EELEntranceNameplateCommentConditionType::FavoriteWrestler", (int64)EELEntranceNameplateCommentConditionType::FavoriteWrestler },
				{ "EELEntranceNameplateCommentConditionType::FavoriteArena", (int64)EELEntranceNameplateCommentConditionType::FavoriteArena },
				{ "EELEntranceNameplateCommentConditionType::FavoriteWeapon", (int64)EELEntranceNameplateCommentConditionType::FavoriteWeapon },
				{ "EELEntranceNameplateCommentConditionType::TableCrush", (int64)EELEntranceNameplateCommentConditionType::TableCrush },
				{ "EELEntranceNameplateCommentConditionType::WeaponAttach", (int64)EELEntranceNameplateCommentConditionType::WeaponAttach },
				{ "EELEntranceNameplateCommentConditionType::DropOnThumbtacks", (int64)EELEntranceNameplateCommentConditionType::DropOnThumbtacks },
				{ "EELEntranceNameplateCommentConditionType::WasDroppedOnThumbtacks", (int64)EELEntranceNameplateCommentConditionType::WasDroppedOnThumbtacks },
				{ "EELEntranceNameplateCommentConditionType::Explosion", (int64)EELEntranceNameplateCommentConditionType::Explosion },
				{ "EELEntranceNameplateCommentConditionType::Eliminate", (int64)EELEntranceNameplateCommentConditionType::Eliminate },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ActionSkill.Name", "EELEntranceNameplateCommentConditionType::ActionSkill" },
				{ "AIType.Name", "EELEntranceNameplateCommentConditionType::AIType" },
				{ "Always.Name", "EELEntranceNameplateCommentConditionType::Always" },
				{ "BattleRoyalWinner.Name", "EELEntranceNameplateCommentConditionType::BattleRoyalWinner" },
				{ "Birthday.Name", "EELEntranceNameplateCommentConditionType::Birthday" },
				{ "BlueprintType", "true" },
				{ "CareerClear.Name", "EELEntranceNameplateCommentConditionType::CareerClear" },
				{ "CAWHeight.Name", "EELEntranceNameplateCommentConditionType::CAWHeight" },
				{ "CAWWeight.Name", "EELEntranceNameplateCommentConditionType::CAWWeight" },
				{ "CreateCAA.Name", "EELEntranceNameplateCommentConditionType::CreateCAA" },
				{ "CreateCAW.Name", "EELEntranceNameplateCommentConditionType::CreateCAW" },
				{ "DropOnThumbtacks.Name", "EELEntranceNameplateCommentConditionType::DropOnThumbtacks" },
				{ "Eliminate.Name", "EELEntranceNameplateCommentConditionType::Eliminate" },
				{ "EntryCount.Name", "EELEntranceNameplateCommentConditionType::EntryCount" },
				{ "EntryCountForOnline.Name", "EELEntranceNameplateCommentConditionType::EntryCountForOnline" },
				{ "Explosion.Name", "EELEntranceNameplateCommentConditionType::Explosion" },
				{ "FavoriteArena.Name", "EELEntranceNameplateCommentConditionType::FavoriteArena" },
				{ "FavoriteWeapon.Name", "EELEntranceNameplateCommentConditionType::FavoriteWeapon" },
				{ "FavoriteWrestler.Name", "EELEntranceNameplateCommentConditionType::FavoriteWrestler" },
				{ "LastEntry.Name", "EELEntranceNameplateCommentConditionType::LastEntry" },
				{ "LastEntryForOnline.Name", "EELEntranceNameplateCommentConditionType::LastEntryForOnline" },
				{ "MatchScoreAverage.Name", "EELEntranceNameplateCommentConditionType::MatchScoreAverage" },
				{ "MatchScoreMax.Name", "EELEntranceNameplateCommentConditionType::MatchScoreMax" },
				{ "ModuleRelativePath", "Public/EELEntranceNameplateCommentConditionType.h" },
				{ "PassiveSkill.Name", "EELEntranceNameplateCommentConditionType::PassiveSkill" },
				{ "RareItem.Name", "EELEntranceNameplateCommentConditionType::RareItem" },
				{ "Skill_ArmPower.Name", "EELEntranceNameplateCommentConditionType::Skill_ArmPower" },
				{ "Skill_ChainWrestling.Name", "EELEntranceNameplateCommentConditionType::Skill_ChainWrestling" },
				{ "Skill_DivingPower.Name", "EELEntranceNameplateCommentConditionType::Skill_DivingPower" },
				{ "Skill_FinisherSlot.Name", "EELEntranceNameplateCommentConditionType::Skill_FinisherSlot" },
				{ "Skill_GrapplePower.Name", "EELEntranceNameplateCommentConditionType::Skill_GrapplePower" },
				{ "Skill_KickPower.Name", "EELEntranceNameplateCommentConditionType::Skill_KickPower" },
				{ "Skill_Momentum.Name", "EELEntranceNameplateCommentConditionType::Skill_Momentum" },
				{ "Skill_MovementSpeed.Name", "EELEntranceNameplateCommentConditionType::Skill_MovementSpeed" },
				{ "Skill_SignatureSlot.Name", "EELEntranceNameplateCommentConditionType::Skill_SignatureSlot" },
				{ "Skill_SpringboardPower.Name", "EELEntranceNameplateCommentConditionType::Skill_SpringboardPower" },
				{ "Streak.Name", "EELEntranceNameplateCommentConditionType::Streak" },
				{ "StreakForOnline.Name", "EELEntranceNameplateCommentConditionType::StreakForOnline" },
				{ "TableCrush.Name", "EELEntranceNameplateCommentConditionType::TableCrush" },
				{ "TagTeamID.Name", "EELEntranceNameplateCommentConditionType::TagTeamID" },
				{ "TeamName.Name", "EELEntranceNameplateCommentConditionType::TeamName" },
				{ "TitleDefendDays.Name", "EELEntranceNameplateCommentConditionType::TitleDefendDays" },
				{ "TitleHolder.Name", "EELEntranceNameplateCommentConditionType::TitleHolder" },
				{ "WasDroppedOnThumbtacks.Name", "EELEntranceNameplateCommentConditionType::WasDroppedOnThumbtacks" },
				{ "WeaponAttach.Name", "EELEntranceNameplateCommentConditionType::WeaponAttach" },
				{ "WithManager.Name", "EELEntranceNameplateCommentConditionType::WithManager" },
				{ "WrestlerID.Name", "EELEntranceNameplateCommentConditionType::WrestlerID" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EELEntranceNameplateCommentConditionType",
				"EELEntranceNameplateCommentConditionType",
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
