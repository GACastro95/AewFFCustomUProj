// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSDamageReceiverState_generated_h
#error "ESSDamageReceiverState.generated.h already included, missing '#pragma once' in ESSDamageReceiverState.h"
#endif
#define ABP_200508_ESSDamageReceiverState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSDamageReceiverState_h


#define FOREACH_ENUM_ESSDAMAGERECEIVERSTATE(op) \
	op(ESSDamageReceiverState::Default) \
	op(ESSDamageReceiverState::DefaultOnGround) \
	op(ESSDamageReceiverState::DefaultInAir) \
	op(ESSDamageReceiverState::Guard) \
	op(ESSDamageReceiverState::Attack) \
	op(ESSDamageReceiverState::AttackWithArmor) \
	op(ESSDamageReceiverState::LongRangeAttack) \
	op(ESSDamageReceiverState::Grapple) \
	op(ESSDamageReceiverState::Sync) \
	op(ESSDamageReceiverState::DamagedOnGround) \
	op(ESSDamageReceiverState::DamagedInAir) \
	op(ESSDamageReceiverState::DamagedBlow) \
	op(ESSDamageReceiverState::DamagedWaitSituationMove) \
	op(ESSDamageReceiverState::DamagedWallHit) \
	op(ESSDamageReceiverState::Down) \
	op(ESSDamageReceiverState::DownStandUp) \
	op(ESSDamageReceiverState::VehicleRiding) \
	op(ESSDamageReceiverState::Invincible) \
	op(ESSDamageReceiverState::AfterDownStandUp) \
	op(ESSDamageReceiverState::AdditionalSuperArmor) 

enum class ESSDamageReceiverState : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSDamageReceiverState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
