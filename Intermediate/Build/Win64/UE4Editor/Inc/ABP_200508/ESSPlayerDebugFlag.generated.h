// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSPlayerDebugFlag_generated_h
#error "ESSPlayerDebugFlag.generated.h already included, missing '#pragma once' in ESSPlayerDebugFlag.h"
#endif
#define ABP_200508_ESSPlayerDebugFlag_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSPlayerDebugFlag_h


#define FOREACH_ENUM_ESSPLAYERDEBUGFLAG(op) \
	op(ESSPlayerDebugFlag::None) \
	op(ESSPlayerDebugFlag::CriticalAttack) \
	op(ESSPlayerDebugFlag::NoDamage) \
	op(ESSPlayerDebugFlag::Invincible) \
	op(ESSPlayerDebugFlag::IgnoreAbilityCoolTime) \
	op(ESSPlayerDebugFlag::HighSpeed) \
	op(ESSPlayerDebugFlag::SuperJump) \
	op(ESSPlayerDebugFlag::IgnoreGimmickCoolTime) \
	op(ESSPlayerDebugFlag::FixedAttentionPoint) \
	op(ESSPlayerDebugFlag::TestReliableRPC) \
	op(ESSPlayerDebugFlag::TestUnreliableRPC) \
	op(ESSPlayerDebugFlag::MaxHpBoost) \
	op(ESSPlayerDebugFlag::UnlimitedUseItemAndWeapon) \
	op(ESSPlayerDebugFlag::AutoAttack) \
	op(ESSPlayerDebugFlag::AutoInput_MoveForward) \
	op(ESSPlayerDebugFlag::AutoInput_MoveRotate) \
	op(ESSPlayerDebugFlag::AutoInput_MoveToTarget) \
	op(ESSPlayerDebugFlag::AutoInput_Guard) \
	op(ESSPlayerDebugFlag::AutoInput_Jump) \
	op(ESSPlayerDebugFlag::AutoInput_AirJump) \
	op(ESSPlayerDebugFlag::AutoInput_Attack) \
	op(ESSPlayerDebugFlag::AutoInput_AirAttack) \
	op(ESSPlayerDebugFlag::IgnoreMovementTimeout) \
	op(ESSPlayerDebugFlag::Max) 

enum class ESSPlayerDebugFlag : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSPlayerDebugFlag>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
