// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerPassiveSkillNo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerPassiveSkillNo() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerPassiveSkillNo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerPassiveSkillNo_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerPassiveSkillNo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerPassiveSkillNo"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerPassiveSkillNo>()
	{
		return ECareerPassiveSkillNo_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerPassiveSkillNo(ECareerPassiveSkillNo_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerPassiveSkillNo"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerPassiveSkillNo_Hash() { return 299013295U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerPassiveSkillNo()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerPassiveSkillNo"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerPassiveSkillNo_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerPassiveSkillNo::None", (int64)ECareerPassiveSkillNo::None },
				{ "ECareerPassiveSkillNo::PS_ChainWrestlingBuff", (int64)ECareerPassiveSkillNo::PS_ChainWrestlingBuff },
				{ "ECareerPassiveSkillNo::PS_1stAttackBuff", (int64)ECareerPassiveSkillNo::PS_1stAttackBuff },
				{ "ECareerPassiveSkillNo::PS_BackAgainstTheWallBuff", (int64)ECareerPassiveSkillNo::PS_BackAgainstTheWallBuff },
				{ "ECareerPassiveSkillNo::PS_ReboundAttackBuff", (int64)ECareerPassiveSkillNo::PS_ReboundAttackBuff },
				{ "ECareerPassiveSkillNo::PS_CornerSprintAttackBuff", (int64)ECareerPassiveSkillNo::PS_CornerSprintAttackBuff },
				{ "ECareerPassiveSkillNo::PS_TopeAttackBuff", (int64)ECareerPassiveSkillNo::PS_TopeAttackBuff },
				{ "ECareerPassiveSkillNo::PS_DivingAttackBuff", (int64)ECareerPassiveSkillNo::PS_DivingAttackBuff },
				{ "ECareerPassiveSkillNo::PS_SpringboardAttackBuff", (int64)ECareerPassiveSkillNo::PS_SpringboardAttackBuff },
				{ "ECareerPassiveSkillNo::PS_EnviromentalAttackBuff", (int64)ECareerPassiveSkillNo::PS_EnviromentalAttackBuff },
				{ "ECareerPassiveSkillNo::PS_KickOutBuff", (int64)ECareerPassiveSkillNo::PS_KickOutBuff },
				{ "ECareerPassiveSkillNo::PS_DefenderKickOutBuff", (int64)ECareerPassiveSkillNo::PS_DefenderKickOutBuff },
				{ "ECareerPassiveSkillNo::PS_VariedOffenseBuff", (int64)ECareerPassiveSkillNo::PS_VariedOffenseBuff },
				{ "ECareerPassiveSkillNo::PS_TauntBuff", (int64)ECareerPassiveSkillNo::PS_TauntBuff },
				{ "ECareerPassiveSkillNo::PS_HotTagBuff", (int64)ECareerPassiveSkillNo::PS_HotTagBuff },
				{ "ECareerPassiveSkillNo::PS_TagBuff", (int64)ECareerPassiveSkillNo::PS_TagBuff },
				{ "ECareerPassiveSkillNo::PS_TandemOffenseBuff", (int64)ECareerPassiveSkillNo::PS_TandemOffenseBuff },
				{ "ECareerPassiveSkillNo::PS_2_for_1_AttackBuff", (int64)ECareerPassiveSkillNo::PS_2_for_1_AttackBuff },
				{ "ECareerPassiveSkillNo::PS_WeaponBuff", (int64)ECareerPassiveSkillNo::PS_WeaponBuff },
				{ "ECareerPassiveSkillNo::PS_EliminationBuff", (int64)ECareerPassiveSkillNo::PS_EliminationBuff },
				{ "ECareerPassiveSkillNo::PS_BattleRoyaleTimerBuff", (int64)ECareerPassiveSkillNo::PS_BattleRoyaleTimerBuff },
				{ "ECareerPassiveSkillNo::PS_ExplosionTriggerBuff", (int64)ECareerPassiveSkillNo::PS_ExplosionTriggerBuff },
				{ "ECareerPassiveSkillNo::PS_ExplosionDamageBuff", (int64)ECareerPassiveSkillNo::PS_ExplosionDamageBuff },
				{ "ECareerPassiveSkillNo::PS_CountDownBuff", (int64)ECareerPassiveSkillNo::PS_CountDownBuff },
				{ "ECareerPassiveSkillNo::PS_InjuryBuff", (int64)ECareerPassiveSkillNo::PS_InjuryBuff },
				{ "ECareerPassiveSkillNo::PS_BloodBuff", (int64)ECareerPassiveSkillNo::PS_BloodBuff },
				{ "ECareerPassiveSkillNo::PS_GroggyBuff", (int64)ECareerPassiveSkillNo::PS_GroggyBuff },
				{ "ECareerPassiveSkillNo::PS_Grit", (int64)ECareerPassiveSkillNo::PS_Grit },
				{ "ECareerPassiveSkillNo::PS_SubmissionToughness", (int64)ECareerPassiveSkillNo::PS_SubmissionToughness },
				{ "ECareerPassiveSkillNo::PS_DownButNotOut", (int64)ECareerPassiveSkillNo::PS_DownButNotOut },
				{ "ECareerPassiveSkillNo::PS_EliteDefense", (int64)ECareerPassiveSkillNo::PS_EliteDefense },
				{ "ECareerPassiveSkillNo::PS_SubmissionSpecialist", (int64)ECareerPassiveSkillNo::PS_SubmissionSpecialist },
				{ "ECareerPassiveSkillNo::PS_LeverageSpecialist", (int64)ECareerPassiveSkillNo::PS_LeverageSpecialist },
				{ "ECareerPassiveSkillNo::PS_ViseGrip", (int64)ECareerPassiveSkillNo::PS_ViseGrip },
				{ "ECareerPassiveSkillNo::PS_FinisherSpecialist", (int64)ECareerPassiveSkillNo::PS_FinisherSpecialist },
				{ "ECareerPassiveSkillNo::PS_Tit_for_Tat", (int64)ECareerPassiveSkillNo::PS_Tit_for_Tat },
				{ "ECareerPassiveSkillNo::PS_NoDown", (int64)ECareerPassiveSkillNo::PS_NoDown },
				{ "ECareerPassiveSkillNo::SkillLimit", (int64)ECareerPassiveSkillNo::SkillLimit },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ECareerPassiveSkillNo.h" },
				{ "None.Name", "ECareerPassiveSkillNo::None" },
				{ "PS_1stAttackBuff.Name", "ECareerPassiveSkillNo::PS_1stAttackBuff" },
				{ "PS_2_for_1_AttackBuff.Name", "ECareerPassiveSkillNo::PS_2_for_1_AttackBuff" },
				{ "PS_BackAgainstTheWallBuff.Name", "ECareerPassiveSkillNo::PS_BackAgainstTheWallBuff" },
				{ "PS_BattleRoyaleTimerBuff.Name", "ECareerPassiveSkillNo::PS_BattleRoyaleTimerBuff" },
				{ "PS_BloodBuff.Name", "ECareerPassiveSkillNo::PS_BloodBuff" },
				{ "PS_ChainWrestlingBuff.Name", "ECareerPassiveSkillNo::PS_ChainWrestlingBuff" },
				{ "PS_CornerSprintAttackBuff.Name", "ECareerPassiveSkillNo::PS_CornerSprintAttackBuff" },
				{ "PS_CountDownBuff.Name", "ECareerPassiveSkillNo::PS_CountDownBuff" },
				{ "PS_DefenderKickOutBuff.Name", "ECareerPassiveSkillNo::PS_DefenderKickOutBuff" },
				{ "PS_DivingAttackBuff.Name", "ECareerPassiveSkillNo::PS_DivingAttackBuff" },
				{ "PS_DownButNotOut.Name", "ECareerPassiveSkillNo::PS_DownButNotOut" },
				{ "PS_EliminationBuff.Name", "ECareerPassiveSkillNo::PS_EliminationBuff" },
				{ "PS_EliteDefense.Name", "ECareerPassiveSkillNo::PS_EliteDefense" },
				{ "PS_EnviromentalAttackBuff.Name", "ECareerPassiveSkillNo::PS_EnviromentalAttackBuff" },
				{ "PS_ExplosionDamageBuff.Name", "ECareerPassiveSkillNo::PS_ExplosionDamageBuff" },
				{ "PS_ExplosionTriggerBuff.Name", "ECareerPassiveSkillNo::PS_ExplosionTriggerBuff" },
				{ "PS_FinisherSpecialist.Name", "ECareerPassiveSkillNo::PS_FinisherSpecialist" },
				{ "PS_Grit.Name", "ECareerPassiveSkillNo::PS_Grit" },
				{ "PS_GroggyBuff.Name", "ECareerPassiveSkillNo::PS_GroggyBuff" },
				{ "PS_HotTagBuff.Name", "ECareerPassiveSkillNo::PS_HotTagBuff" },
				{ "PS_InjuryBuff.Name", "ECareerPassiveSkillNo::PS_InjuryBuff" },
				{ "PS_KickOutBuff.Name", "ECareerPassiveSkillNo::PS_KickOutBuff" },
				{ "PS_LeverageSpecialist.Name", "ECareerPassiveSkillNo::PS_LeverageSpecialist" },
				{ "PS_NoDown.Name", "ECareerPassiveSkillNo::PS_NoDown" },
				{ "PS_ReboundAttackBuff.Name", "ECareerPassiveSkillNo::PS_ReboundAttackBuff" },
				{ "PS_SpringboardAttackBuff.Name", "ECareerPassiveSkillNo::PS_SpringboardAttackBuff" },
				{ "PS_SubmissionSpecialist.Name", "ECareerPassiveSkillNo::PS_SubmissionSpecialist" },
				{ "PS_SubmissionToughness.Name", "ECareerPassiveSkillNo::PS_SubmissionToughness" },
				{ "PS_TagBuff.Name", "ECareerPassiveSkillNo::PS_TagBuff" },
				{ "PS_TandemOffenseBuff.Name", "ECareerPassiveSkillNo::PS_TandemOffenseBuff" },
				{ "PS_TauntBuff.Name", "ECareerPassiveSkillNo::PS_TauntBuff" },
				{ "PS_Tit_for_Tat.Name", "ECareerPassiveSkillNo::PS_Tit_for_Tat" },
				{ "PS_TopeAttackBuff.Name", "ECareerPassiveSkillNo::PS_TopeAttackBuff" },
				{ "PS_VariedOffenseBuff.Name", "ECareerPassiveSkillNo::PS_VariedOffenseBuff" },
				{ "PS_ViseGrip.Name", "ECareerPassiveSkillNo::PS_ViseGrip" },
				{ "PS_WeaponBuff.Name", "ECareerPassiveSkillNo::PS_WeaponBuff" },
				{ "SkillLimit.Name", "ECareerPassiveSkillNo::SkillLimit" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerPassiveSkillNo",
				"ECareerPassiveSkillNo",
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
