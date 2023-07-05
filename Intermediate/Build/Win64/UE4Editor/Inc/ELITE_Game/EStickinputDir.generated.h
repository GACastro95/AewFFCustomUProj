// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_GAME_EStickinputDir_generated_h
#error "EStickinputDir.generated.h already included, missing '#pragma once' in EStickinputDir.h"
#endif
#define ELITE_GAME_EStickinputDir_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_EStickinputDir_h


#define FOREACH_ENUM_ESTICKINPUTDIR(op) \
	op(EStickinputDir::None) \
	op(EStickinputDir::Up) \
	op(EStickinputDir::Down) \
	op(EStickinputDir::Left) \
	op(EStickinputDir::Right) 

enum class EStickinputDir : uint8;
template<> ELITE_GAME_API UEnum* StaticEnum<EStickinputDir>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
