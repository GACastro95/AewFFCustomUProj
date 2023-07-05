// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ERA_Slot_VictoryChampionShip.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeERA_Slot_VictoryChampionShip() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ERA_Slot_VictoryChampionShip();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* ERA_Slot_VictoryChampionShip_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_ERA_Slot_VictoryChampionShip, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ERA_Slot_VictoryChampionShip"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<ERA_Slot_VictoryChampionShip>()
	{
		return ERA_Slot_VictoryChampionShip_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERA_Slot_VictoryChampionShip(ERA_Slot_VictoryChampionShip_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("ERA_Slot_VictoryChampionShip"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_ERA_Slot_VictoryChampionShip_Hash() { return 2827580181U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_ERA_Slot_VictoryChampionShip()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERA_Slot_VictoryChampionShip"), 0, Get_Z_Construct_UEnum_ELITE_Game_ERA_Slot_VictoryChampionShip_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERA_Slot_VictoryChampionShip::RA_VIC_CHAMPION_NONE", (int64)ERA_Slot_VictoryChampionShip::RA_VIC_CHAMPION_NONE },
				{ "ERA_Slot_VictoryChampionShip::RA_VIC_CHAMPION_DEF_AEW", (int64)ERA_Slot_VictoryChampionShip::RA_VIC_CHAMPION_DEF_AEW },
				{ "ERA_Slot_VictoryChampionShip::RA_VIC_CHAMPION_DEF_TNT", (int64)ERA_Slot_VictoryChampionShip::RA_VIC_CHAMPION_DEF_TNT },
				{ "ERA_Slot_VictoryChampionShip::RA_VIC_CHAMPION_DEF_AEW_WOMEN", (int64)ERA_Slot_VictoryChampionShip::RA_VIC_CHAMPION_DEF_AEW_WOMEN },
				{ "ERA_Slot_VictoryChampionShip::RA_VIC_CHAMPION_DEF_AEW_TAG", (int64)ERA_Slot_VictoryChampionShip::RA_VIC_CHAMPION_DEF_AEW_TAG },
				{ "ERA_Slot_VictoryChampionShip::RA_VIC_CHAMPION_DEF_FTW", (int64)ERA_Slot_VictoryChampionShip::RA_VIC_CHAMPION_DEF_FTW },
				{ "ERA_Slot_VictoryChampionShip::RA_VIC_CHAMPION_NEW_AEW", (int64)ERA_Slot_VictoryChampionShip::RA_VIC_CHAMPION_NEW_AEW },
				{ "ERA_Slot_VictoryChampionShip::RA_VIC_CHAMPION_NEW_TNT", (int64)ERA_Slot_VictoryChampionShip::RA_VIC_CHAMPION_NEW_TNT },
				{ "ERA_Slot_VictoryChampionShip::RA_VIC_CHAMPION_NEW_AEW_WOMEN", (int64)ERA_Slot_VictoryChampionShip::RA_VIC_CHAMPION_NEW_AEW_WOMEN },
				{ "ERA_Slot_VictoryChampionShip::RA_VIC_CHAMPION_NEW_AEW_TAG", (int64)ERA_Slot_VictoryChampionShip::RA_VIC_CHAMPION_NEW_AEW_TAG },
				{ "ERA_Slot_VictoryChampionShip::RA_VIC_CHAMPION_NEW_FTW", (int64)ERA_Slot_VictoryChampionShip::RA_VIC_CHAMPION_NEW_FTW },
				{ "ERA_Slot_VictoryChampionShip::RA_VIC_CHAMPION_MAX", (int64)ERA_Slot_VictoryChampionShip::RA_VIC_CHAMPION_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ERA_Slot_VictoryChampionShip.h" },
				{ "RA_VIC_CHAMPION_DEF_AEW.Name", "ERA_Slot_VictoryChampionShip::RA_VIC_CHAMPION_DEF_AEW" },
				{ "RA_VIC_CHAMPION_DEF_AEW_TAG.Name", "ERA_Slot_VictoryChampionShip::RA_VIC_CHAMPION_DEF_AEW_TAG" },
				{ "RA_VIC_CHAMPION_DEF_AEW_WOMEN.Name", "ERA_Slot_VictoryChampionShip::RA_VIC_CHAMPION_DEF_AEW_WOMEN" },
				{ "RA_VIC_CHAMPION_DEF_FTW.Name", "ERA_Slot_VictoryChampionShip::RA_VIC_CHAMPION_DEF_FTW" },
				{ "RA_VIC_CHAMPION_DEF_TNT.Name", "ERA_Slot_VictoryChampionShip::RA_VIC_CHAMPION_DEF_TNT" },
				{ "RA_VIC_CHAMPION_MAX.Hidden", "" },
				{ "RA_VIC_CHAMPION_MAX.Name", "ERA_Slot_VictoryChampionShip::RA_VIC_CHAMPION_MAX" },
				{ "RA_VIC_CHAMPION_NEW_AEW.Name", "ERA_Slot_VictoryChampionShip::RA_VIC_CHAMPION_NEW_AEW" },
				{ "RA_VIC_CHAMPION_NEW_AEW_TAG.Name", "ERA_Slot_VictoryChampionShip::RA_VIC_CHAMPION_NEW_AEW_TAG" },
				{ "RA_VIC_CHAMPION_NEW_AEW_WOMEN.Name", "ERA_Slot_VictoryChampionShip::RA_VIC_CHAMPION_NEW_AEW_WOMEN" },
				{ "RA_VIC_CHAMPION_NEW_FTW.Name", "ERA_Slot_VictoryChampionShip::RA_VIC_CHAMPION_NEW_FTW" },
				{ "RA_VIC_CHAMPION_NEW_TNT.Name", "ERA_Slot_VictoryChampionShip::RA_VIC_CHAMPION_NEW_TNT" },
				{ "RA_VIC_CHAMPION_NONE.Name", "ERA_Slot_VictoryChampionShip::RA_VIC_CHAMPION_NONE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"ERA_Slot_VictoryChampionShip",
				"ERA_Slot_VictoryChampionShip",
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
