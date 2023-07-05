// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSDamageReason_generated_h
#error "ESSDamageReason.generated.h already included, missing '#pragma once' in ESSDamageReason.h"
#endif
#define ABP_200508_ESSDamageReason_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSDamageReason_h


#define FOREACH_ENUM_ESSDAMAGEREASON(op) \
	op(ESSDamageReason::None) \
	op(ESSDamageReason::Strike) \
	op(ESSDamageReason::Weapon) \
	op(ESSDamageReason::Grapple) \
	op(ESSDamageReason::Finisher) \
	op(ESSDamageReason::SyncAttack) \
	op(ESSDamageReason::Projectile) \
	op(ESSDamageReason::Explosion) \
	op(ESSDamageReason::Pushpin) \
	op(ESSDamageReason::BadStatus) \
	op(ESSDamageReason::VehicleRunOver) \
	op(ESSDamageReason::VehicleDetach) \
	op(ESSDamageReason::AttackFeedback) \
	op(ESSDamageReason::Involve) \
	op(ESSDamageReason::InvolveFeedback) \
	op(ESSDamageReason::Storm) \
	op(ESSDamageReason::KoDamage) \
	op(ESSDamageReason::LandingDamage) \
	op(ESSDamageReason::Tramp) \
	op(ESSDamageReason::AttackToDown) \
	op(ESSDamageReason::Max) 

enum class ESSDamageReason : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSDamageReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
