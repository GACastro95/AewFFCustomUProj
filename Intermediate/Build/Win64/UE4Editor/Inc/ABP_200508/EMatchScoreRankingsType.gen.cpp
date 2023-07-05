// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EMatchScoreRankingsType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMatchScoreRankingsType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMatchScoreRankingsType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EMatchScoreRankingsType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EMatchScoreRankingsType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EMatchScoreRankingsType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EMatchScoreRankingsType>()
	{
		return EMatchScoreRankingsType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMatchScoreRankingsType(EMatchScoreRankingsType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EMatchScoreRankingsType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EMatchScoreRankingsType_Hash() { return 1828686580U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EMatchScoreRankingsType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMatchScoreRankingsType"), 0, Get_Z_Construct_UEnum_ABP_200508_EMatchScoreRankingsType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMatchScoreRankingsType::NONE", (int64)EMatchScoreRankingsType::NONE },
				{ "EMatchScoreRankingsType::ONE_ON_ONE", (int64)EMatchScoreRankingsType::ONE_ON_ONE },
				{ "EMatchScoreRankingsType::TWO_ON_TWO", (int64)EMatchScoreRankingsType::TWO_ON_TWO },
				{ "EMatchScoreRankingsType::THREE_WAY_MATCH", (int64)EMatchScoreRankingsType::THREE_WAY_MATCH },
				{ "EMatchScoreRankingsType::FOUR_WAY_MATCH", (int64)EMatchScoreRankingsType::FOUR_WAY_MATCH },
				{ "EMatchScoreRankingsType::CASINO_BATTLE_ROYALE_SOLO", (int64)EMatchScoreRankingsType::CASINO_BATTLE_ROYALE_SOLO },
				{ "EMatchScoreRankingsType::CASINO_BATTLE_ROYALE_GROUP", (int64)EMatchScoreRankingsType::CASINO_BATTLE_ROYALE_GROUP },
				{ "EMatchScoreRankingsType::LIGHTS_OUT_MATCH", (int64)EMatchScoreRankingsType::LIGHTS_OUT_MATCH },
				{ "EMatchScoreRankingsType::FALLS_COUNT_ANYWHERE", (int64)EMatchScoreRankingsType::FALLS_COUNT_ANYWHERE },
				{ "EMatchScoreRankingsType::EXPLODING_BARBED_WIRE_DEATH_MATCH", (int64)EMatchScoreRankingsType::EXPLODING_BARBED_WIRE_DEATH_MATCH },
				{ "EMatchScoreRankingsType::LADDER_MATCH", (int64)EMatchScoreRankingsType::LADDER_MATCH },
				{ "EMatchScoreRankingsType::STADIUM_STAMPEDE", (int64)EMatchScoreRankingsType::STADIUM_STAMPEDE },
				{ "EMatchScoreRankingsType::MAX", (int64)EMatchScoreRankingsType::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CASINO_BATTLE_ROYALE_GROUP.Name", "EMatchScoreRankingsType::CASINO_BATTLE_ROYALE_GROUP" },
				{ "CASINO_BATTLE_ROYALE_SOLO.Name", "EMatchScoreRankingsType::CASINO_BATTLE_ROYALE_SOLO" },
				{ "EXPLODING_BARBED_WIRE_DEATH_MATCH.Name", "EMatchScoreRankingsType::EXPLODING_BARBED_WIRE_DEATH_MATCH" },
				{ "FALLS_COUNT_ANYWHERE.Name", "EMatchScoreRankingsType::FALLS_COUNT_ANYWHERE" },
				{ "FOUR_WAY_MATCH.Name", "EMatchScoreRankingsType::FOUR_WAY_MATCH" },
				{ "LADDER_MATCH.Name", "EMatchScoreRankingsType::LADDER_MATCH" },
				{ "LIGHTS_OUT_MATCH.Name", "EMatchScoreRankingsType::LIGHTS_OUT_MATCH" },
				{ "MAX.Name", "EMatchScoreRankingsType::MAX" },
				{ "ModuleRelativePath", "Public/EMatchScoreRankingsType.h" },
				{ "NONE.Name", "EMatchScoreRankingsType::NONE" },
				{ "ONE_ON_ONE.Name", "EMatchScoreRankingsType::ONE_ON_ONE" },
				{ "STADIUM_STAMPEDE.Name", "EMatchScoreRankingsType::STADIUM_STAMPEDE" },
				{ "THREE_WAY_MATCH.Name", "EMatchScoreRankingsType::THREE_WAY_MATCH" },
				{ "TWO_ON_TWO.Name", "EMatchScoreRankingsType::TWO_ON_TWO" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EMatchScoreRankingsType",
				"EMatchScoreRankingsType",
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
