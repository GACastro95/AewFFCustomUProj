// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EELEntranceNameplateCommentValueType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELEntranceNameplateCommentValueType() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELEntranceNameplateCommentValueType();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EELEntranceNameplateCommentValueType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EELEntranceNameplateCommentValueType, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EELEntranceNameplateCommentValueType"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EELEntranceNameplateCommentValueType>()
	{
		return EELEntranceNameplateCommentValueType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELEntranceNameplateCommentValueType(EELEntranceNameplateCommentValueType_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EELEntranceNameplateCommentValueType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EELEntranceNameplateCommentValueType_Hash() { return 2178752406U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EELEntranceNameplateCommentValueType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELEntranceNameplateCommentValueType"), 0, Get_Z_Construct_UEnum_ELITE_Game_EELEntranceNameplateCommentValueType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELEntranceNameplateCommentValueType::None", (int64)EELEntranceNameplateCommentValueType::None },
				{ "EELEntranceNameplateCommentValueType::WrestlerName", (int64)EELEntranceNameplateCommentValueType::WrestlerName },
				{ "EELEntranceNameplateCommentValueType::FinisherName", (int64)EELEntranceNameplateCommentValueType::FinisherName },
				{ "EELEntranceNameplateCommentValueType::TeamName", (int64)EELEntranceNameplateCommentValueType::TeamName },
				{ "EELEntranceNameplateCommentValueType::StreakNumber", (int64)EELEntranceNameplateCommentValueType::StreakNumber },
				{ "EELEntranceNameplateCommentValueType::MatchInterval", (int64)EELEntranceNameplateCommentValueType::MatchInterval },
				{ "EELEntranceNameplateCommentValueType::ManagerName", (int64)EELEntranceNameplateCommentValueType::ManagerName },
				{ "EELEntranceNameplateCommentValueType::DefendDays", (int64)EELEntranceNameplateCommentValueType::DefendDays },
				{ "EELEntranceNameplateCommentValueType::DefendNumber", (int64)EELEntranceNameplateCommentValueType::DefendNumber },
				{ "EELEntranceNameplateCommentValueType::MatchScoreAverage", (int64)EELEntranceNameplateCommentValueType::MatchScoreAverage },
				{ "EELEntranceNameplateCommentValueType::MatchScoreMax", (int64)EELEntranceNameplateCommentValueType::MatchScoreMax },
				{ "EELEntranceNameplateCommentValueType::CreatedWrestlerNumber", (int64)EELEntranceNameplateCommentValueType::CreatedWrestlerNumber },
				{ "EELEntranceNameplateCommentValueType::CreatedArenaNumber", (int64)EELEntranceNameplateCommentValueType::CreatedArenaNumber },
				{ "EELEntranceNameplateCommentValueType::CustomPartsNumber", (int64)EELEntranceNameplateCommentValueType::CustomPartsNumber },
				{ "EELEntranceNameplateCommentValueType::CareerClearNumber", (int64)EELEntranceNameplateCommentValueType::CareerClearNumber },
				{ "EELEntranceNameplateCommentValueType::FavoriteWrestlerName", (int64)EELEntranceNameplateCommentValueType::FavoriteWrestlerName },
				{ "EELEntranceNameplateCommentValueType::FavoriteArenaName", (int64)EELEntranceNameplateCommentValueType::FavoriteArenaName },
				{ "EELEntranceNameplateCommentValueType::FavoriteMatchType", (int64)EELEntranceNameplateCommentValueType::FavoriteMatchType },
				{ "EELEntranceNameplateCommentValueType::FavoriteWeaponName", (int64)EELEntranceNameplateCommentValueType::FavoriteWeaponName },
				{ "EELEntranceNameplateCommentValueType::TableBreakNumber", (int64)EELEntranceNameplateCommentValueType::TableBreakNumber },
				{ "EELEntranceNameplateCommentValueType::WearWeaponNumber", (int64)EELEntranceNameplateCommentValueType::WearWeaponNumber },
				{ "EELEntranceNameplateCommentValueType::DropOnThumbtacks", (int64)EELEntranceNameplateCommentValueType::DropOnThumbtacks },
				{ "EELEntranceNameplateCommentValueType::WasDroppedOnThumbtacks", (int64)EELEntranceNameplateCommentValueType::WasDroppedOnThumbtacks },
				{ "EELEntranceNameplateCommentValueType::NonExplodedNumber", (int64)EELEntranceNameplateCommentValueType::NonExplodedNumber },
				{ "EELEntranceNameplateCommentValueType::ExplosionAttackNumber", (int64)EELEntranceNameplateCommentValueType::ExplosionAttackNumber },
				{ "EELEntranceNameplateCommentValueType::ExplosionDamageNumber", (int64)EELEntranceNameplateCommentValueType::ExplosionDamageNumber },
				{ "EELEntranceNameplateCommentValueType::EliminateNumber", (int64)EELEntranceNameplateCommentValueType::EliminateNumber },
				{ "EELEntranceNameplateCommentValueType::WinNumberOfBattleRoyal", (int64)EELEntranceNameplateCommentValueType::WinNumberOfBattleRoyal },
				{ "EELEntranceNameplateCommentValueType::TotalPlayTime", (int64)EELEntranceNameplateCommentValueType::TotalPlayTime },
				{ "EELEntranceNameplateCommentValueType::TotalRunningDistance", (int64)EELEntranceNameplateCommentValueType::TotalRunningDistance },
				{ "EELEntranceNameplateCommentValueType::TotalMatchNumber", (int64)EELEntranceNameplateCommentValueType::TotalMatchNumber },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CareerClearNumber.Name", "EELEntranceNameplateCommentValueType::CareerClearNumber" },
				{ "CreatedArenaNumber.Name", "EELEntranceNameplateCommentValueType::CreatedArenaNumber" },
				{ "CreatedWrestlerNumber.Name", "EELEntranceNameplateCommentValueType::CreatedWrestlerNumber" },
				{ "CustomPartsNumber.Name", "EELEntranceNameplateCommentValueType::CustomPartsNumber" },
				{ "DefendDays.Name", "EELEntranceNameplateCommentValueType::DefendDays" },
				{ "DefendNumber.Name", "EELEntranceNameplateCommentValueType::DefendNumber" },
				{ "DropOnThumbtacks.Name", "EELEntranceNameplateCommentValueType::DropOnThumbtacks" },
				{ "EliminateNumber.Name", "EELEntranceNameplateCommentValueType::EliminateNumber" },
				{ "ExplosionAttackNumber.Name", "EELEntranceNameplateCommentValueType::ExplosionAttackNumber" },
				{ "ExplosionDamageNumber.Name", "EELEntranceNameplateCommentValueType::ExplosionDamageNumber" },
				{ "FavoriteArenaName.Name", "EELEntranceNameplateCommentValueType::FavoriteArenaName" },
				{ "FavoriteMatchType.Name", "EELEntranceNameplateCommentValueType::FavoriteMatchType" },
				{ "FavoriteWeaponName.Name", "EELEntranceNameplateCommentValueType::FavoriteWeaponName" },
				{ "FavoriteWrestlerName.Name", "EELEntranceNameplateCommentValueType::FavoriteWrestlerName" },
				{ "FinisherName.Name", "EELEntranceNameplateCommentValueType::FinisherName" },
				{ "ManagerName.Name", "EELEntranceNameplateCommentValueType::ManagerName" },
				{ "MatchInterval.Name", "EELEntranceNameplateCommentValueType::MatchInterval" },
				{ "MatchScoreAverage.Name", "EELEntranceNameplateCommentValueType::MatchScoreAverage" },
				{ "MatchScoreMax.Name", "EELEntranceNameplateCommentValueType::MatchScoreMax" },
				{ "ModuleRelativePath", "Public/EELEntranceNameplateCommentValueType.h" },
				{ "None.Name", "EELEntranceNameplateCommentValueType::None" },
				{ "NonExplodedNumber.Name", "EELEntranceNameplateCommentValueType::NonExplodedNumber" },
				{ "StreakNumber.Name", "EELEntranceNameplateCommentValueType::StreakNumber" },
				{ "TableBreakNumber.Name", "EELEntranceNameplateCommentValueType::TableBreakNumber" },
				{ "TeamName.Name", "EELEntranceNameplateCommentValueType::TeamName" },
				{ "TotalMatchNumber.Name", "EELEntranceNameplateCommentValueType::TotalMatchNumber" },
				{ "TotalPlayTime.Name", "EELEntranceNameplateCommentValueType::TotalPlayTime" },
				{ "TotalRunningDistance.Name", "EELEntranceNameplateCommentValueType::TotalRunningDistance" },
				{ "WasDroppedOnThumbtacks.Name", "EELEntranceNameplateCommentValueType::WasDroppedOnThumbtacks" },
				{ "WearWeaponNumber.Name", "EELEntranceNameplateCommentValueType::WearWeaponNumber" },
				{ "WinNumberOfBattleRoyal.Name", "EELEntranceNameplateCommentValueType::WinNumberOfBattleRoyal" },
				{ "WrestlerName.Name", "EELEntranceNameplateCommentValueType::WrestlerName" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EELEntranceNameplateCommentValueType",
				"EELEntranceNameplateCommentValueType",
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
