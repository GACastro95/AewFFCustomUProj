// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ECareerCityMoveState_generated_h
#error "ECareerCityMoveState.generated.h already included, missing '#pragma once' in ECareerCityMoveState.h"
#endif
#define ABP_200508_ECareerCityMoveState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ECareerCityMoveState_h


#define FOREACH_ENUM_ECAREERCITYMOVESTATE(op) \
	op(ECareerCityMoveState::None) \
	op(ECareerCityMoveState::MoveDirAdjust) \
	op(ECareerCityMoveState::WaitStartMove) \
	op(ECareerCityMoveState::Moving) \
	op(ECareerCityMoveState::WaitStopArrive) \
	op(ECareerCityMoveState::Arrive) \
	op(ECareerCityMoveState::End) 

enum class ECareerCityMoveState : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ECareerCityMoveState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
