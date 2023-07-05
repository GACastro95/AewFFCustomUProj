// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerRewardGetType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerRewardGetType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerRewardGetType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerRewardGetType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerRewardGetType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerRewardGetType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerRewardGetType>()
	{
		return ECareerRewardGetType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerRewardGetType(ECareerRewardGetType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerRewardGetType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerRewardGetType_Hash() { return 3737250223U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerRewardGetType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerRewardGetType"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerRewardGetType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerRewardGetType::None", (int64)ECareerRewardGetType::None },
				{ "ECareerRewardGetType::SkillPoint", (int64)ECareerRewardGetType::SkillPoint },
				{ "ECareerRewardGetType::CareerMoney", (int64)ECareerRewardGetType::CareerMoney },
				{ "ECareerRewardGetType::Energy", (int64)ECareerRewardGetType::Energy },
				{ "ECareerRewardGetType::Motivation", (int64)ECareerRewardGetType::Motivation },
				{ "ECareerRewardGetType::Injury", (int64)ECareerRewardGetType::Injury },
				{ "ECareerRewardGetType::InjuryRecovery", (int64)ECareerRewardGetType::InjuryRecovery },
				{ "ECareerRewardGetType::WinBonusSkillPoint", (int64)ECareerRewardGetType::WinBonusSkillPoint },
				{ "ECareerRewardGetType::WinBonusCareerMoney", (int64)ECareerRewardGetType::WinBonusCareerMoney },
				{ "ECareerRewardGetType::ScoreBonusSkillPoint", (int64)ECareerRewardGetType::ScoreBonusSkillPoint },
				{ "ECareerRewardGetType::ScoreBonusCareerMoney", (int64)ECareerRewardGetType::ScoreBonusCareerMoney },
				{ "ECareerRewardGetType::WinBonusMiniGameSkillPoint", (int64)ECareerRewardGetType::WinBonusMiniGameSkillPoint },
				{ "ECareerRewardGetType::WinBonusMiniGameCareerMoney", (int64)ECareerRewardGetType::WinBonusMiniGameCareerMoney },
				{ "ECareerRewardGetType::MAX", (int64)ECareerRewardGetType::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CareerMoney.Name", "ECareerRewardGetType::CareerMoney" },
				{ "Energy.Name", "ECareerRewardGetType::Energy" },
				{ "Injury.Name", "ECareerRewardGetType::Injury" },
				{ "InjuryRecovery.Name", "ECareerRewardGetType::InjuryRecovery" },
				{ "MAX.Name", "ECareerRewardGetType::MAX" },
				{ "ModuleRelativePath", "Public/ECareerRewardGetType.h" },
				{ "Motivation.Name", "ECareerRewardGetType::Motivation" },
				{ "None.Name", "ECareerRewardGetType::None" },
				{ "ScoreBonusCareerMoney.Name", "ECareerRewardGetType::ScoreBonusCareerMoney" },
				{ "ScoreBonusSkillPoint.Name", "ECareerRewardGetType::ScoreBonusSkillPoint" },
				{ "SkillPoint.Name", "ECareerRewardGetType::SkillPoint" },
				{ "WinBonusCareerMoney.Name", "ECareerRewardGetType::WinBonusCareerMoney" },
				{ "WinBonusMiniGameCareerMoney.Name", "ECareerRewardGetType::WinBonusMiniGameCareerMoney" },
				{ "WinBonusMiniGameSkillPoint.Name", "ECareerRewardGetType::WinBonusMiniGameSkillPoint" },
				{ "WinBonusSkillPoint.Name", "ECareerRewardGetType::WinBonusSkillPoint" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerRewardGetType",
				"ECareerRewardGetType",
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
