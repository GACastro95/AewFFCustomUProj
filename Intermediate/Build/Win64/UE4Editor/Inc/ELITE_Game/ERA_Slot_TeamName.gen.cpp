// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ERA_Slot_TeamName.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeERA_Slot_TeamName() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ERA_Slot_TeamName();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* ERA_Slot_TeamName_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_ERA_Slot_TeamName, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ERA_Slot_TeamName"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<ERA_Slot_TeamName>()
	{
		return ERA_Slot_TeamName_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERA_Slot_TeamName(ERA_Slot_TeamName_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("ERA_Slot_TeamName"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_ERA_Slot_TeamName_Hash() { return 4213939644U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_ERA_Slot_TeamName()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERA_Slot_TeamName"), 0, Get_Z_Construct_UEnum_ELITE_Game_ERA_Slot_TeamName_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERA_Slot_TeamName::RA_TN_NONE", (int64)ERA_Slot_TeamName::RA_TN_NONE },
				{ "ERA_Slot_TeamName::RA_TN_BEST_FRIENDS", (int64)ERA_Slot_TeamName::RA_TN_BEST_FRIENDS },
				{ "ERA_Slot_TeamName::RA_TN_THE_DARK_ORDER", (int64)ERA_Slot_TeamName::RA_TN_THE_DARK_ORDER },
				{ "ERA_Slot_TeamName::RA_TN_DEATH_TRIANGLE", (int64)ERA_Slot_TeamName::RA_TN_DEATH_TRIANGLE },
				{ "ERA_Slot_TeamName::RA_TN_THE_ELITE", (int64)ERA_Slot_TeamName::RA_TN_THE_ELITE },
				{ "ERA_Slot_TeamName::RA_TN_THE_INNER_CIRCLE", (int64)ERA_Slot_TeamName::RA_TN_THE_INNER_CIRCLE },
				{ "ERA_Slot_TeamName::RA_TN_JURASSIC_EXPRESS", (int64)ERA_Slot_TeamName::RA_TN_JURASSIC_EXPRESS },
				{ "ERA_Slot_TeamName::RA_TN_LUCHA_BROS", (int64)ERA_Slot_TeamName::RA_TN_LUCHA_BROS },
				{ "ERA_Slot_TeamName::RA_TN_SCU", (int64)ERA_Slot_TeamName::RA_TN_SCU },
				{ "ERA_Slot_TeamName::RA_TN_THE_YOUNG_BUCKS", (int64)ERA_Slot_TeamName::RA_TN_THE_YOUNG_BUCKS },
				{ "ERA_Slot_TeamName::RA_TN_TEAM_TAZ", (int64)ERA_Slot_TeamName::RA_TN_TEAM_TAZ },
				{ "ERA_Slot_TeamName::RA_TN_THE_ACCLAIMED", (int64)ERA_Slot_TeamName::RA_TN_THE_ACCLAIMED },
				{ "ERA_Slot_TeamName::RA_TN_TOP_FLIGHT", (int64)ERA_Slot_TeamName::RA_TN_TOP_FLIGHT },
				{ "ERA_Slot_TeamName::RA_TN_THE_GUNN_CLUB", (int64)ERA_Slot_TeamName::RA_TN_THE_GUNN_CLUB },
				{ "ERA_Slot_TeamName::RA_TN_THE_BUTCHER_N_THE_BLADE", (int64)ERA_Slot_TeamName::RA_TN_THE_BUTCHER_N_THE_BLADE },
				{ "ERA_Slot_TeamName::RA_TN_PROUD_N_POWERFUL", (int64)ERA_Slot_TeamName::RA_TN_PROUD_N_POWERFUL },
				{ "ERA_Slot_TeamName::RA_TN_NIGHTMARE_FAMILY", (int64)ERA_Slot_TeamName::RA_TN_NIGHTMARE_FAMILY },
				{ "ERA_Slot_TeamName::RA_TN_NATURAL_NIGHTMARES", (int64)ERA_Slot_TeamName::RA_TN_NATURAL_NIGHTMARES },
				{ "ERA_Slot_TeamName::RA_TN_PRIVATE_PARTY", (int64)ERA_Slot_TeamName::RA_TN_PRIVATE_PARTY },
				{ "ERA_Slot_TeamName::RA_TN_CHAOS_PROJECT", (int64)ERA_Slot_TeamName::RA_TN_CHAOS_PROJECT },
				{ "ERA_Slot_TeamName::RA_TN_THE_HYBRID2", (int64)ERA_Slot_TeamName::RA_TN_THE_HYBRID2 },
				{ "ERA_Slot_TeamName::RA_TN_FTR", (int64)ERA_Slot_TeamName::RA_TN_FTR },
				{ "ERA_Slot_TeamName::RA_TN_THE_BROTHERHOOD", (int64)ERA_Slot_TeamName::RA_TN_THE_BROTHERHOOD },
				{ "ERA_Slot_TeamName::RA_TN_VARSITY_BLONDES", (int64)ERA_Slot_TeamName::RA_TN_VARSITY_BLONDES },
				{ "ERA_Slot_TeamName::RA_TN_MAX", (int64)ERA_Slot_TeamName::RA_TN_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ERA_Slot_TeamName.h" },
				{ "RA_TN_BEST_FRIENDS.Name", "ERA_Slot_TeamName::RA_TN_BEST_FRIENDS" },
				{ "RA_TN_CHAOS_PROJECT.Name", "ERA_Slot_TeamName::RA_TN_CHAOS_PROJECT" },
				{ "RA_TN_DEATH_TRIANGLE.Name", "ERA_Slot_TeamName::RA_TN_DEATH_TRIANGLE" },
				{ "RA_TN_FTR.Name", "ERA_Slot_TeamName::RA_TN_FTR" },
				{ "RA_TN_JURASSIC_EXPRESS.Name", "ERA_Slot_TeamName::RA_TN_JURASSIC_EXPRESS" },
				{ "RA_TN_LUCHA_BROS.Name", "ERA_Slot_TeamName::RA_TN_LUCHA_BROS" },
				{ "RA_TN_MAX.Hidden", "" },
				{ "RA_TN_MAX.Name", "ERA_Slot_TeamName::RA_TN_MAX" },
				{ "RA_TN_NATURAL_NIGHTMARES.Name", "ERA_Slot_TeamName::RA_TN_NATURAL_NIGHTMARES" },
				{ "RA_TN_NIGHTMARE_FAMILY.Name", "ERA_Slot_TeamName::RA_TN_NIGHTMARE_FAMILY" },
				{ "RA_TN_NONE.Name", "ERA_Slot_TeamName::RA_TN_NONE" },
				{ "RA_TN_PRIVATE_PARTY.Name", "ERA_Slot_TeamName::RA_TN_PRIVATE_PARTY" },
				{ "RA_TN_PROUD_N_POWERFUL.Name", "ERA_Slot_TeamName::RA_TN_PROUD_N_POWERFUL" },
				{ "RA_TN_SCU.Name", "ERA_Slot_TeamName::RA_TN_SCU" },
				{ "RA_TN_TEAM_TAZ.Name", "ERA_Slot_TeamName::RA_TN_TEAM_TAZ" },
				{ "RA_TN_THE_ACCLAIMED.Name", "ERA_Slot_TeamName::RA_TN_THE_ACCLAIMED" },
				{ "RA_TN_THE_BROTHERHOOD.Name", "ERA_Slot_TeamName::RA_TN_THE_BROTHERHOOD" },
				{ "RA_TN_THE_BUTCHER_N_THE_BLADE.Name", "ERA_Slot_TeamName::RA_TN_THE_BUTCHER_N_THE_BLADE" },
				{ "RA_TN_THE_DARK_ORDER.Name", "ERA_Slot_TeamName::RA_TN_THE_DARK_ORDER" },
				{ "RA_TN_THE_ELITE.Name", "ERA_Slot_TeamName::RA_TN_THE_ELITE" },
				{ "RA_TN_THE_GUNN_CLUB.Name", "ERA_Slot_TeamName::RA_TN_THE_GUNN_CLUB" },
				{ "RA_TN_THE_HYBRID2.Name", "ERA_Slot_TeamName::RA_TN_THE_HYBRID2" },
				{ "RA_TN_THE_INNER_CIRCLE.Name", "ERA_Slot_TeamName::RA_TN_THE_INNER_CIRCLE" },
				{ "RA_TN_THE_YOUNG_BUCKS.Name", "ERA_Slot_TeamName::RA_TN_THE_YOUNG_BUCKS" },
				{ "RA_TN_TOP_FLIGHT.Name", "ERA_Slot_TeamName::RA_TN_TOP_FLIGHT" },
				{ "RA_TN_VARSITY_BLONDES.Name", "ERA_Slot_TeamName::RA_TN_VARSITY_BLONDES" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"ERA_Slot_TeamName",
				"ERA_Slot_TeamName",
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
