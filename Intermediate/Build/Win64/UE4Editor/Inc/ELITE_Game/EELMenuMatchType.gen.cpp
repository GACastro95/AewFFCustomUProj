// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EELMenuMatchType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELMenuMatchType() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELMenuMatchType();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EELMenuMatchType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EELMenuMatchType, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EELMenuMatchType"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EELMenuMatchType>()
	{
		return EELMenuMatchType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELMenuMatchType(EELMenuMatchType_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EELMenuMatchType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EELMenuMatchType_Hash() { return 689259673U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EELMenuMatchType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELMenuMatchType"), 0, Get_Z_Construct_UEnum_ELITE_Game_EELMenuMatchType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELMenuMatchType::SINGLE_MATCH_ONLINE", (int64)EELMenuMatchType::SINGLE_MATCH_ONLINE },
				{ "EELMenuMatchType::SINGLE_MATCH", (int64)EELMenuMatchType::SINGLE_MATCH },
				{ "EELMenuMatchType::SINGLE_MATCH_1PMG", (int64)EELMenuMatchType::SINGLE_MATCH_1PMG },
				{ "EELMenuMatchType::SINGLE_MATCH_2PMG", (int64)EELMenuMatchType::SINGLE_MATCH_2PMG },
				{ "EELMenuMatchType::SINGLE_MATCH_1P2PMG", (int64)EELMenuMatchType::SINGLE_MATCH_1P2PMG },
				{ "EELMenuMatchType::TAG_TEAM_MATCH", (int64)EELMenuMatchType::TAG_TEAM_MATCH },
				{ "EELMenuMatchType::TAG_TEAM_MATCH_1TMG", (int64)EELMenuMatchType::TAG_TEAM_MATCH_1TMG },
				{ "EELMenuMatchType::TAG_TEAM_MATCH_2TMG", (int64)EELMenuMatchType::TAG_TEAM_MATCH_2TMG },
				{ "EELMenuMatchType::TAG_TEAM_MATCH_1T2TMG", (int64)EELMenuMatchType::TAG_TEAM_MATCH_1T2TMG },
				{ "EELMenuMatchType::THREE_WAY_MATCH", (int64)EELMenuMatchType::THREE_WAY_MATCH },
				{ "EELMenuMatchType::FOUR_WAY_MATCH", (int64)EELMenuMatchType::FOUR_WAY_MATCH },
				{ "EELMenuMatchType::TRIPLE_TEAM_MATCH", (int64)EELMenuMatchType::TRIPLE_TEAM_MATCH },
				{ "EELMenuMatchType::CASINO_BATTLE_ROYAL", (int64)EELMenuMatchType::CASINO_BATTLE_ROYAL },
				{ "EELMenuMatchType::HANDICAP_1ON2", (int64)EELMenuMatchType::HANDICAP_1ON2 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CASINO_BATTLE_ROYAL.Name", "EELMenuMatchType::CASINO_BATTLE_ROYAL" },
				{ "FOUR_WAY_MATCH.Name", "EELMenuMatchType::FOUR_WAY_MATCH" },
				{ "HANDICAP_1ON2.Name", "EELMenuMatchType::HANDICAP_1ON2" },
				{ "ModuleRelativePath", "Public/EELMenuMatchType.h" },
				{ "SINGLE_MATCH.Name", "EELMenuMatchType::SINGLE_MATCH" },
				{ "SINGLE_MATCH_1P2PMG.Name", "EELMenuMatchType::SINGLE_MATCH_1P2PMG" },
				{ "SINGLE_MATCH_1PMG.Name", "EELMenuMatchType::SINGLE_MATCH_1PMG" },
				{ "SINGLE_MATCH_2PMG.Name", "EELMenuMatchType::SINGLE_MATCH_2PMG" },
				{ "SINGLE_MATCH_ONLINE.Name", "EELMenuMatchType::SINGLE_MATCH_ONLINE" },
				{ "TAG_TEAM_MATCH.Name", "EELMenuMatchType::TAG_TEAM_MATCH" },
				{ "TAG_TEAM_MATCH_1T2TMG.Name", "EELMenuMatchType::TAG_TEAM_MATCH_1T2TMG" },
				{ "TAG_TEAM_MATCH_1TMG.Name", "EELMenuMatchType::TAG_TEAM_MATCH_1TMG" },
				{ "TAG_TEAM_MATCH_2TMG.Name", "EELMenuMatchType::TAG_TEAM_MATCH_2TMG" },
				{ "THREE_WAY_MATCH.Name", "EELMenuMatchType::THREE_WAY_MATCH" },
				{ "TRIPLE_TEAM_MATCH.Name", "EELMenuMatchType::TRIPLE_TEAM_MATCH" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EELMenuMatchType",
				"EELMenuMatchType",
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
