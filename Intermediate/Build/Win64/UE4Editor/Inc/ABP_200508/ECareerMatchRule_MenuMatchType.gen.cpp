// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerMatchRule_MenuMatchType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerMatchRule_MenuMatchType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerMatchRule_MenuMatchType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerMatchRule_MenuMatchType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerMatchRule_MenuMatchType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerMatchRule_MenuMatchType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerMatchRule_MenuMatchType>()
	{
		return ECareerMatchRule_MenuMatchType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerMatchRule_MenuMatchType(ECareerMatchRule_MenuMatchType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerMatchRule_MenuMatchType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerMatchRule_MenuMatchType_Hash() { return 3988747974U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerMatchRule_MenuMatchType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerMatchRule_MenuMatchType"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerMatchRule_MenuMatchType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerMatchRule_MenuMatchType::SINGLE_MATCH_ONLINE", (int64)ECareerMatchRule_MenuMatchType::SINGLE_MATCH_ONLINE },
				{ "ECareerMatchRule_MenuMatchType::SINGLE_MATCH", (int64)ECareerMatchRule_MenuMatchType::SINGLE_MATCH },
				{ "ECareerMatchRule_MenuMatchType::SINGLE_MATCH_1PMG", (int64)ECareerMatchRule_MenuMatchType::SINGLE_MATCH_1PMG },
				{ "ECareerMatchRule_MenuMatchType::SINGLE_MATCH_2PMG", (int64)ECareerMatchRule_MenuMatchType::SINGLE_MATCH_2PMG },
				{ "ECareerMatchRule_MenuMatchType::SINGLE_MATCH_1P2PMG", (int64)ECareerMatchRule_MenuMatchType::SINGLE_MATCH_1P2PMG },
				{ "ECareerMatchRule_MenuMatchType::TAG_TEAM_MATCH", (int64)ECareerMatchRule_MenuMatchType::TAG_TEAM_MATCH },
				{ "ECareerMatchRule_MenuMatchType::TAG_TEAM_MATCH_1TMG", (int64)ECareerMatchRule_MenuMatchType::TAG_TEAM_MATCH_1TMG },
				{ "ECareerMatchRule_MenuMatchType::TAG_TEAM_MATCH_2TMG", (int64)ECareerMatchRule_MenuMatchType::TAG_TEAM_MATCH_2TMG },
				{ "ECareerMatchRule_MenuMatchType::TAG_TEAM_MATCH_1T2TMG", (int64)ECareerMatchRule_MenuMatchType::TAG_TEAM_MATCH_1T2TMG },
				{ "ECareerMatchRule_MenuMatchType::WAY3_MATCH", (int64)ECareerMatchRule_MenuMatchType::WAY3_MATCH },
				{ "ECareerMatchRule_MenuMatchType::WAY4_MATCH", (int64)ECareerMatchRule_MenuMatchType::WAY4_MATCH },
				{ "ECareerMatchRule_MenuMatchType::TRIPLE_TEAM_MATCH", (int64)ECareerMatchRule_MenuMatchType::TRIPLE_TEAM_MATCH },
				{ "ECareerMatchRule_MenuMatchType::CASINO_BATTLE_ROYAL", (int64)ECareerMatchRule_MenuMatchType::CASINO_BATTLE_ROYAL },
				{ "ECareerMatchRule_MenuMatchType::HANDICAP_1ON2", (int64)ECareerMatchRule_MenuMatchType::HANDICAP_1ON2 },
				{ "ECareerMatchRule_MenuMatchType::NONE", (int64)ECareerMatchRule_MenuMatchType::NONE },
				{ "ECareerMatchRule_MenuMatchType::ECareerMatchRule_MAX", (int64)ECareerMatchRule_MenuMatchType::ECareerMatchRule_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CASINO_BATTLE_ROYAL.Name", "ECareerMatchRule_MenuMatchType::CASINO_BATTLE_ROYAL" },
				{ "ECareerMatchRule_MAX.Hidden", "" },
				{ "ECareerMatchRule_MAX.Name", "ECareerMatchRule_MenuMatchType::ECareerMatchRule_MAX" },
				{ "HANDICAP_1ON2.Name", "ECareerMatchRule_MenuMatchType::HANDICAP_1ON2" },
				{ "ModuleRelativePath", "Public/ECareerMatchRule_MenuMatchType.h" },
				{ "NONE.Name", "ECareerMatchRule_MenuMatchType::NONE" },
				{ "SINGLE_MATCH.Name", "ECareerMatchRule_MenuMatchType::SINGLE_MATCH" },
				{ "SINGLE_MATCH_1P2PMG.Name", "ECareerMatchRule_MenuMatchType::SINGLE_MATCH_1P2PMG" },
				{ "SINGLE_MATCH_1PMG.Name", "ECareerMatchRule_MenuMatchType::SINGLE_MATCH_1PMG" },
				{ "SINGLE_MATCH_2PMG.Name", "ECareerMatchRule_MenuMatchType::SINGLE_MATCH_2PMG" },
				{ "SINGLE_MATCH_ONLINE.Name", "ECareerMatchRule_MenuMatchType::SINGLE_MATCH_ONLINE" },
				{ "TAG_TEAM_MATCH.Name", "ECareerMatchRule_MenuMatchType::TAG_TEAM_MATCH" },
				{ "TAG_TEAM_MATCH_1T2TMG.Name", "ECareerMatchRule_MenuMatchType::TAG_TEAM_MATCH_1T2TMG" },
				{ "TAG_TEAM_MATCH_1TMG.Name", "ECareerMatchRule_MenuMatchType::TAG_TEAM_MATCH_1TMG" },
				{ "TAG_TEAM_MATCH_2TMG.Name", "ECareerMatchRule_MenuMatchType::TAG_TEAM_MATCH_2TMG" },
				{ "TRIPLE_TEAM_MATCH.Name", "ECareerMatchRule_MenuMatchType::TRIPLE_TEAM_MATCH" },
				{ "WAY3_MATCH.Name", "ECareerMatchRule_MenuMatchType::WAY3_MATCH" },
				{ "WAY4_MATCH.Name", "ECareerMatchRule_MenuMatchType::WAY4_MATCH" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerMatchRule_MenuMatchType",
				"ECareerMatchRule_MenuMatchType",
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
