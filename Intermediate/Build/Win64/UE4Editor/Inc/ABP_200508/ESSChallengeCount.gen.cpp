// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSChallengeCount.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSChallengeCount() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSChallengeCount();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSChallengeCount_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSChallengeCount, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSChallengeCount"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSChallengeCount>()
	{
		return ESSChallengeCount_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSChallengeCount(ESSChallengeCount_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSChallengeCount"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSChallengeCount_Hash() { return 53083223U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSChallengeCount()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSChallengeCount"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSChallengeCount_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSChallengeCount::None", (int64)ESSChallengeCount::None },
				{ "ESSChallengeCount::WeakStrikeTechniqueHitCount", (int64)ESSChallengeCount::WeakStrikeTechniqueHitCount },
				{ "ESSChallengeCount::StrongStrikeTechniqueHitCount", (int64)ESSChallengeCount::StrongStrikeTechniqueHitCount },
				{ "ESSChallengeCount::JumpAttackHitCount", (int64)ESSChallengeCount::JumpAttackHitCount },
				{ "ESSChallengeCount::NearWeaponAttackDamageCount", (int64)ESSChallengeCount::NearWeaponAttackDamageCount },
				{ "ESSChallengeCount::FarWeaponAttackDamageCount", (int64)ESSChallengeCount::FarWeaponAttackDamageCount },
				{ "ESSChallengeCount::ThrowingWeaponAttackDamageCount", (int64)ESSChallengeCount::ThrowingWeaponAttackDamageCount },
				{ "ESSChallengeCount::FinisherSuccessCount", (int64)ESSChallengeCount::FinisherSuccessCount },
				{ "ESSChallengeCount::WrestlerKillCount", (int64)ESSChallengeCount::WrestlerKillCount },
				{ "ESSChallengeCount::SlotMachinePlayCount", (int64)ESSChallengeCount::SlotMachinePlayCount },
				{ "ESSChallengeCount::VendingMachineBuyCount", (int64)ESSChallengeCount::VendingMachineBuyCount },
				{ "ESSChallengeCount::RevivalCount", (int64)ESSChallengeCount::RevivalCount },
				{ "ESSChallengeCount::AbilityUseCount", (int64)ESSChallengeCount::AbilityUseCount },
				{ "ESSChallengeCount::SituationMoveCount", (int64)ESSChallengeCount::SituationMoveCount },
				{ "ESSChallengeCount::FeverCount", (int64)ESSChallengeCount::FeverCount },
				{ "ESSChallengeCount::EpicWeaponHitCount", (int64)ESSChallengeCount::EpicWeaponHitCount },
				{ "ESSChallengeCount::TreasureBoxCount", (int64)ESSChallengeCount::TreasureBoxCount },
				{ "ESSChallengeCount::ExpItemCount", (int64)ESSChallengeCount::ExpItemCount },
				{ "ESSChallengeCount::Max", (int64)ESSChallengeCount::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AbilityUseCount.Name", "ESSChallengeCount::AbilityUseCount" },
				{ "BlueprintType", "true" },
				{ "EpicWeaponHitCount.Name", "ESSChallengeCount::EpicWeaponHitCount" },
				{ "ExpItemCount.Name", "ESSChallengeCount::ExpItemCount" },
				{ "FarWeaponAttackDamageCount.Name", "ESSChallengeCount::FarWeaponAttackDamageCount" },
				{ "FeverCount.Name", "ESSChallengeCount::FeverCount" },
				{ "FinisherSuccessCount.Name", "ESSChallengeCount::FinisherSuccessCount" },
				{ "JumpAttackHitCount.Name", "ESSChallengeCount::JumpAttackHitCount" },
				{ "Max.Name", "ESSChallengeCount::Max" },
				{ "ModuleRelativePath", "Public/ESSChallengeCount.h" },
				{ "NearWeaponAttackDamageCount.Name", "ESSChallengeCount::NearWeaponAttackDamageCount" },
				{ "None.Name", "ESSChallengeCount::None" },
				{ "RevivalCount.Name", "ESSChallengeCount::RevivalCount" },
				{ "SituationMoveCount.Name", "ESSChallengeCount::SituationMoveCount" },
				{ "SlotMachinePlayCount.Name", "ESSChallengeCount::SlotMachinePlayCount" },
				{ "StrongStrikeTechniqueHitCount.Name", "ESSChallengeCount::StrongStrikeTechniqueHitCount" },
				{ "ThrowingWeaponAttackDamageCount.Name", "ESSChallengeCount::ThrowingWeaponAttackDamageCount" },
				{ "TreasureBoxCount.Name", "ESSChallengeCount::TreasureBoxCount" },
				{ "VendingMachineBuyCount.Name", "ESSChallengeCount::VendingMachineBuyCount" },
				{ "WeakStrikeTechniqueHitCount.Name", "ESSChallengeCount::WeakStrikeTechniqueHitCount" },
				{ "WrestlerKillCount.Name", "ESSChallengeCount::WrestlerKillCount" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSChallengeCount",
				"ESSChallengeCount",
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
