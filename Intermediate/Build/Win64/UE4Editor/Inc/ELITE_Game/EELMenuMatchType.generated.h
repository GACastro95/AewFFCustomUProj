// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_GAME_EELMenuMatchType_generated_h
#error "EELMenuMatchType.generated.h already included, missing '#pragma once' in EELMenuMatchType.h"
#endif
#define ELITE_GAME_EELMenuMatchType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_EELMenuMatchType_h


#define FOREACH_ENUM_EELMENUMATCHTYPE(op) \
	op(EELMenuMatchType::SINGLE_MATCH_ONLINE) \
	op(EELMenuMatchType::SINGLE_MATCH) \
	op(EELMenuMatchType::SINGLE_MATCH_1PMG) \
	op(EELMenuMatchType::SINGLE_MATCH_2PMG) \
	op(EELMenuMatchType::SINGLE_MATCH_1P2PMG) \
	op(EELMenuMatchType::TAG_TEAM_MATCH) \
	op(EELMenuMatchType::TAG_TEAM_MATCH_1TMG) \
	op(EELMenuMatchType::TAG_TEAM_MATCH_2TMG) \
	op(EELMenuMatchType::TAG_TEAM_MATCH_1T2TMG) \
	op(EELMenuMatchType::THREE_WAY_MATCH) \
	op(EELMenuMatchType::FOUR_WAY_MATCH) \
	op(EELMenuMatchType::TRIPLE_TEAM_MATCH) \
	op(EELMenuMatchType::CASINO_BATTLE_ROYAL) \
	op(EELMenuMatchType::HANDICAP_1ON2) 

enum class EELMenuMatchType : uint8;
template<> ELITE_GAME_API UEnum* StaticEnum<EELMenuMatchType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
