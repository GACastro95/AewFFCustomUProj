// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EMatchRecordsMatchType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMatchRecordsMatchType() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EMatchRecordsMatchType();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EMatchRecordsMatchType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EMatchRecordsMatchType, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EMatchRecordsMatchType"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EMatchRecordsMatchType>()
	{
		return EMatchRecordsMatchType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMatchRecordsMatchType(EMatchRecordsMatchType_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EMatchRecordsMatchType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EMatchRecordsMatchType_Hash() { return 3628294219U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EMatchRecordsMatchType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMatchRecordsMatchType"), 0, Get_Z_Construct_UEnum_ELITE_Game_EMatchRecordsMatchType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMatchRecordsMatchType::OneOnOne", (int64)EMatchRecordsMatchType::OneOnOne },
				{ "EMatchRecordsMatchType::TwoOnTwo", (int64)EMatchRecordsMatchType::TwoOnTwo },
				{ "EMatchRecordsMatchType::ThreeWay", (int64)EMatchRecordsMatchType::ThreeWay },
				{ "EMatchRecordsMatchType::FourWay", (int64)EMatchRecordsMatchType::FourWay },
				{ "EMatchRecordsMatchType::LightsOut", (int64)EMatchRecordsMatchType::LightsOut },
				{ "EMatchRecordsMatchType::FallsCountAnywhere", (int64)EMatchRecordsMatchType::FallsCountAnywhere },
				{ "EMatchRecordsMatchType::CasinoBattleRoyalSolo", (int64)EMatchRecordsMatchType::CasinoBattleRoyalSolo },
				{ "EMatchRecordsMatchType::CasinoBattleRoyalTeam", (int64)EMatchRecordsMatchType::CasinoBattleRoyalTeam },
				{ "EMatchRecordsMatchType::ExplodingDeathMatch", (int64)EMatchRecordsMatchType::ExplodingDeathMatch },
				{ "EMatchRecordsMatchType::Max", (int64)EMatchRecordsMatchType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CasinoBattleRoyalSolo.Name", "EMatchRecordsMatchType::CasinoBattleRoyalSolo" },
				{ "CasinoBattleRoyalTeam.Name", "EMatchRecordsMatchType::CasinoBattleRoyalTeam" },
				{ "ExplodingDeathMatch.Name", "EMatchRecordsMatchType::ExplodingDeathMatch" },
				{ "FallsCountAnywhere.Name", "EMatchRecordsMatchType::FallsCountAnywhere" },
				{ "FourWay.Name", "EMatchRecordsMatchType::FourWay" },
				{ "LightsOut.Name", "EMatchRecordsMatchType::LightsOut" },
				{ "Max.Name", "EMatchRecordsMatchType::Max" },
				{ "ModuleRelativePath", "Public/EMatchRecordsMatchType.h" },
				{ "OneOnOne.Name", "EMatchRecordsMatchType::OneOnOne" },
				{ "ThreeWay.Name", "EMatchRecordsMatchType::ThreeWay" },
				{ "TwoOnTwo.Name", "EMatchRecordsMatchType::TwoOnTwo" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EMatchRecordsMatchType",
				"EMatchRecordsMatchType",
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
