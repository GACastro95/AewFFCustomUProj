// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSPlayerFlag_generated_h
#error "ESSPlayerFlag.generated.h already included, missing '#pragma once' in ESSPlayerFlag.h"
#endif
#define ABP_200508_ESSPlayerFlag_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSPlayerFlag_h


#define FOREACH_ENUM_ESSPLAYERFLAG(op) \
	op(ESSPlayerFlag::None) \
	op(ESSPlayerFlag::UsingAbility1) \
	op(ESSPlayerFlag::UsingAbility2) \
	op(ESSPlayerFlag::UsingAbility3) \
	op(ESSPlayerFlag::PressingAbilityShiftForWatcher) \
	op(ESSPlayerFlag::ViewWholeMapForWatcher) \
	op(ESSPlayerFlag::GunAimForWatcher) \
	op(ESSPlayerFlag::ThrowWeaponAimForWatcher) \
	op(ESSPlayerFlag::PutTrapAimForWatcher) \
	op(ESSPlayerFlag::Max) 

enum class ESSPlayerFlag : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSPlayerFlag>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
