// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EChallengeMatchRuleType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEChallengeMatchRuleType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EChallengeMatchRuleType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EChallengeMatchRuleType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EChallengeMatchRuleType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EChallengeMatchRuleType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EChallengeMatchRuleType>()
	{
		return EChallengeMatchRuleType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EChallengeMatchRuleType(EChallengeMatchRuleType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EChallengeMatchRuleType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EChallengeMatchRuleType_Hash() { return 1971146591U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EChallengeMatchRuleType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EChallengeMatchRuleType"), 0, Get_Z_Construct_UEnum_ABP_200508_EChallengeMatchRuleType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EChallengeMatchRuleType::OneOnOne", (int64)EChallengeMatchRuleType::OneOnOne },
				{ "EChallengeMatchRuleType::TwoOnTwo", (int64)EChallengeMatchRuleType::TwoOnTwo },
				{ "EChallengeMatchRuleType::ThreeWay", (int64)EChallengeMatchRuleType::ThreeWay },
				{ "EChallengeMatchRuleType::FourWay", (int64)EChallengeMatchRuleType::FourWay },
				{ "EChallengeMatchRuleType::BattleRoyale", (int64)EChallengeMatchRuleType::BattleRoyale },
				{ "EChallengeMatchRuleType::CasinoBattleRoyale", (int64)EChallengeMatchRuleType::CasinoBattleRoyale },
				{ "EChallengeMatchRuleType::CasinoBattleRoyaleTeam", (int64)EChallengeMatchRuleType::CasinoBattleRoyaleTeam },
				{ "EChallengeMatchRuleType::ExplodingBarbedWireDeathMatch", (int64)EChallengeMatchRuleType::ExplodingBarbedWireDeathMatch },
				{ "EChallengeMatchRuleType::LightsOutMatch", (int64)EChallengeMatchRuleType::LightsOutMatch },
				{ "EChallengeMatchRuleType::FallsCountAnywhere", (int64)EChallengeMatchRuleType::FallsCountAnywhere },
				{ "EChallengeMatchRuleType::Max", (int64)EChallengeMatchRuleType::Max },
				{ "EChallengeMatchRuleType::WatchingGames", (int64)EChallengeMatchRuleType::WatchingGames },
				{ "EChallengeMatchRuleType::Anything", (int64)EChallengeMatchRuleType::Anything },
				{ "EChallengeMatchRuleType::StadiumStampedeMode", (int64)EChallengeMatchRuleType::StadiumStampedeMode },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Anything.Name", "EChallengeMatchRuleType::Anything" },
				{ "BattleRoyale.Name", "EChallengeMatchRuleType::BattleRoyale" },
				{ "BlueprintType", "true" },
				{ "CasinoBattleRoyale.Name", "EChallengeMatchRuleType::CasinoBattleRoyale" },
				{ "CasinoBattleRoyaleTeam.Name", "EChallengeMatchRuleType::CasinoBattleRoyaleTeam" },
				{ "ExplodingBarbedWireDeathMatch.Name", "EChallengeMatchRuleType::ExplodingBarbedWireDeathMatch" },
				{ "FallsCountAnywhere.Name", "EChallengeMatchRuleType::FallsCountAnywhere" },
				{ "FourWay.Name", "EChallengeMatchRuleType::FourWay" },
				{ "LightsOutMatch.Name", "EChallengeMatchRuleType::LightsOutMatch" },
				{ "Max.Name", "EChallengeMatchRuleType::Max" },
				{ "ModuleRelativePath", "Public/EChallengeMatchRuleType.h" },
				{ "OneOnOne.Name", "EChallengeMatchRuleType::OneOnOne" },
				{ "StadiumStampedeMode.Name", "EChallengeMatchRuleType::StadiumStampedeMode" },
				{ "ThreeWay.Name", "EChallengeMatchRuleType::ThreeWay" },
				{ "TwoOnTwo.Name", "EChallengeMatchRuleType::TwoOnTwo" },
				{ "WatchingGames.Name", "EChallengeMatchRuleType::WatchingGames" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EChallengeMatchRuleType",
				"EChallengeMatchRuleType",
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
