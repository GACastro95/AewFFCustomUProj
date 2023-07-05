// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EELEntranceNameplateCommentArgumentType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELEntranceNameplateCommentArgumentType() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELEntranceNameplateCommentArgumentType();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EELEntranceNameplateCommentArgumentType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EELEntranceNameplateCommentArgumentType, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EELEntranceNameplateCommentArgumentType"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EELEntranceNameplateCommentArgumentType>()
	{
		return EELEntranceNameplateCommentArgumentType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELEntranceNameplateCommentArgumentType(EELEntranceNameplateCommentArgumentType_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EELEntranceNameplateCommentArgumentType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EELEntranceNameplateCommentArgumentType_Hash() { return 4172586763U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EELEntranceNameplateCommentArgumentType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELEntranceNameplateCommentArgumentType"), 0, Get_Z_Construct_UEnum_ELITE_Game_EELEntranceNameplateCommentArgumentType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELEntranceNameplateCommentArgumentType::WrestlerID", (int64)EELEntranceNameplateCommentArgumentType::WrestlerID },
				{ "EELEntranceNameplateCommentArgumentType::ManagerID", (int64)EELEntranceNameplateCommentArgumentType::ManagerID },
				{ "EELEntranceNameplateCommentArgumentType::BletID", (int64)EELEntranceNameplateCommentArgumentType::BletID },
				{ "EELEntranceNameplateCommentArgumentType::TeamID", (int64)EELEntranceNameplateCommentArgumentType::TeamID },
				{ "EELEntranceNameplateCommentArgumentType::Streak", (int64)EELEntranceNameplateCommentArgumentType::Streak },
				{ "EELEntranceNameplateCommentArgumentType::LastEntry", (int64)EELEntranceNameplateCommentArgumentType::LastEntry },
				{ "EELEntranceNameplateCommentArgumentType::EntryCount", (int64)EELEntranceNameplateCommentArgumentType::EntryCount },
				{ "EELEntranceNameplateCommentArgumentType::WithManager", (int64)EELEntranceNameplateCommentArgumentType::WithManager },
				{ "EELEntranceNameplateCommentArgumentType::TitleHolder", (int64)EELEntranceNameplateCommentArgumentType::TitleHolder },
				{ "EELEntranceNameplateCommentArgumentType::TitleDefendDays", (int64)EELEntranceNameplateCommentArgumentType::TitleDefendDays },
				{ "EELEntranceNameplateCommentArgumentType::BattleRoyalWinner", (int64)EELEntranceNameplateCommentArgumentType::BattleRoyalWinner },
				{ "EELEntranceNameplateCommentArgumentType::CAWHeight", (int64)EELEntranceNameplateCommentArgumentType::CAWHeight },
				{ "EELEntranceNameplateCommentArgumentType::CAWWeight", (int64)EELEntranceNameplateCommentArgumentType::CAWWeight },
				{ "EELEntranceNameplateCommentArgumentType::TagTeamID", (int64)EELEntranceNameplateCommentArgumentType::TagTeamID },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BattleRoyalWinner.Name", "EELEntranceNameplateCommentArgumentType::BattleRoyalWinner" },
				{ "BletID.Name", "EELEntranceNameplateCommentArgumentType::BletID" },
				{ "BlueprintType", "true" },
				{ "CAWHeight.Name", "EELEntranceNameplateCommentArgumentType::CAWHeight" },
				{ "CAWWeight.Name", "EELEntranceNameplateCommentArgumentType::CAWWeight" },
				{ "EntryCount.Name", "EELEntranceNameplateCommentArgumentType::EntryCount" },
				{ "LastEntry.Name", "EELEntranceNameplateCommentArgumentType::LastEntry" },
				{ "ManagerID.Name", "EELEntranceNameplateCommentArgumentType::ManagerID" },
				{ "ModuleRelativePath", "Public/EELEntranceNameplateCommentArgumentType.h" },
				{ "Streak.Name", "EELEntranceNameplateCommentArgumentType::Streak" },
				{ "TagTeamID.Name", "EELEntranceNameplateCommentArgumentType::TagTeamID" },
				{ "TeamID.Name", "EELEntranceNameplateCommentArgumentType::TeamID" },
				{ "TitleDefendDays.Name", "EELEntranceNameplateCommentArgumentType::TitleDefendDays" },
				{ "TitleHolder.Name", "EELEntranceNameplateCommentArgumentType::TitleHolder" },
				{ "WithManager.Name", "EELEntranceNameplateCommentArgumentType::WithManager" },
				{ "WrestlerID.Name", "EELEntranceNameplateCommentArgumentType::WrestlerID" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EELEntranceNameplateCommentArgumentType",
				"EELEntranceNameplateCommentArgumentType",
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
