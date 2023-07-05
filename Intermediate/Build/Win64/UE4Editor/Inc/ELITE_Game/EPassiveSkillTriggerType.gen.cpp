// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Game/Public/EPassiveSkillTriggerType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPassiveSkillTriggerType() {}
// Cross Module References
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EPassiveSkillTriggerType();
	UPackage* Z_Construct_UPackage__Script_ELITE_Game();
// End Cross Module References
	static UEnum* EPassiveSkillTriggerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Game_EPassiveSkillTriggerType, Z_Construct_UPackage__Script_ELITE_Game(), TEXT("EPassiveSkillTriggerType"));
		}
		return Singleton;
	}
	template<> ELITE_GAME_API UEnum* StaticEnum<EPassiveSkillTriggerType>()
	{
		return EPassiveSkillTriggerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPassiveSkillTriggerType(EPassiveSkillTriggerType_StaticEnum, TEXT("/Script/ELITE_Game"), TEXT("EPassiveSkillTriggerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Game_EPassiveSkillTriggerType_Hash() { return 3881318499U; }
	UEnum* Z_Construct_UEnum_ELITE_Game_EPassiveSkillTriggerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Game();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPassiveSkillTriggerType"), 0, Get_Z_Construct_UEnum_ELITE_Game_EPassiveSkillTriggerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPassiveSkillTriggerType::All", (int64)EPassiveSkillTriggerType::All },
				{ "EPassiveSkillTriggerType::ReceiveFinisher", (int64)EPassiveSkillTriggerType::ReceiveFinisher },
				{ "EPassiveSkillTriggerType::Submission", (int64)EPassiveSkillTriggerType::Submission },
				{ "EPassiveSkillTriggerType::ReceiveSubmission", (int64)EPassiveSkillTriggerType::ReceiveSubmission },
				{ "EPassiveSkillTriggerType::Down", (int64)EPassiveSkillTriggerType::Down },
				{ "EPassiveSkillTriggerType::RopeReboundAttack", (int64)EPassiveSkillTriggerType::RopeReboundAttack },
				{ "EPassiveSkillTriggerType::OutsideAttack", (int64)EPassiveSkillTriggerType::OutsideAttack },
				{ "EPassiveSkillTriggerType::GuardSuccess", (int64)EPassiveSkillTriggerType::GuardSuccess },
				{ "EPassiveSkillTriggerType::ReceiveSlam", (int64)EPassiveSkillTriggerType::ReceiveSlam },
				{ "EPassiveSkillTriggerType::ArmDamage", (int64)EPassiveSkillTriggerType::ArmDamage },
				{ "EPassiveSkillTriggerType::LegDamage", (int64)EPassiveSkillTriggerType::LegDamage },
				{ "EPassiveSkillTriggerType::WeaponDamage", (int64)EPassiveSkillTriggerType::WeaponDamage },
				{ "EPassiveSkillTriggerType::DirtyDamage", (int64)EPassiveSkillTriggerType::DirtyDamage },
				{ "EPassiveSkillTriggerType::ReceiveFinisherPinOrSubmission", (int64)EPassiveSkillTriggerType::ReceiveFinisherPinOrSubmission },
				{ "EPassiveSkillTriggerType::FirstChainWrestling", (int64)EPassiveSkillTriggerType::FirstChainWrestling },
				{ "EPassiveSkillTriggerType::FirstAttack", (int64)EPassiveSkillTriggerType::FirstAttack },
				{ "EPassiveSkillTriggerType::GrapplePush", (int64)EPassiveSkillTriggerType::GrapplePush },
				{ "EPassiveSkillTriggerType::CornerWhipAttack", (int64)EPassiveSkillTriggerType::CornerWhipAttack },
				{ "EPassiveSkillTriggerType::Tope", (int64)EPassiveSkillTriggerType::Tope },
				{ "EPassiveSkillTriggerType::Diving", (int64)EPassiveSkillTriggerType::Diving },
				{ "EPassiveSkillTriggerType::Springboard", (int64)EPassiveSkillTriggerType::Springboard },
				{ "EPassiveSkillTriggerType::EnvironmentAttack", (int64)EPassiveSkillTriggerType::EnvironmentAttack },
				{ "EPassiveSkillTriggerType::PinKickout", (int64)EPassiveSkillTriggerType::PinKickout },
				{ "EPassiveSkillTriggerType::ReceivePinKickout", (int64)EPassiveSkillTriggerType::ReceivePinKickout },
				{ "EPassiveSkillTriggerType::TenMoves", (int64)EPassiveSkillTriggerType::TenMoves },
				{ "EPassiveSkillTriggerType::Taunt", (int64)EPassiveSkillTriggerType::Taunt },
				{ "EPassiveSkillTriggerType::JumpingTouch", (int64)EPassiveSkillTriggerType::JumpingTouch },
				{ "EPassiveSkillTriggerType::TwoPlatoon", (int64)EPassiveSkillTriggerType::TwoPlatoon },
				{ "EPassiveSkillTriggerType::EquipWeapon", (int64)EPassiveSkillTriggerType::EquipWeapon },
				{ "EPassiveSkillTriggerType::BattleRoyaleBeat", (int64)EPassiveSkillTriggerType::BattleRoyaleBeat },
				{ "EPassiveSkillTriggerType::BattleRoyale5Min", (int64)EPassiveSkillTriggerType::BattleRoyale5Min },
				{ "EPassiveSkillTriggerType::Explision", (int64)EPassiveSkillTriggerType::Explision },
				{ "EPassiveSkillTriggerType::ReceiveExplision", (int64)EPassiveSkillTriggerType::ReceiveExplision },
				{ "EPassiveSkillTriggerType::ExplidingMatchRemain30sec", (int64)EPassiveSkillTriggerType::ExplidingMatchRemain30sec },
				{ "EPassiveSkillTriggerType::ReceiveInjury", (int64)EPassiveSkillTriggerType::ReceiveInjury },
				{ "EPassiveSkillTriggerType::TargetInjury", (int64)EPassiveSkillTriggerType::TargetInjury },
				{ "EPassiveSkillTriggerType::ReceiveBlood", (int64)EPassiveSkillTriggerType::ReceiveBlood },
				{ "EPassiveSkillTriggerType::TargetBlood", (int64)EPassiveSkillTriggerType::TargetBlood },
				{ "EPassiveSkillTriggerType::ReceiveFinalPin", (int64)EPassiveSkillTriggerType::ReceiveFinalPin },
				{ "EPassiveSkillTriggerType::ReceiveFinalSubmission", (int64)EPassiveSkillTriggerType::ReceiveFinalSubmission },
				{ "EPassiveSkillTriggerType::PinDexterity", (int64)EPassiveSkillTriggerType::PinDexterity },
				{ "EPassiveSkillTriggerType::HitPointZero", (int64)EPassiveSkillTriggerType::HitPointZero },
				{ "EPassiveSkillTriggerType::TargetSpecial", (int64)EPassiveSkillTriggerType::TargetSpecial },
				{ "EPassiveSkillTriggerType::Finisher", (int64)EPassiveSkillTriggerType::Finisher },
				{ "EPassiveSkillTriggerType::ArmLegSubmission", (int64)EPassiveSkillTriggerType::ArmLegSubmission },
				{ "EPassiveSkillTriggerType::Towplatoon", (int64)EPassiveSkillTriggerType::Towplatoon },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Name", "EPassiveSkillTriggerType::All" },
				{ "ArmDamage.Name", "EPassiveSkillTriggerType::ArmDamage" },
				{ "ArmLegSubmission.Name", "EPassiveSkillTriggerType::ArmLegSubmission" },
				{ "BattleRoyale5Min.Name", "EPassiveSkillTriggerType::BattleRoyale5Min" },
				{ "BattleRoyaleBeat.Name", "EPassiveSkillTriggerType::BattleRoyaleBeat" },
				{ "BlueprintType", "true" },
				{ "CornerWhipAttack.Name", "EPassiveSkillTriggerType::CornerWhipAttack" },
				{ "DirtyDamage.Name", "EPassiveSkillTriggerType::DirtyDamage" },
				{ "Diving.Name", "EPassiveSkillTriggerType::Diving" },
				{ "Down.Name", "EPassiveSkillTriggerType::Down" },
				{ "EnvironmentAttack.Name", "EPassiveSkillTriggerType::EnvironmentAttack" },
				{ "EquipWeapon.Name", "EPassiveSkillTriggerType::EquipWeapon" },
				{ "ExplidingMatchRemain30sec.Name", "EPassiveSkillTriggerType::ExplidingMatchRemain30sec" },
				{ "Explision.Name", "EPassiveSkillTriggerType::Explision" },
				{ "Finisher.Name", "EPassiveSkillTriggerType::Finisher" },
				{ "FirstAttack.Name", "EPassiveSkillTriggerType::FirstAttack" },
				{ "FirstChainWrestling.Name", "EPassiveSkillTriggerType::FirstChainWrestling" },
				{ "GrapplePush.Name", "EPassiveSkillTriggerType::GrapplePush" },
				{ "GuardSuccess.Name", "EPassiveSkillTriggerType::GuardSuccess" },
				{ "HitPointZero.Name", "EPassiveSkillTriggerType::HitPointZero" },
				{ "JumpingTouch.Name", "EPassiveSkillTriggerType::JumpingTouch" },
				{ "LegDamage.Name", "EPassiveSkillTriggerType::LegDamage" },
				{ "ModuleRelativePath", "Public/EPassiveSkillTriggerType.h" },
				{ "OutsideAttack.Name", "EPassiveSkillTriggerType::OutsideAttack" },
				{ "PinDexterity.Name", "EPassiveSkillTriggerType::PinDexterity" },
				{ "PinKickout.Name", "EPassiveSkillTriggerType::PinKickout" },
				{ "ReceiveBlood.Name", "EPassiveSkillTriggerType::ReceiveBlood" },
				{ "ReceiveExplision.Name", "EPassiveSkillTriggerType::ReceiveExplision" },
				{ "ReceiveFinalPin.Name", "EPassiveSkillTriggerType::ReceiveFinalPin" },
				{ "ReceiveFinalSubmission.Name", "EPassiveSkillTriggerType::ReceiveFinalSubmission" },
				{ "ReceiveFinisher.Name", "EPassiveSkillTriggerType::ReceiveFinisher" },
				{ "ReceiveFinisherPinOrSubmission.Name", "EPassiveSkillTriggerType::ReceiveFinisherPinOrSubmission" },
				{ "ReceiveInjury.Name", "EPassiveSkillTriggerType::ReceiveInjury" },
				{ "ReceivePinKickout.Name", "EPassiveSkillTriggerType::ReceivePinKickout" },
				{ "ReceiveSlam.Name", "EPassiveSkillTriggerType::ReceiveSlam" },
				{ "ReceiveSubmission.Name", "EPassiveSkillTriggerType::ReceiveSubmission" },
				{ "RopeReboundAttack.Name", "EPassiveSkillTriggerType::RopeReboundAttack" },
				{ "Springboard.Name", "EPassiveSkillTriggerType::Springboard" },
				{ "Submission.Name", "EPassiveSkillTriggerType::Submission" },
				{ "TargetBlood.Name", "EPassiveSkillTriggerType::TargetBlood" },
				{ "TargetInjury.Name", "EPassiveSkillTriggerType::TargetInjury" },
				{ "TargetSpecial.Name", "EPassiveSkillTriggerType::TargetSpecial" },
				{ "Taunt.Name", "EPassiveSkillTriggerType::Taunt" },
				{ "TenMoves.Name", "EPassiveSkillTriggerType::TenMoves" },
				{ "Tope.Name", "EPassiveSkillTriggerType::Tope" },
				{ "Towplatoon.Name", "EPassiveSkillTriggerType::Towplatoon" },
				{ "TwoPlatoon.Name", "EPassiveSkillTriggerType::TwoPlatoon" },
				{ "WeaponDamage.Name", "EPassiveSkillTriggerType::WeaponDamage" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Game,
				nullptr,
				"EPassiveSkillTriggerType",
				"EPassiveSkillTriggerType",
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
