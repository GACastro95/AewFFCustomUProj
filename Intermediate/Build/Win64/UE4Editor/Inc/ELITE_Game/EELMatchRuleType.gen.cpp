// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EELMatchRuleType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELMatchRuleType() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELMatchRuleType();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EELMatchRuleType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EELMatchRuleType, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EELMatchRuleType"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EELMatchRuleType>()
	{
		return EELMatchRuleType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELMatchRuleType(EELMatchRuleType_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EELMatchRuleType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EELMatchRuleType_Hash() { return 2925494196U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EELMatchRuleType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELMatchRuleType"), 0, Get_Z_Construct_UEnum_ELITE_Game_EELMatchRuleType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELMatchRuleType::NORMAL", (int64)EELMatchRuleType::NORMAL },
				{ "EELMatchRuleType::BATTLE_ROYAL", (int64)EELMatchRuleType::BATTLE_ROYAL },
				{ "EELMatchRuleType::MATCH_RULE_MAX", (int64)EELMatchRuleType::MATCH_RULE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BATTLE_ROYAL.Name", "EELMatchRuleType::BATTLE_ROYAL" },
				{ "BlueprintType", "true" },
				{ "MATCH_RULE_MAX.Hidden", "" },
				{ "MATCH_RULE_MAX.Name", "EELMatchRuleType::MATCH_RULE_MAX" },
				{ "ModuleRelativePath", "Public/EELMatchRuleType.h" },
				{ "NORMAL.Name", "EELMatchRuleType::NORMAL" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EELMatchRuleType",
				"EELMatchRuleType",
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
