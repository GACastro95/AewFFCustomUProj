// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_GAME_EChainWrestlingAttackType_generated_h
#error "EChainWrestlingAttackType.generated.h already included, missing '#pragma once' in EChainWrestlingAttackType.h"
#endif
#define ELITE_GAME_EChainWrestlingAttackType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_EChainWrestlingAttackType_h


#define FOREACH_ENUM_ECHAINWRESTLINGATTACKTYPE(op) \
	op(EChainWrestlingAttackType::None) \
	op(EChainWrestlingAttackType::Start_Up) \
	op(EChainWrestlingAttackType::Start_Down) \
	op(EChainWrestlingAttackType::Start_Left) \
	op(EChainWrestlingAttackType::Start_Right) \
	op(EChainWrestlingAttackType::Failure) \
	op(EChainWrestlingAttackType::Reversal) \
	op(EChainWrestlingAttackType::Release) 

enum class EChainWrestlingAttackType : uint8;
template<> ELITE_GAME_API UEnum* StaticEnum<EChainWrestlingAttackType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
