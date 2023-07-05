// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_GAME_EPassiveSkillTriggerType_generated_h
#error "EPassiveSkillTriggerType.generated.h already included, missing '#pragma once' in EPassiveSkillTriggerType.h"
#endif
#define ELITE_GAME_EPassiveSkillTriggerType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_EPassiveSkillTriggerType_h


#define FOREACH_ENUM_EPASSIVESKILLTRIGGERTYPE(op) \
	op(EPassiveSkillTriggerType::All) \
	op(EPassiveSkillTriggerType::ReceiveFinisher) \
	op(EPassiveSkillTriggerType::Submission) \
	op(EPassiveSkillTriggerType::ReceiveSubmission) \
	op(EPassiveSkillTriggerType::Down) \
	op(EPassiveSkillTriggerType::RopeReboundAttack) \
	op(EPassiveSkillTriggerType::OutsideAttack) \
	op(EPassiveSkillTriggerType::GuardSuccess) \
	op(EPassiveSkillTriggerType::ReceiveSlam) \
	op(EPassiveSkillTriggerType::ArmDamage) \
	op(EPassiveSkillTriggerType::LegDamage) \
	op(EPassiveSkillTriggerType::WeaponDamage) \
	op(EPassiveSkillTriggerType::DirtyDamage) \
	op(EPassiveSkillTriggerType::ReceiveFinisherPinOrSubmission) \
	op(EPassiveSkillTriggerType::FirstChainWrestling) \
	op(EPassiveSkillTriggerType::FirstAttack) \
	op(EPassiveSkillTriggerType::GrapplePush) \
	op(EPassiveSkillTriggerType::CornerWhipAttack) \
	op(EPassiveSkillTriggerType::Tope) \
	op(EPassiveSkillTriggerType::Diving) \
	op(EPassiveSkillTriggerType::Springboard) \
	op(EPassiveSkillTriggerType::EnvironmentAttack) \
	op(EPassiveSkillTriggerType::PinKickout) \
	op(EPassiveSkillTriggerType::ReceivePinKickout) \
	op(EPassiveSkillTriggerType::TenMoves) \
	op(EPassiveSkillTriggerType::Taunt) \
	op(EPassiveSkillTriggerType::JumpingTouch) \
	op(EPassiveSkillTriggerType::TwoPlatoon) \
	op(EPassiveSkillTriggerType::EquipWeapon) \
	op(EPassiveSkillTriggerType::BattleRoyaleBeat) \
	op(EPassiveSkillTriggerType::BattleRoyale5Min) \
	op(EPassiveSkillTriggerType::Explision) \
	op(EPassiveSkillTriggerType::ReceiveExplision) \
	op(EPassiveSkillTriggerType::ExplidingMatchRemain30sec) \
	op(EPassiveSkillTriggerType::ReceiveInjury) \
	op(EPassiveSkillTriggerType::TargetInjury) \
	op(EPassiveSkillTriggerType::ReceiveBlood) \
	op(EPassiveSkillTriggerType::TargetBlood) \
	op(EPassiveSkillTriggerType::ReceiveFinalPin) \
	op(EPassiveSkillTriggerType::ReceiveFinalSubmission) \
	op(EPassiveSkillTriggerType::PinDexterity) \
	op(EPassiveSkillTriggerType::HitPointZero) \
	op(EPassiveSkillTriggerType::TargetSpecial) \
	op(EPassiveSkillTriggerType::Finisher) \
	op(EPassiveSkillTriggerType::ArmLegSubmission) \
	op(EPassiveSkillTriggerType::Towplatoon) 

enum class EPassiveSkillTriggerType : uint8;
template<> ELITE_GAME_API UEnum* StaticEnum<EPassiveSkillTriggerType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
