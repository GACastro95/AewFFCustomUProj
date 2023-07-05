// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EELDebugMatchType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELDebugMatchType() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELDebugMatchType();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EELDebugMatchType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EELDebugMatchType, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EELDebugMatchType"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EELDebugMatchType>()
	{
		return EELDebugMatchType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELDebugMatchType(EELDebugMatchType_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EELDebugMatchType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EELDebugMatchType_Hash() { return 2586635724U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EELDebugMatchType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELDebugMatchType"), 0, Get_Z_Construct_UEnum_ELITE_Game_EELDebugMatchType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELDebugMatchType::DEBUG_MATCH_RULE_SINGLE_ALLPLAYER", (int64)EELDebugMatchType::DEBUG_MATCH_RULE_SINGLE_ALLPLAYER },
				{ "EELDebugMatchType::DEBUG_MATCH_RULE_SINGLE_1PVSCOM", (int64)EELDebugMatchType::DEBUG_MATCH_RULE_SINGLE_1PVSCOM },
				{ "EELDebugMatchType::DEBUG_MATCH_RULE_TAG_ALLPLAYER", (int64)EELDebugMatchType::DEBUG_MATCH_RULE_TAG_ALLPLAYER },
				{ "EELDebugMatchType::DEBUG_MATCH_RULE_TAG_1PVSCOM", (int64)EELDebugMatchType::DEBUG_MATCH_RULE_TAG_1PVSCOM },
				{ "EELDebugMatchType::DEBUG_MATCH_RULE_3WAY_ALLPLAYER", (int64)EELDebugMatchType::DEBUG_MATCH_RULE_3WAY_ALLPLAYER },
				{ "EELDebugMatchType::DEBUG_MATCH_RULE_3WAY_1PVSCOM", (int64)EELDebugMatchType::DEBUG_MATCH_RULE_3WAY_1PVSCOM },
				{ "EELDebugMatchType::DEBUG_CASINO_BATTLE_ROYAL_TYPE_A_ALLPLAYER", (int64)EELDebugMatchType::DEBUG_CASINO_BATTLE_ROYAL_TYPE_A_ALLPLAYER },
				{ "EELDebugMatchType::DEBUG_CASINO_BATTLE_ROYAL_TYPE_A_1PVSCOM", (int64)EELDebugMatchType::DEBUG_CASINO_BATTLE_ROYAL_TYPE_A_1PVSCOM },
				{ "EELDebugMatchType::DEBUG_CASINO_BATTLE_ROYAL_TYPE_B_1PVSCOM", (int64)EELDebugMatchType::DEBUG_CASINO_BATTLE_ROYAL_TYPE_B_1PVSCOM },
				{ "EELDebugMatchType::DEBUG_MATCH_RULE_EXPLODING", (int64)EELDebugMatchType::DEBUG_MATCH_RULE_EXPLODING },
				{ "EELDebugMatchType::DEBUG_MATCH_RULE_LIGHTS_OUT", (int64)EELDebugMatchType::DEBUG_MATCH_RULE_LIGHTS_OUT },
				{ "EELDebugMatchType::DEBUG_MATCH_RULE_FALLS_COUNT_ANYWHERE", (int64)EELDebugMatchType::DEBUG_MATCH_RULE_FALLS_COUNT_ANYWHERE },
				{ "EELDebugMatchType::DEBUG_MATCH_RULE_4WAY_ALLPLAYER", (int64)EELDebugMatchType::DEBUG_MATCH_RULE_4WAY_ALLPLAYER },
				{ "EELDebugMatchType::DEBUG_MAX", (int64)EELDebugMatchType::DEBUG_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DEBUG_CASINO_BATTLE_ROYAL_TYPE_A_1PVSCOM.Name", "EELDebugMatchType::DEBUG_CASINO_BATTLE_ROYAL_TYPE_A_1PVSCOM" },
				{ "DEBUG_CASINO_BATTLE_ROYAL_TYPE_A_ALLPLAYER.Name", "EELDebugMatchType::DEBUG_CASINO_BATTLE_ROYAL_TYPE_A_ALLPLAYER" },
				{ "DEBUG_CASINO_BATTLE_ROYAL_TYPE_B_1PVSCOM.Name", "EELDebugMatchType::DEBUG_CASINO_BATTLE_ROYAL_TYPE_B_1PVSCOM" },
				{ "DEBUG_MATCH_RULE_3WAY_1PVSCOM.Name", "EELDebugMatchType::DEBUG_MATCH_RULE_3WAY_1PVSCOM" },
				{ "DEBUG_MATCH_RULE_3WAY_ALLPLAYER.Name", "EELDebugMatchType::DEBUG_MATCH_RULE_3WAY_ALLPLAYER" },
				{ "DEBUG_MATCH_RULE_4WAY_ALLPLAYER.Name", "EELDebugMatchType::DEBUG_MATCH_RULE_4WAY_ALLPLAYER" },
				{ "DEBUG_MATCH_RULE_EXPLODING.Name", "EELDebugMatchType::DEBUG_MATCH_RULE_EXPLODING" },
				{ "DEBUG_MATCH_RULE_FALLS_COUNT_ANYWHERE.Name", "EELDebugMatchType::DEBUG_MATCH_RULE_FALLS_COUNT_ANYWHERE" },
				{ "DEBUG_MATCH_RULE_LIGHTS_OUT.Name", "EELDebugMatchType::DEBUG_MATCH_RULE_LIGHTS_OUT" },
				{ "DEBUG_MATCH_RULE_SINGLE_1PVSCOM.Name", "EELDebugMatchType::DEBUG_MATCH_RULE_SINGLE_1PVSCOM" },
				{ "DEBUG_MATCH_RULE_SINGLE_ALLPLAYER.Name", "EELDebugMatchType::DEBUG_MATCH_RULE_SINGLE_ALLPLAYER" },
				{ "DEBUG_MATCH_RULE_TAG_1PVSCOM.Name", "EELDebugMatchType::DEBUG_MATCH_RULE_TAG_1PVSCOM" },
				{ "DEBUG_MATCH_RULE_TAG_ALLPLAYER.Name", "EELDebugMatchType::DEBUG_MATCH_RULE_TAG_ALLPLAYER" },
				{ "DEBUG_MAX.Hidden", "" },
				{ "DEBUG_MAX.Name", "EELDebugMatchType::DEBUG_MAX" },
				{ "ModuleRelativePath", "Public/EELDebugMatchType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EELDebugMatchType",
				"EELDebugMatchType",
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
