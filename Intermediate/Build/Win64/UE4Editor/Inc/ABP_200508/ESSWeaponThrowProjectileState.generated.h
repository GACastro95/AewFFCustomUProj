// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSWeaponThrowProjectileState_generated_h
#error "ESSWeaponThrowProjectileState.generated.h already included, missing '#pragma once' in ESSWeaponThrowProjectileState.h"
#endif
#define ABP_200508_ESSWeaponThrowProjectileState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSWeaponThrowProjectileState_h


#define FOREACH_ENUM_ESSWEAPONTHROWPROJECTILESTATE(op) \
	op(ESSWeaponThrowProjectileState::Hold) \
	op(ESSWeaponThrowProjectileState::Stocked) \
	op(ESSWeaponThrowProjectileState::Launched) \
	op(ESSWeaponThrowProjectileState::PostImpact) 

enum class ESSWeaponThrowProjectileState : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSWeaponThrowProjectileState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
