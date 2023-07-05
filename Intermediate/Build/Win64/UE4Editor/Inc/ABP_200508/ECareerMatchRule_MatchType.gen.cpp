// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerMatchRule_MatchType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerMatchRule_MatchType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerMatchRule_MatchType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerMatchRule_MatchType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerMatchRule_MatchType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerMatchRule_MatchType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerMatchRule_MatchType>()
	{
		return ECareerMatchRule_MatchType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerMatchRule_MatchType(ECareerMatchRule_MatchType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerMatchRule_MatchType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerMatchRule_MatchType_Hash() { return 4163654197U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerMatchRule_MatchType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerMatchRule_MatchType"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerMatchRule_MatchType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerMatchRule_MatchType::SINGLE_MATCH", (int64)ECareerMatchRule_MatchType::SINGLE_MATCH },
				{ "ECareerMatchRule_MatchType::TAG_TEAM_MATCH", (int64)ECareerMatchRule_MatchType::TAG_TEAM_MATCH },
				{ "ECareerMatchRule_MatchType::WAY3_MATCH", (int64)ECareerMatchRule_MatchType::WAY3_MATCH },
				{ "ECareerMatchRule_MatchType::WAY4_MATCH", (int64)ECareerMatchRule_MatchType::WAY4_MATCH },
				{ "ECareerMatchRule_MatchType::MAN5_MATCH", (int64)ECareerMatchRule_MatchType::MAN5_MATCH },
				{ "ECareerMatchRule_MatchType::MAN6_MATCH", (int64)ECareerMatchRule_MatchType::MAN6_MATCH },
				{ "ECareerMatchRule_MatchType::CASINO_BATTLE_ROYAL", (int64)ECareerMatchRule_MatchType::CASINO_BATTLE_ROYAL },
				{ "ECareerMatchRule_MatchType::CASINO_BATTLE_ROYAL_TEAM", (int64)ECareerMatchRule_MatchType::CASINO_BATTLE_ROYAL_TEAM },
				{ "ECareerMatchRule_MatchType::NONE", (int64)ECareerMatchRule_MatchType::NONE },
				{ "ECareerMatchRule_MatchType::ECareerMatchRule_MAX", (int64)ECareerMatchRule_MatchType::ECareerMatchRule_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CASINO_BATTLE_ROYAL.Name", "ECareerMatchRule_MatchType::CASINO_BATTLE_ROYAL" },
				{ "CASINO_BATTLE_ROYAL_TEAM.Name", "ECareerMatchRule_MatchType::CASINO_BATTLE_ROYAL_TEAM" },
				{ "ECareerMatchRule_MAX.Hidden", "" },
				{ "ECareerMatchRule_MAX.Name", "ECareerMatchRule_MatchType::ECareerMatchRule_MAX" },
				{ "MAN5_MATCH.Name", "ECareerMatchRule_MatchType::MAN5_MATCH" },
				{ "MAN6_MATCH.Name", "ECareerMatchRule_MatchType::MAN6_MATCH" },
				{ "ModuleRelativePath", "Public/ECareerMatchRule_MatchType.h" },
				{ "NONE.Name", "ECareerMatchRule_MatchType::NONE" },
				{ "SINGLE_MATCH.Name", "ECareerMatchRule_MatchType::SINGLE_MATCH" },
				{ "TAG_TEAM_MATCH.Name", "ECareerMatchRule_MatchType::TAG_TEAM_MATCH" },
				{ "WAY3_MATCH.Name", "ECareerMatchRule_MatchType::WAY3_MATCH" },
				{ "WAY4_MATCH.Name", "ECareerMatchRule_MatchType::WAY4_MATCH" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerMatchRule_MatchType",
				"ECareerMatchRule_MatchType",
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
