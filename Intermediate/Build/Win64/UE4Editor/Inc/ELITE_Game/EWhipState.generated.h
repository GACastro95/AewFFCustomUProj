// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_GAME_EWhipState_generated_h
#error "EWhipState.generated.h already included, missing '#pragma once' in EWhipState.h"
#endif
#define ELITE_GAME_EWhipState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_EWhipState_h


#define FOREACH_ENUM_EWHIPSTATE(op) \
	op(EWhipState::None) \
	op(EWhipState::Front_Stand) \
	op(EWhipState::Back_Stand) \
	op(EWhipState::Front_HandStand) \
	op(EWhipState::Back_HandStand) \
	op(EWhipState::Back_StandLeftHead) \
	op(EWhipState::Back_StandRightHead) 

enum class EWhipState : uint8;
template<> ELITE_GAME_API UEnum* StaticEnum<EWhipState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
