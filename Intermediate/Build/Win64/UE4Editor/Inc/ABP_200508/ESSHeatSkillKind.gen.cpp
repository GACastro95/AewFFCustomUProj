// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSHeatSkillKind.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSHeatSkillKind() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSHeatSkillKind();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSHeatSkillKind_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSHeatSkillKind, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSHeatSkillKind"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSHeatSkillKind>()
	{
		return ESSHeatSkillKind_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSHeatSkillKind(ESSHeatSkillKind_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSHeatSkillKind"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSHeatSkillKind_Hash() { return 977859767U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSHeatSkillKind()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSHeatSkillKind"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSHeatSkillKind_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSHeatSkillKind::None", (int64)ESSHeatSkillKind::None },
				{ "ESSHeatSkillKind::DamageBoost", (int64)ESSHeatSkillKind::DamageBoost },
				{ "ESSHeatSkillKind::BlowBoost", (int64)ESSHeatSkillKind::BlowBoost },
				{ "ESSHeatSkillKind::IgnoreLandingDamage", (int64)ESSHeatSkillKind::IgnoreLandingDamage },
				{ "ESSHeatSkillKind::WeaponQuantityPlus", (int64)ESSHeatSkillKind::WeaponQuantityPlus },
				{ "ESSHeatSkillKind::AttentionBoost", (int64)ESSHeatSkillKind::AttentionBoost },
				{ "ESSHeatSkillKind::WeaponGunRangeBoost", (int64)ESSHeatSkillKind::WeaponGunRangeBoost },
				{ "ESSHeatSkillKind::WeaponThrowExpand", (int64)ESSHeatSkillKind::WeaponThrowExpand },
				{ "ESSHeatSkillKind::MoveLevelUp", (int64)ESSHeatSkillKind::MoveLevelUp },
				{ "ESSHeatSkillKind::DamageBoostToShield", (int64)ESSHeatSkillKind::DamageBoostToShield },
				{ "ESSHeatSkillKind::AttackCapsuleExpand", (int64)ESSHeatSkillKind::AttackCapsuleExpand },
				{ "ESSHeatSkillKind::ComboPlus", (int64)ESSHeatSkillKind::ComboPlus },
				{ "ESSHeatSkillKind::GuardLevelUp", (int64)ESSHeatSkillKind::GuardLevelUp },
				{ "ESSHeatSkillKind::MotionSpeedUp", (int64)ESSHeatSkillKind::MotionSpeedUp },
				{ "ESSHeatSkillKind::Max", (int64)ESSHeatSkillKind::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AttackCapsuleExpand.Name", "ESSHeatSkillKind::AttackCapsuleExpand" },
				{ "AttentionBoost.Name", "ESSHeatSkillKind::AttentionBoost" },
				{ "BlowBoost.Name", "ESSHeatSkillKind::BlowBoost" },
				{ "BlueprintType", "true" },
				{ "ComboPlus.Name", "ESSHeatSkillKind::ComboPlus" },
				{ "DamageBoost.Name", "ESSHeatSkillKind::DamageBoost" },
				{ "DamageBoostToShield.Name", "ESSHeatSkillKind::DamageBoostToShield" },
				{ "GuardLevelUp.Name", "ESSHeatSkillKind::GuardLevelUp" },
				{ "IgnoreLandingDamage.Name", "ESSHeatSkillKind::IgnoreLandingDamage" },
				{ "Max.Name", "ESSHeatSkillKind::Max" },
				{ "ModuleRelativePath", "Public/ESSHeatSkillKind.h" },
				{ "MotionSpeedUp.Name", "ESSHeatSkillKind::MotionSpeedUp" },
				{ "MoveLevelUp.Name", "ESSHeatSkillKind::MoveLevelUp" },
				{ "None.Name", "ESSHeatSkillKind::None" },
				{ "WeaponGunRangeBoost.Name", "ESSHeatSkillKind::WeaponGunRangeBoost" },
				{ "WeaponQuantityPlus.Name", "ESSHeatSkillKind::WeaponQuantityPlus" },
				{ "WeaponThrowExpand.Name", "ESSHeatSkillKind::WeaponThrowExpand" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSHeatSkillKind",
				"ESSHeatSkillKind",
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
