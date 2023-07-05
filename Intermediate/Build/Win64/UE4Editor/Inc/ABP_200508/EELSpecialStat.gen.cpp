// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EELSpecialStat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELSpecialStat() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELSpecialStat();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EELSpecialStat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EELSpecialStat, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EELSpecialStat"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EELSpecialStat>()
	{
		return EELSpecialStat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELSpecialStat(EELSpecialStat_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EELSpecialStat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EELSpecialStat_Hash() { return 1097335779U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EELSpecialStat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELSpecialStat"), 0, Get_Z_Construct_UEnum_ABP_200508_EELSpecialStat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELSpecialStat::BattlePass_Total_Point", (int64)EELSpecialStat::BattlePass_Total_Point },
				{ "EELSpecialStat::DefeatCom", (int64)EELSpecialStat::DefeatCom },
				{ "EELSpecialStat::Arena_Used", (int64)EELSpecialStat::Arena_Used },
				{ "EELSpecialStat::CasinoBattleRoyale_LastWinner", (int64)EELSpecialStat::CasinoBattleRoyale_LastWinner },
				{ "EELSpecialStat::Weapon_Used", (int64)EELSpecialStat::Weapon_Used },
				{ "EELSpecialStat::Title_Defend", (int64)EELSpecialStat::Title_Defend },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Arena_Used.Name", "EELSpecialStat::Arena_Used" },
				{ "BattlePass_Total_Point.Name", "EELSpecialStat::BattlePass_Total_Point" },
				{ "BlueprintType", "true" },
				{ "CasinoBattleRoyale_LastWinner.Name", "EELSpecialStat::CasinoBattleRoyale_LastWinner" },
				{ "DefeatCom.Name", "EELSpecialStat::DefeatCom" },
				{ "ModuleRelativePath", "Public/EELSpecialStat.h" },
				{ "Title_Defend.Name", "EELSpecialStat::Title_Defend" },
				{ "Weapon_Used.Name", "EELSpecialStat::Weapon_Used" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EELSpecialStat",
				"EELSpecialStat",
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
