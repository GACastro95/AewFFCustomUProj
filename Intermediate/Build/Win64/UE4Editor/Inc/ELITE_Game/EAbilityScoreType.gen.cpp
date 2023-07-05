// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EAbilityScoreType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAbilityScoreType() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EAbilityScoreType();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EAbilityScoreType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EAbilityScoreType, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EAbilityScoreType"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EAbilityScoreType>()
	{
		return EAbilityScoreType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAbilityScoreType(EAbilityScoreType_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EAbilityScoreType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EAbilityScoreType_Hash() { return 2367001104U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EAbilityScoreType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAbilityScoreType"), 0, Get_Z_Construct_UEnum_ELITE_Game_EAbilityScoreType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAbilityScoreType::MomentumRate", (int64)EAbilityScoreType::MomentumRate },
				{ "EAbilityScoreType::FinisherSlotNum", (int64)EAbilityScoreType::FinisherSlotNum },
				{ "EAbilityScoreType::SignatureSlotNum", (int64)EAbilityScoreType::SignatureSlotNum },
				{ "EAbilityScoreType::FinisherSlot1Strength", (int64)EAbilityScoreType::FinisherSlot1Strength },
				{ "EAbilityScoreType::FinisherSlot2Strength", (int64)EAbilityScoreType::FinisherSlot2Strength },
				{ "EAbilityScoreType::FinisherSlot3Strength", (int64)EAbilityScoreType::FinisherSlot3Strength },
				{ "EAbilityScoreType::FinisherSlot4Strength", (int64)EAbilityScoreType::FinisherSlot4Strength },
				{ "EAbilityScoreType::FinisherSlot5Strength", (int64)EAbilityScoreType::FinisherSlot5Strength },
				{ "EAbilityScoreType::SignatureSlot1Strength", (int64)EAbilityScoreType::SignatureSlot1Strength },
				{ "EAbilityScoreType::SignatureSlot2Strength", (int64)EAbilityScoreType::SignatureSlot2Strength },
				{ "EAbilityScoreType::SignatureSlot3Strength", (int64)EAbilityScoreType::SignatureSlot3Strength },
				{ "EAbilityScoreType::SignatureSlot4Strength", (int64)EAbilityScoreType::SignatureSlot4Strength },
				{ "EAbilityScoreType::SignatureSlot5Strength", (int64)EAbilityScoreType::SignatureSlot5Strength },
				{ "EAbilityScoreType::ChainWrestling", (int64)EAbilityScoreType::ChainWrestling },
				{ "EAbilityScoreType::ArmPower", (int64)EAbilityScoreType::ArmPower },
				{ "EAbilityScoreType::KickPower", (int64)EAbilityScoreType::KickPower },
				{ "EAbilityScoreType::GrapplePower", (int64)EAbilityScoreType::GrapplePower },
				{ "EAbilityScoreType::DivingPower", (int64)EAbilityScoreType::DivingPower },
				{ "EAbilityScoreType::SpringboardPower", (int64)EAbilityScoreType::SpringboardPower },
				{ "EAbilityScoreType::MovementSpeed", (int64)EAbilityScoreType::MovementSpeed },
				{ "EAbilityScoreType::Num", (int64)EAbilityScoreType::Num },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ArmPower.Name", "EAbilityScoreType::ArmPower" },
				{ "BlueprintType", "true" },
				{ "ChainWrestling.Name", "EAbilityScoreType::ChainWrestling" },
				{ "DivingPower.Name", "EAbilityScoreType::DivingPower" },
				{ "FinisherSlot1Strength.Name", "EAbilityScoreType::FinisherSlot1Strength" },
				{ "FinisherSlot2Strength.Name", "EAbilityScoreType::FinisherSlot2Strength" },
				{ "FinisherSlot3Strength.Name", "EAbilityScoreType::FinisherSlot3Strength" },
				{ "FinisherSlot4Strength.Name", "EAbilityScoreType::FinisherSlot4Strength" },
				{ "FinisherSlot5Strength.Name", "EAbilityScoreType::FinisherSlot5Strength" },
				{ "FinisherSlotNum.Name", "EAbilityScoreType::FinisherSlotNum" },
				{ "GrapplePower.Name", "EAbilityScoreType::GrapplePower" },
				{ "KickPower.Name", "EAbilityScoreType::KickPower" },
				{ "ModuleRelativePath", "Public/EAbilityScoreType.h" },
				{ "MomentumRate.Name", "EAbilityScoreType::MomentumRate" },
				{ "MovementSpeed.Name", "EAbilityScoreType::MovementSpeed" },
				{ "Num.Name", "EAbilityScoreType::Num" },
				{ "SignatureSlot1Strength.Name", "EAbilityScoreType::SignatureSlot1Strength" },
				{ "SignatureSlot2Strength.Name", "EAbilityScoreType::SignatureSlot2Strength" },
				{ "SignatureSlot3Strength.Name", "EAbilityScoreType::SignatureSlot3Strength" },
				{ "SignatureSlot4Strength.Name", "EAbilityScoreType::SignatureSlot4Strength" },
				{ "SignatureSlot5Strength.Name", "EAbilityScoreType::SignatureSlot5Strength" },
				{ "SignatureSlotNum.Name", "EAbilityScoreType::SignatureSlotNum" },
				{ "SpringboardPower.Name", "EAbilityScoreType::SpringboardPower" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EAbilityScoreType",
				"EAbilityScoreType",
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
