// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSAttentionReason_generated_h
#error "ESSAttentionReason.generated.h already included, missing '#pragma once' in ESSAttentionReason.h"
#endif
#define ABP_200508_ESSAttentionReason_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSAttentionReason_h


#define FOREACH_ENUM_ESSATTENTIONREASON(op) \
	op(ESSAttentionReason::None) \
	op(ESSAttentionReason::HitAttack) \
	op(ESSAttentionReason::Throw) \
	op(ESSAttentionReason::Destructible) \
	op(ESSAttentionReason::KO) \
	op(ESSAttentionReason::Finisher) \
	op(ESSAttentionReason::AttentionArea) \
	op(ESSAttentionReason::Taunt) \
	op(ESSAttentionReason::VehicleAttack) \
	op(ESSAttentionReason::VehicleMoving) \
	op(ESSAttentionReason::SituationMove) \
	op(ESSAttentionReason::HorseAttack) \
	op(ESSAttentionReason::HorseMoving) \
	op(ESSAttentionReason::NegativePenalty) \
	op(ESSAttentionReason::Fever) 

enum class ESSAttentionReason : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSAttentionReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
