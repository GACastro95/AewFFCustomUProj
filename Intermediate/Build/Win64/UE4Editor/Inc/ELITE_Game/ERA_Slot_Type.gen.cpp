// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/ERA_Slot_Type.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeERA_Slot_Type() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_ERA_Slot_Type();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* ERA_Slot_Type_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_ERA_Slot_Type, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("ERA_Slot_Type"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<ERA_Slot_Type>()
	{
		return ERA_Slot_Type_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERA_Slot_Type(ERA_Slot_Type_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("ERA_Slot_Type"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_ERA_Slot_Type_Hash() { return 607197702U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_ERA_Slot_Type()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERA_Slot_Type"), 0, Get_Z_Construct_UEnum_ELITE_Game_ERA_Slot_Type_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERA_Slot_Type::None", (int64)ERA_Slot_Type::None },
				{ "ERA_Slot_Type::MatchRules", (int64)ERA_Slot_Type::MatchRules },
				{ "ERA_Slot_Type::Championship", (int64)ERA_Slot_Type::Championship },
				{ "ERA_Slot_Type::Intro", (int64)ERA_Slot_Type::Intro },
				{ "ERA_Slot_Type::TeamName", (int64)ERA_Slot_Type::TeamName },
				{ "ERA_Slot_Type::RosterName", (int64)ERA_Slot_Type::RosterName },
				{ "ERA_Slot_Type::NameOpen", (int64)ERA_Slot_Type::NameOpen },
				{ "ERA_Slot_Type::NameClose", (int64)ERA_Slot_Type::NameClose },
				{ "ERA_Slot_Type::TagName", (int64)ERA_Slot_Type::TagName },
				{ "ERA_Slot_Type::TagOpen", (int64)ERA_Slot_Type::TagOpen },
				{ "ERA_Slot_Type::TagClose", (int64)ERA_Slot_Type::TagClose },
				{ "ERA_Slot_Type::Victory", (int64)ERA_Slot_Type::Victory },
				{ "ERA_Slot_Type::VictoryChampionship", (int64)ERA_Slot_Type::VictoryChampionship },
				{ "ERA_Slot_Type::ERA_Slot_MAX", (int64)ERA_Slot_Type::ERA_Slot_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Championship.Name", "ERA_Slot_Type::Championship" },
				{ "ERA_Slot_MAX.Hidden", "" },
				{ "ERA_Slot_MAX.Name", "ERA_Slot_Type::ERA_Slot_MAX" },
				{ "Intro.Name", "ERA_Slot_Type::Intro" },
				{ "MatchRules.Name", "ERA_Slot_Type::MatchRules" },
				{ "ModuleRelativePath", "Public/ERA_Slot_Type.h" },
				{ "NameClose.Name", "ERA_Slot_Type::NameClose" },
				{ "NameOpen.Name", "ERA_Slot_Type::NameOpen" },
				{ "None.Name", "ERA_Slot_Type::None" },
				{ "RosterName.Name", "ERA_Slot_Type::RosterName" },
				{ "TagClose.Name", "ERA_Slot_Type::TagClose" },
				{ "TagName.Name", "ERA_Slot_Type::TagName" },
				{ "TagOpen.Name", "ERA_Slot_Type::TagOpen" },
				{ "TeamName.Name", "ERA_Slot_Type::TeamName" },
				{ "Victory.Name", "ERA_Slot_Type::Victory" },
				{ "VictoryChampionship.Name", "ERA_Slot_Type::VictoryChampionship" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"ERA_Slot_Type",
				"ERA_Slot_Type",
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
