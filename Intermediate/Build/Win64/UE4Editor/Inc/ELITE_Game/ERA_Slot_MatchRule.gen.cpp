// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ERA_Slot_MatchRule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeERA_Slot_MatchRule() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ERA_Slot_MatchRule();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* ERA_Slot_MatchRule_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_ERA_Slot_MatchRule, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ERA_Slot_MatchRule"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<ERA_Slot_MatchRule>()
	{
		return ERA_Slot_MatchRule_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERA_Slot_MatchRule(ERA_Slot_MatchRule_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("ERA_Slot_MatchRule"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_ERA_Slot_MatchRule_Hash() { return 134781604U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_ERA_Slot_MatchRule()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERA_Slot_MatchRule"), 0, Get_Z_Construct_UEnum_ELITE_Game_ERA_Slot_MatchRule_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERA_Slot_MatchRule::RA_MR_1V1", (int64)ERA_Slot_MatchRule::RA_MR_1V1 },
				{ "ERA_Slot_MatchRule::RA_MR_2V2", (int64)ERA_Slot_MatchRule::RA_MR_2V2 },
				{ "ERA_Slot_MatchRule::RA_MR_3V3", (int64)ERA_Slot_MatchRule::RA_MR_3V3 },
				{ "ERA_Slot_MatchRule::RA_MR_3WAY", (int64)ERA_Slot_MatchRule::RA_MR_3WAY },
				{ "ERA_Slot_MatchRule::RA_MR_4WAY", (int64)ERA_Slot_MatchRule::RA_MR_4WAY },
				{ "ERA_Slot_MatchRule::RA_MR_CASINO", (int64)ERA_Slot_MatchRule::RA_MR_CASINO },
				{ "ERA_Slot_MatchRule::RA_MR_UNSANCTIONED", (int64)ERA_Slot_MatchRule::RA_MR_UNSANCTIONED },
				{ "ERA_Slot_MatchRule::RA_MR_UNSANCTIONED_FULL", (int64)ERA_Slot_MatchRule::RA_MR_UNSANCTIONED_FULL },
				{ "ERA_Slot_MatchRule::RA_MR_FCAM", (int64)ERA_Slot_MatchRule::RA_MR_FCAM },
				{ "ERA_Slot_MatchRule::RA_MR_CAGE_FULL", (int64)ERA_Slot_MatchRule::RA_MR_CAGE_FULL },
				{ "ERA_Slot_MatchRule::RA_MR_CAGE", (int64)ERA_Slot_MatchRule::RA_MR_CAGE },
				{ "ERA_Slot_MatchRule::RA_MR_LADDER", (int64)ERA_Slot_MatchRule::RA_MR_LADDER },
				{ "ERA_Slot_MatchRule::RA_MR_CASINO_LADDER", (int64)ERA_Slot_MatchRule::RA_MR_CASINO_LADDER },
				{ "ERA_Slot_MatchRule::RA_MR_LIGHTSOUT", (int64)ERA_Slot_MatchRule::RA_MR_LIGHTSOUT },
				{ "ERA_Slot_MatchRule::RA_MR_EXPLODING", (int64)ERA_Slot_MatchRule::RA_MR_EXPLODING },
				{ "ERA_Slot_MatchRule::RA_MR_TRAINING", (int64)ERA_Slot_MatchRule::RA_MR_TRAINING },
				{ "ERA_Slot_MatchRule::RA_MR_MAX", (int64)ERA_Slot_MatchRule::RA_MR_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ERA_Slot_MatchRule.h" },
				{ "RA_MR_1V1.Name", "ERA_Slot_MatchRule::RA_MR_1V1" },
				{ "RA_MR_2V2.Name", "ERA_Slot_MatchRule::RA_MR_2V2" },
				{ "RA_MR_3V3.Name", "ERA_Slot_MatchRule::RA_MR_3V3" },
				{ "RA_MR_3WAY.Name", "ERA_Slot_MatchRule::RA_MR_3WAY" },
				{ "RA_MR_4WAY.Name", "ERA_Slot_MatchRule::RA_MR_4WAY" },
				{ "RA_MR_CAGE.Name", "ERA_Slot_MatchRule::RA_MR_CAGE" },
				{ "RA_MR_CAGE_FULL.Name", "ERA_Slot_MatchRule::RA_MR_CAGE_FULL" },
				{ "RA_MR_CASINO.Name", "ERA_Slot_MatchRule::RA_MR_CASINO" },
				{ "RA_MR_CASINO_LADDER.Name", "ERA_Slot_MatchRule::RA_MR_CASINO_LADDER" },
				{ "RA_MR_EXPLODING.Name", "ERA_Slot_MatchRule::RA_MR_EXPLODING" },
				{ "RA_MR_FCAM.Name", "ERA_Slot_MatchRule::RA_MR_FCAM" },
				{ "RA_MR_LADDER.Name", "ERA_Slot_MatchRule::RA_MR_LADDER" },
				{ "RA_MR_LIGHTSOUT.Name", "ERA_Slot_MatchRule::RA_MR_LIGHTSOUT" },
				{ "RA_MR_MAX.Hidden", "" },
				{ "RA_MR_MAX.Name", "ERA_Slot_MatchRule::RA_MR_MAX" },
				{ "RA_MR_TRAINING.Name", "ERA_Slot_MatchRule::RA_MR_TRAINING" },
				{ "RA_MR_UNSANCTIONED.Name", "ERA_Slot_MatchRule::RA_MR_UNSANCTIONED" },
				{ "RA_MR_UNSANCTIONED_FULL.Name", "ERA_Slot_MatchRule::RA_MR_UNSANCTIONED_FULL" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"ERA_Slot_MatchRule",
				"ERA_Slot_MatchRule",
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
