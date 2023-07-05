// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EELMatchType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELMatchType() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELMatchType();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EELMatchType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EELMatchType, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EELMatchType"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EELMatchType>()
	{
		return EELMatchType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELMatchType(EELMatchType_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EELMatchType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EELMatchType_Hash() { return 2582261573U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EELMatchType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELMatchType"), 0, Get_Z_Construct_UEnum_ELITE_Game_EELMatchType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELMatchType::SINGLE_MATCH", (int64)EELMatchType::SINGLE_MATCH },
				{ "EELMatchType::TAG_TEAM_MATCH", (int64)EELMatchType::TAG_TEAM_MATCH },
				{ "EELMatchType::THREE_WAY_MATCH", (int64)EELMatchType::THREE_WAY_MATCH },
				{ "EELMatchType::FOUR_WAY_MATCH", (int64)EELMatchType::FOUR_WAY_MATCH },
				{ "EELMatchType::FIVE_MAN_MATCH", (int64)EELMatchType::FIVE_MAN_MATCH },
				{ "EELMatchType::SIX_MAN_MATCH", (int64)EELMatchType::SIX_MAN_MATCH },
				{ "EELMatchType::CASINO_BATTLEROYAL", (int64)EELMatchType::CASINO_BATTLEROYAL },
				{ "EELMatchType::CASINO_BATTLEROYAL_TEAM", (int64)EELMatchType::CASINO_BATTLEROYAL_TEAM },
				{ "EELMatchType::STADIUM_STAMPEDE", (int64)EELMatchType::STADIUM_STAMPEDE },
				{ "EELMatchType::NONE", (int64)EELMatchType::NONE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CASINO_BATTLEROYAL.Name", "EELMatchType::CASINO_BATTLEROYAL" },
				{ "CASINO_BATTLEROYAL_TEAM.Name", "EELMatchType::CASINO_BATTLEROYAL_TEAM" },
				{ "FIVE_MAN_MATCH.Name", "EELMatchType::FIVE_MAN_MATCH" },
				{ "FOUR_WAY_MATCH.Name", "EELMatchType::FOUR_WAY_MATCH" },
				{ "ModuleRelativePath", "Public/EELMatchType.h" },
				{ "NONE.Name", "EELMatchType::NONE" },
				{ "SINGLE_MATCH.Name", "EELMatchType::SINGLE_MATCH" },
				{ "SIX_MAN_MATCH.Name", "EELMatchType::SIX_MAN_MATCH" },
				{ "STADIUM_STAMPEDE.Name", "EELMatchType::STADIUM_STAMPEDE" },
				{ "TAG_TEAM_MATCH.Name", "EELMatchType::TAG_TEAM_MATCH" },
				{ "THREE_WAY_MATCH.Name", "EELMatchType::THREE_WAY_MATCH" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EELMatchType",
				"EELMatchType",
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
