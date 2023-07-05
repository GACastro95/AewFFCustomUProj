// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_GAME_EELMatchScoreObjective_generated_h
#error "EELMatchScoreObjective.generated.h already included, missing '#pragma once' in EELMatchScoreObjective.h"
#endif
#define ELITE_GAME_EELMatchScoreObjective_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_EELMatchScoreObjective_h


#define FOREACH_ENUM_EELMATCHSCOREOBJECTIVE(op) \
	op(EELMatchScoreObjective::None) \
	op(EELMatchScoreObjective::FinisherPinfall) \
	op(EELMatchScoreObjective::SignaturePinfall) \
	op(EELMatchScoreObjective::NormalPinfall) \
	op(EELMatchScoreObjective::FinisherSubmit) \
	op(EELMatchScoreObjective::SignatureSubmit) \
	op(EELMatchScoreObjective::NormalSubmit) \
	op(EELMatchScoreObjective::CountOutWin) \
	op(EELMatchScoreObjective::CountOutDraw) \
	op(EELMatchScoreObjective::SignatureChanceSuccess) \
	op(EELMatchScoreObjective::DoubleSignatureMoves) \
	op(EELMatchScoreObjective::FinisherChanceSuccess) \
	op(EELMatchScoreObjective::DoubleFinisherMoves) \
	op(EELMatchScoreObjective::NoSignatureSelect) \
	op(EELMatchScoreObjective::NoExciteChance) \
	op(EELMatchScoreObjective::NoSpecialChance) \
	op(EELMatchScoreObjective::DangerWin) \
	op(EELMatchScoreObjective::FinisherPinKickout) \
	op(EELMatchScoreObjective::SignaturePinKickout) \
	op(EELMatchScoreObjective::PinKickout) \
	op(EELMatchScoreObjective::FinisherSubmissionEscape) \
	op(EELMatchScoreObjective::SignatureSubmissionEscape) \
	op(EELMatchScoreObjective::SubmissionEscape) \
	op(EELMatchScoreObjective::NoDanger) \
	op(EELMatchScoreObjective::RiskEscape) \
	op(EELMatchScoreObjective::DangerEscape) \
	op(EELMatchScoreObjective::ChickenRun) \
	op(EELMatchScoreObjective::SuperChickenRun) \
	op(EELMatchScoreObjective::SignatureReversal) \
	op(EELMatchScoreObjective::SquashMatch) \
	op(EELMatchScoreObjective::EpicMatch) \
	op(EELMatchScoreObjective::Boring) \
	op(EELMatchScoreObjective::RingsideFight) \
	op(EELMatchScoreObjective::BarricadeClash) \
	op(EELMatchScoreObjective::RingDivingMovesSuccess) \
	op(EELMatchScoreObjective::RingsideDivingMovesSuccess) \
	op(EELMatchScoreObjective::SpringboardSuccess) \
	op(EELMatchScoreObjective::RingsideSpringboardSuccess) \
	op(EELMatchScoreObjective::GuardSuccess) \
	op(EELMatchScoreObjective::StrikeReversalSuccess) \
	op(EELMatchScoreObjective::GrappleReversalSuccess) \
	op(EELMatchScoreObjective::KipUp) \
	op(EELMatchScoreObjective::ReversedFinishers) \
	op(EELMatchScoreObjective::TandemAttacks) \
	op(EELMatchScoreObjective::RopeRebounds) \
	op(EELMatchScoreObjective::CornerAssaults) \
	op(EELMatchScoreObjective::ApronCleaner) \
	op(EELMatchScoreObjective::ApronAttacker) \
	op(EELMatchScoreObjective::GrappleInterrupts) \
	op(EELMatchScoreObjective::BounceBackAttacks) \
	op(EELMatchScoreObjective::CriticalHits) \
	op(EELMatchScoreObjective::DivingCatch) \
	op(EELMatchScoreObjective::CombinationCombo) \
	op(EELMatchScoreObjective::TagTeamSpecialist) \
	op(EELMatchScoreObjective::HotTag) \
	op(EELMatchScoreObjective::TandemOffense) \
	op(EELMatchScoreObjective::TeamChemistry) \
	op(EELMatchScoreObjective::DesperationTag) \
	op(EELMatchScoreObjective::BlindTag) \
	op(EELMatchScoreObjective::RuleEnforcement) \
	op(EELMatchScoreObjective::EnvironmentAttacks) \
	op(EELMatchScoreObjective::GuardRailDives) \
	op(EELMatchScoreObjective::DestroyedGuardRails) \
	op(EELMatchScoreObjective::Eliminations) \
	op(EELMatchScoreObjective::RopeEdgeReversals) \
	op(EELMatchScoreObjective::Eliminated_5) \
	op(EELMatchScoreObjective::Eliminated_10) \
	op(EELMatchScoreObjective::Eliminated_15) \
	op(EELMatchScoreObjective::Eliminated_20) \
	op(EELMatchScoreObjective::ChainWrestlingExpert) \
	op(EELMatchScoreObjective::RopeExploding) \
	op(EELMatchScoreObjective::RopeTouchExploding) \
	op(EELMatchScoreObjective::NoExploding) \
	op(EELMatchScoreObjective::CountDownEnd) \
	op(EELMatchScoreObjective::NoCountDownEnd) \
	op(EELMatchScoreObjective::BarbedWireBoard) \
	op(EELMatchScoreObjective::ExplodingWinner) \
	op(EELMatchScoreObjective::ChainWrestling) \
	op(EELMatchScoreObjective::InjuryFeet1) \
	op(EELMatchScoreObjective::InjuryFeet2) \
	op(EELMatchScoreObjective::InjuryFeet3) \
	op(EELMatchScoreObjective::InjuryArm1) \
	op(EELMatchScoreObjective::InjuryArm2) \
	op(EELMatchScoreObjective::InjuryArm3) \
	op(EELMatchScoreObjective::ObjectWear) \
	op(EELMatchScoreObjective::ThumbtacksPain) \
	op(EELMatchScoreObjective::WeaponAttack) \
	op(EELMatchScoreObjective::ChopBattle) \
	op(EELMatchScoreObjective::LadderDivingAttack) \
	op(EELMatchScoreObjective::LadderPain) \
	op(EELMatchScoreObjective::LadderHelicopter) \
	op(EELMatchScoreObjective::IWLadderDamage) \
	op(EELMatchScoreObjective::TableBreak) \
	op(EELMatchScoreObjective::FireTableBreak) \
	op(EELMatchScoreObjective::RingOutExplosion) \
	op(EELMatchScoreObjective::GimmickInfringement) \
	op(EELMatchScoreObjective::GimmickInfringementPinfall) \
	op(EELMatchScoreObjective::GuardBreak) \
	op(EELMatchScoreObjective::HandsInPocket) \
	op(EELMatchScoreObjective::HandsInPocketPinfall) \
	op(EELMatchScoreObjective::PinchLowBlow) \
	op(EELMatchScoreObjective::PinchPinfall) \
	op(EELMatchScoreObjective::RebuondRecoil) \
	op(EELMatchScoreObjective::CornerRecoil) \
	op(EELMatchScoreObjective::JumpStart) \
	op(EELMatchScoreObjective::BailOut) \
	op(EELMatchScoreObjective::PS_ChainWrestlingBuff) \
	op(EELMatchScoreObjective::PS_1stAttackBuff) \
	op(EELMatchScoreObjective::PS_BackAgainstTheWallBuff) \
	op(EELMatchScoreObjective::PS_ReboundAttackBuff) \
	op(EELMatchScoreObjective::PS_CornerSprintAttackBuff) \
	op(EELMatchScoreObjective::PS_TopeAttackBuff) \
	op(EELMatchScoreObjective::PS_DiveAttackBuff) \
	op(EELMatchScoreObjective::PS_SpringboardAttackBuff) \
	op(EELMatchScoreObjective::PS_EnviromentalAttackBuff) \
	op(EELMatchScoreObjective::PS_KickOutBuff) \
	op(EELMatchScoreObjective::PS_DefenderKickOutBuff) \
	op(EELMatchScoreObjective::PS_VariedOffenseBuff) \
	op(EELMatchScoreObjective::PS_TauntBuff) \
	op(EELMatchScoreObjective::PS_HotTagBuff) \
	op(EELMatchScoreObjective::PS_TagBuff) \
	op(EELMatchScoreObjective::PS_TandemOffenseBuff) \
	op(EELMatchScoreObjective::PS_2For1AttackBuff) \
	op(EELMatchScoreObjective::PS_WeaponBuff) \
	op(EELMatchScoreObjective::PS_EliminationBuff) \
	op(EELMatchScoreObjective::PS_BattleRoyaleTimerBuff) \
	op(EELMatchScoreObjective::PS_ExplosionTriggerBuff) \
	op(EELMatchScoreObjective::PS_ExplosionDamageBuff) \
	op(EELMatchScoreObjective::PS_CountDownBuff) \
	op(EELMatchScoreObjective::PS_InjuryBuff) \
	op(EELMatchScoreObjective::PS_BrutalityBuff) \
	op(EELMatchScoreObjective::PS_GroggyBuff) \
	op(EELMatchScoreObjective::PS_Grit) \
	op(EELMatchScoreObjective::PS_SubmissionToughness) \
	op(EELMatchScoreObjective::PS_DownButNotOut) \
	op(EELMatchScoreObjective::PS_EliteDefense) \
	op(EELMatchScoreObjective::PS_SubmissionSpecialist) \
	op(EELMatchScoreObjective::PS_LeverageSpecialist) \
	op(EELMatchScoreObjective::PS_ViseGrip) \
	op(EELMatchScoreObjective::PS_FinisherSpecialist) \
	op(EELMatchScoreObjective::PS_TitForTat) \
	op(EELMatchScoreObjective::PentaGlove) \
	op(EELMatchScoreObjective::PaulWightLiftUp) \
	op(EELMatchScoreObjective::LadderObjectMode) \
	op(EELMatchScoreObjective::LadderTopFall) \
	op(EELMatchScoreObjective::PinchPoisonMist) \
	op(EELMatchScoreObjective::PinchWakeUp) \
	op(EELMatchScoreObjective::StageMonitorBreak) \
	op(EELMatchScoreObjective::Kenzan) \
	op(EELMatchScoreObjective::DQWin) \
	op(EELMatchScoreObjective::LadderWin) \
	op(EELMatchScoreObjective::LeverageWin) 

enum class EELMatchScoreObjective : uint8;
template<> ELITE_GAME_API UEnum* StaticEnum<EELMatchScoreObjective>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
