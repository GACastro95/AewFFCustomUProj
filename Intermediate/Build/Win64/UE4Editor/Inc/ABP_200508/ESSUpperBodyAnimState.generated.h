// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSUpperBodyAnimState_generated_h
#error "ESSUpperBodyAnimState.generated.h already included, missing '#pragma once' in ESSUpperBodyAnimState.h"
#endif
#define ABP_200508_ESSUpperBodyAnimState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSUpperBodyAnimState_h


#define FOREACH_ENUM_ESSUPPERBODYANIMSTATE(op) \
	op(ESSUpperBodyAnimState::Default) \
	op(ESSUpperBodyAnimState::HoldGun) \
	op(ESSUpperBodyAnimState::HoldWeaponThrow) \
	op(ESSUpperBodyAnimState::HoldWeaponThrow2) \
	op(ESSUpperBodyAnimState::HoldWeaponTrap) 

enum class ESSUpperBodyAnimState : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSUpperBodyAnimState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS