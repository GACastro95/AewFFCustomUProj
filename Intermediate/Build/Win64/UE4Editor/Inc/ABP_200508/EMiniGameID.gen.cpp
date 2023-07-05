// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EMiniGameID.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMiniGameID() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMiniGameID();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EMiniGameID_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EMiniGameID, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EMiniGameID"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EMiniGameID>()
	{
		return EMiniGameID_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMiniGameID(EMiniGameID_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EMiniGameID"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EMiniGameID_Hash() { return 4138240134U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EMiniGameID()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMiniGameID"), 0, Get_Z_Construct_UEnum_ABP_200508_EMiniGameID_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMiniGameID::HomeRunDerby", (int64)EMiniGameID::HomeRunDerby },
				{ "EMiniGameID::ChipGather", (int64)EMiniGameID::ChipGather },
				{ "EMiniGameID::TrumpMemory", (int64)EMiniGameID::TrumpMemory },
				{ "EMiniGameID::GuessWho", (int64)EMiniGameID::GuessWho },
				{ "EMiniGameID::TriviaQuiz", (int64)EMiniGameID::TriviaQuiz },
				{ "EMiniGameID::PentaSais", (int64)EMiniGameID::PentaSais },
				{ "EMiniGameID::ObjectCount", (int64)EMiniGameID::ObjectCount },
				{ "EMiniGameID::FindOrange", (int64)EMiniGameID::FindOrange },
				{ "EMiniGameID::FindTheDifference", (int64)EMiniGameID::FindTheDifference },
				{ "EMiniGameID::TracePunch", (int64)EMiniGameID::TracePunch },
				{ "EMiniGameID::SpotLight", (int64)EMiniGameID::SpotLight },
				{ "EMiniGameID::PathTracer", (int64)EMiniGameID::PathTracer },
				{ "EMiniGameID::EggCastle", (int64)EMiniGameID::EggCastle },
				{ "EMiniGameID::PitDrop", (int64)EMiniGameID::PitDrop },
				{ "EMiniGameID::GasTankThrow", (int64)EMiniGameID::GasTankThrow },
				{ "EMiniGameID::JoinUs", (int64)EMiniGameID::JoinUs },
				{ "EMiniGameID::DeathRace", (int64)EMiniGameID::DeathRace },
				{ "EMiniGameID::MiniGameIDNum", (int64)EMiniGameID::MiniGameIDNum },
				{ "EMiniGameID::SlothSling", (int64)EMiniGameID::SlothSling },
				{ "EMiniGameID::DamageChallenge", (int64)EMiniGameID::DamageChallenge },
				{ "EMiniGameID::TruckPullChallenge", (int64)EMiniGameID::TruckPullChallenge },
				{ "EMiniGameID::ConfusedRunningGame", (int64)EMiniGameID::ConfusedRunningGame },
				{ "EMiniGameID::Max", (int64)EMiniGameID::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ChipGather.Name", "EMiniGameID::ChipGather" },
				{ "ConfusedRunningGame.Name", "EMiniGameID::ConfusedRunningGame" },
				{ "DamageChallenge.Name", "EMiniGameID::DamageChallenge" },
				{ "DeathRace.Name", "EMiniGameID::DeathRace" },
				{ "EggCastle.Name", "EMiniGameID::EggCastle" },
				{ "FindOrange.Name", "EMiniGameID::FindOrange" },
				{ "FindTheDifference.Name", "EMiniGameID::FindTheDifference" },
				{ "GasTankThrow.Name", "EMiniGameID::GasTankThrow" },
				{ "GuessWho.Name", "EMiniGameID::GuessWho" },
				{ "HomeRunDerby.Name", "EMiniGameID::HomeRunDerby" },
				{ "JoinUs.Name", "EMiniGameID::JoinUs" },
				{ "Max.Name", "EMiniGameID::Max" },
				{ "MiniGameIDNum.Name", "EMiniGameID::MiniGameIDNum" },
				{ "ModuleRelativePath", "Public/EMiniGameID.h" },
				{ "ObjectCount.Name", "EMiniGameID::ObjectCount" },
				{ "PathTracer.Name", "EMiniGameID::PathTracer" },
				{ "PentaSais.Name", "EMiniGameID::PentaSais" },
				{ "PitDrop.Name", "EMiniGameID::PitDrop" },
				{ "SlothSling.Name", "EMiniGameID::SlothSling" },
				{ "SpotLight.Name", "EMiniGameID::SpotLight" },
				{ "TracePunch.Name", "EMiniGameID::TracePunch" },
				{ "TriviaQuiz.Name", "EMiniGameID::TriviaQuiz" },
				{ "TruckPullChallenge.Name", "EMiniGameID::TruckPullChallenge" },
				{ "TrumpMemory.Name", "EMiniGameID::TrumpMemory" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EMiniGameID",
				"EMiniGameID",
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
