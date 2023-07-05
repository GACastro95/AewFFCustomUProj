// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_GAME_EELMatchMode_generated_h
#error "EELMatchMode.generated.h already included, missing '#pragma once' in EELMatchMode.h"
#endif
#define ELITE_GAME_EELMatchMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_EELMatchMode_h


#define FOREACH_ENUM_EELMATCHMODE(op) \
	op(EELMatchMode::EXHIBITION_MATCH) \
	op(EELMatchMode::ONLINE_MATCH) \
	op(EELMatchMode::RANKED_MATCH) \
	op(EELMatchMode::CASUAL_MATCH) \
	op(EELMatchMode::PARTY_MATCH) \
	op(EELMatchMode::STADIUM_STAMPEDE_MATCH) \
	op(EELMatchMode::MATCH_MODE_MAX) 

enum class EELMatchMode : uint8;
template<> ELITE_GAME_API UEnum* StaticEnum<EELMatchMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
