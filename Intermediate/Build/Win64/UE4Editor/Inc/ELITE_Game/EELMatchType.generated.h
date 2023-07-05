// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_GAME_EELMatchType_generated_h
#error "EELMatchType.generated.h already included, missing '#pragma once' in EELMatchType.h"
#endif
#define ELITE_GAME_EELMatchType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_EELMatchType_h


#define FOREACH_ENUM_EELMATCHTYPE(op) \
	op(EELMatchType::SINGLE_MATCH) \
	op(EELMatchType::TAG_TEAM_MATCH) \
	op(EELMatchType::THREE_WAY_MATCH) \
	op(EELMatchType::FOUR_WAY_MATCH) \
	op(EELMatchType::FIVE_MAN_MATCH) \
	op(EELMatchType::SIX_MAN_MATCH) \
	op(EELMatchType::CASINO_BATTLEROYAL) \
	op(EELMatchType::CASINO_BATTLEROYAL_TEAM) \
	op(EELMatchType::STADIUM_STAMPEDE) \
	op(EELMatchType::NONE) 

enum class EELMatchType : uint8;
template<> ELITE_GAME_API UEnum* StaticEnum<EELMatchType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
