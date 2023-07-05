// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ERingAnnounceGroupType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeERingAnnounceGroupType() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ERingAnnounceGroupType();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* ERingAnnounceGroupType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_ERingAnnounceGroupType, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ERingAnnounceGroupType"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<ERingAnnounceGroupType>()
	{
		return ERingAnnounceGroupType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERingAnnounceGroupType(ERingAnnounceGroupType_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("ERingAnnounceGroupType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_ERingAnnounceGroupType_Hash() { return 2307918269U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_ERingAnnounceGroupType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERingAnnounceGroupType"), 0, Get_Z_Construct_UEnum_ELITE_Game_ERingAnnounceGroupType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERingAnnounceGroupType::Intro", (int64)ERingAnnounceGroupType::Intro },
				{ "ERingAnnounceGroupType::ChampionShip", (int64)ERingAnnounceGroupType::ChampionShip },
				{ "ERingAnnounceGroupType::MatchRule", (int64)ERingAnnounceGroupType::MatchRule },
				{ "ERingAnnounceGroupType::Victory", (int64)ERingAnnounceGroupType::Victory },
				{ "ERingAnnounceGroupType::VictoryChampionShip", (int64)ERingAnnounceGroupType::VictoryChampionShip },
				{ "ERingAnnounceGroupType::WrestlerName", (int64)ERingAnnounceGroupType::WrestlerName },
				{ "ERingAnnounceGroupType::TeamName", (int64)ERingAnnounceGroupType::TeamName },
				{ "ERingAnnounceGroupType::CustomName", (int64)ERingAnnounceGroupType::CustomName },
				{ "ERingAnnounceGroupType::Other", (int64)ERingAnnounceGroupType::Other },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ChampionShip.Name", "ERingAnnounceGroupType::ChampionShip" },
				{ "CustomName.Name", "ERingAnnounceGroupType::CustomName" },
				{ "Intro.Name", "ERingAnnounceGroupType::Intro" },
				{ "MatchRule.Name", "ERingAnnounceGroupType::MatchRule" },
				{ "ModuleRelativePath", "Public/ERingAnnounceGroupType.h" },
				{ "Other.Name", "ERingAnnounceGroupType::Other" },
				{ "TeamName.Name", "ERingAnnounceGroupType::TeamName" },
				{ "Victory.Name", "ERingAnnounceGroupType::Victory" },
				{ "VictoryChampionShip.Name", "ERingAnnounceGroupType::VictoryChampionShip" },
				{ "WrestlerName.Name", "ERingAnnounceGroupType::WrestlerName" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"ERingAnnounceGroupType",
				"ERingAnnounceGroupType",
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
