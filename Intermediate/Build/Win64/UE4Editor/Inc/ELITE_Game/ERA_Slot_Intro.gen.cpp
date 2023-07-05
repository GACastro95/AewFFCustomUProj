// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ERA_Slot_Intro.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeERA_Slot_Intro() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ERA_Slot_Intro();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* ERA_Slot_Intro_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_ERA_Slot_Intro, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ERA_Slot_Intro"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<ERA_Slot_Intro>()
	{
		return ERA_Slot_Intro_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERA_Slot_Intro(ERA_Slot_Intro_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("ERA_Slot_Intro"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_ERA_Slot_Intro_Hash() { return 2858610515U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_ERA_Slot_Intro()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERA_Slot_Intro"), 0, Get_Z_Construct_UEnum_ELITE_Game_ERA_Slot_Intro_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERA_Slot_Intro::RA_INTRO_FIRST", (int64)ERA_Slot_Intro::RA_INTRO_FIRST },
				{ "ERA_Slot_Intro::RA_INTRO_FIRST_MALE", (int64)ERA_Slot_Intro::RA_INTRO_FIRST_MALE },
				{ "ERA_Slot_Intro::RA_INTRO_FIRST_FEMALE", (int64)ERA_Slot_Intro::RA_INTRO_FIRST_FEMALE },
				{ "ERA_Slot_Intro::RA_INTRO_FIRST_TEAM", (int64)ERA_Slot_Intro::RA_INTRO_FIRST_TEAM },
				{ "ERA_Slot_Intro::RA_INTRO_OPPONENT_MALE", (int64)ERA_Slot_Intro::RA_INTRO_OPPONENT_MALE },
				{ "ERA_Slot_Intro::RA_INTRO_OPPONENT_FEMALE", (int64)ERA_Slot_Intro::RA_INTRO_OPPONENT_FEMALE },
				{ "ERA_Slot_Intro::RA_INTRO_2ND_TEAM", (int64)ERA_Slot_Intro::RA_INTRO_2ND_TEAM },
				{ "ERA_Slot_Intro::RA_INTRO_PARTNER_MALE", (int64)ERA_Slot_Intro::RA_INTRO_PARTNER_MALE },
				{ "ERA_Slot_Intro::RA_INTRO_PARTNER_FEMALE", (int64)ERA_Slot_Intro::RA_INTRO_PARTNER_FEMALE },
				{ "ERA_Slot_Intro::RA_INTRO_NEXT", (int64)ERA_Slot_Intro::RA_INTRO_NEXT },
				{ "ERA_Slot_Intro::RA_INTRO_CHALLENGER", (int64)ERA_Slot_Intro::RA_INTRO_CHALLENGER },
				{ "ERA_Slot_Intro::RA_INTRO_CHAMPION", (int64)ERA_Slot_Intro::RA_INTRO_CHAMPION },
				{ "ERA_Slot_Intro::RA_INTRO_CHAMPIONS_FIRST", (int64)ERA_Slot_Intro::RA_INTRO_CHAMPIONS_FIRST },
				{ "ERA_Slot_Intro::RA_INTRO_CHALLENGERS_FIRST", (int64)ERA_Slot_Intro::RA_INTRO_CHALLENGERS_FIRST },
				{ "ERA_Slot_Intro::RA_INTRO_MAX", (int64)ERA_Slot_Intro::RA_INTRO_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ERA_Slot_Intro.h" },
				{ "RA_INTRO_2ND_TEAM.Name", "ERA_Slot_Intro::RA_INTRO_2ND_TEAM" },
				{ "RA_INTRO_CHALLENGER.Name", "ERA_Slot_Intro::RA_INTRO_CHALLENGER" },
				{ "RA_INTRO_CHALLENGERS_FIRST.Name", "ERA_Slot_Intro::RA_INTRO_CHALLENGERS_FIRST" },
				{ "RA_INTRO_CHAMPION.Name", "ERA_Slot_Intro::RA_INTRO_CHAMPION" },
				{ "RA_INTRO_CHAMPIONS_FIRST.Name", "ERA_Slot_Intro::RA_INTRO_CHAMPIONS_FIRST" },
				{ "RA_INTRO_FIRST.Name", "ERA_Slot_Intro::RA_INTRO_FIRST" },
				{ "RA_INTRO_FIRST_FEMALE.Name", "ERA_Slot_Intro::RA_INTRO_FIRST_FEMALE" },
				{ "RA_INTRO_FIRST_MALE.Name", "ERA_Slot_Intro::RA_INTRO_FIRST_MALE" },
				{ "RA_INTRO_FIRST_TEAM.Name", "ERA_Slot_Intro::RA_INTRO_FIRST_TEAM" },
				{ "RA_INTRO_MAX.Hidden", "" },
				{ "RA_INTRO_MAX.Name", "ERA_Slot_Intro::RA_INTRO_MAX" },
				{ "RA_INTRO_NEXT.Name", "ERA_Slot_Intro::RA_INTRO_NEXT" },
				{ "RA_INTRO_OPPONENT_FEMALE.Name", "ERA_Slot_Intro::RA_INTRO_OPPONENT_FEMALE" },
				{ "RA_INTRO_OPPONENT_MALE.Name", "ERA_Slot_Intro::RA_INTRO_OPPONENT_MALE" },
				{ "RA_INTRO_PARTNER_FEMALE.Name", "ERA_Slot_Intro::RA_INTRO_PARTNER_FEMALE" },
				{ "RA_INTRO_PARTNER_MALE.Name", "ERA_Slot_Intro::RA_INTRO_PARTNER_MALE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"ERA_Slot_Intro",
				"ERA_Slot_Intro",
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
