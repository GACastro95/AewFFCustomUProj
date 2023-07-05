// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSAbilitySlotState_generated_h
#error "ESSAbilitySlotState.generated.h already included, missing '#pragma once' in ESSAbilitySlotState.h"
#endif
#define ABP_200508_ESSAbilitySlotState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSAbilitySlotState_h


#define FOREACH_ENUM_ESSABILITYSLOTSTATE(op) \
	op(ESSAbilitySlotState::Empty) \
	op(ESSAbilitySlotState::Passive) \
	op(ESSAbilitySlotState::Active_Using) \
	op(ESSAbilitySlotState::Active_CoolTime) \
	op(ESSAbilitySlotState::Active_Charged) \
	op(ESSAbilitySlotState::Auto_Using) \
	op(ESSAbilitySlotState::Auto_CoolTime) \
	op(ESSAbilitySlotState::Auto_Charged) \
	op(ESSAbilitySlotState::Used) 

enum class ESSAbilitySlotState : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSAbilitySlotState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
