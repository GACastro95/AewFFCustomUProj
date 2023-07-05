// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSAbilityKind.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSAbilityKind() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSAbilityKind();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSAbilityKind_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSAbilityKind, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSAbilityKind"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSAbilityKind>()
	{
		return ESSAbilityKind_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSAbilityKind(ESSAbilityKind_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSAbilityKind"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSAbilityKind_Hash() { return 1339610523U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSAbilityKind()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSAbilityKind"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSAbilityKind_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSAbilityKind::None", (int64)ESSAbilityKind::None },
				{ "ESSAbilityKind::HpRecover", (int64)ESSAbilityKind::HpRecover },
				{ "ESSAbilityKind::HeatMeterBonus", (int64)ESSAbilityKind::HeatMeterBonus },
				{ "ESSAbilityKind::Speedup", (int64)ESSAbilityKind::Speedup },
				{ "ESSAbilityKind::JumpPowerup", (int64)ESSAbilityKind::JumpPowerup },
				{ "ESSAbilityKind::AttackPowerup", (int64)ESSAbilityKind::AttackPowerup },
				{ "ESSAbilityKind::WeaponAttackPowerup", (int64)ESSAbilityKind::WeaponAttackPowerup },
				{ "ESSAbilityKind::EnemyVisible", (int64)ESSAbilityKind::EnemyVisible },
				{ "ESSAbilityKind::ItemVisible", (int64)ESSAbilityKind::ItemVisible },
				{ "ESSAbilityKind::SeeThrough", (int64)ESSAbilityKind::SeeThrough },
				{ "ESSAbilityKind::SpawnItemBox", (int64)ESSAbilityKind::SpawnItemBox },
				{ "ESSAbilityKind::ReduceDamage", (int64)ESSAbilityKind::ReduceDamage },
				{ "ESSAbilityKind::ReviveFromKo", (int64)ESSAbilityKind::ReviveFromKo },
				{ "ESSAbilityKind::SuperArmor", (int64)ESSAbilityKind::SuperArmor },
				{ "ESSAbilityKind::ReduceStorm", (int64)ESSAbilityKind::ReduceStorm },
				{ "ESSAbilityKind::Fever", (int64)ESSAbilityKind::Fever },
				{ "ESSAbilityKind::SlowAttack", (int64)ESSAbilityKind::SlowAttack },
				{ "ESSAbilityKind::HammerThrow", (int64)ESSAbilityKind::HammerThrow },
				{ "ESSAbilityKind::SafeLanding", (int64)ESSAbilityKind::SafeLanding },
				{ "ESSAbilityKind::AvoidTrap", (int64)ESSAbilityKind::AvoidTrap },
				{ "ESSAbilityKind::Move", (int64)ESSAbilityKind::Move },
				{ "ESSAbilityKind::Max", (int64)ESSAbilityKind::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AttackPowerup.Name", "ESSAbilityKind::AttackPowerup" },
				{ "AvoidTrap.Name", "ESSAbilityKind::AvoidTrap" },
				{ "BlueprintType", "true" },
				{ "EnemyVisible.Name", "ESSAbilityKind::EnemyVisible" },
				{ "Fever.Name", "ESSAbilityKind::Fever" },
				{ "HammerThrow.Name", "ESSAbilityKind::HammerThrow" },
				{ "HeatMeterBonus.Name", "ESSAbilityKind::HeatMeterBonus" },
				{ "HpRecover.Name", "ESSAbilityKind::HpRecover" },
				{ "ItemVisible.Name", "ESSAbilityKind::ItemVisible" },
				{ "JumpPowerup.Name", "ESSAbilityKind::JumpPowerup" },
				{ "Max.Name", "ESSAbilityKind::Max" },
				{ "ModuleRelativePath", "Public/ESSAbilityKind.h" },
				{ "Move.Name", "ESSAbilityKind::Move" },
				{ "None.Name", "ESSAbilityKind::None" },
				{ "ReduceDamage.Name", "ESSAbilityKind::ReduceDamage" },
				{ "ReduceStorm.Name", "ESSAbilityKind::ReduceStorm" },
				{ "ReviveFromKo.Name", "ESSAbilityKind::ReviveFromKo" },
				{ "SafeLanding.Name", "ESSAbilityKind::SafeLanding" },
				{ "SeeThrough.Name", "ESSAbilityKind::SeeThrough" },
				{ "SlowAttack.Name", "ESSAbilityKind::SlowAttack" },
				{ "SpawnItemBox.Name", "ESSAbilityKind::SpawnItemBox" },
				{ "Speedup.Name", "ESSAbilityKind::Speedup" },
				{ "SuperArmor.Name", "ESSAbilityKind::SuperArmor" },
				{ "WeaponAttackPowerup.Name", "ESSAbilityKind::WeaponAttackPowerup" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSAbilityKind",
				"ESSAbilityKind",
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
