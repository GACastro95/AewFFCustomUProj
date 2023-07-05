// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_GAME_ESaveDataAccessFlag_generated_h
#error "ESaveDataAccessFlag.generated.h already included, missing '#pragma once' in ESaveDataAccessFlag.h"
#endif
#define ELITE_GAME_ESaveDataAccessFlag_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_ESaveDataAccessFlag_h


#define FOREACH_ENUM_ESAVEDATAACCESSFLAG(op) \
	op(ESaveDataAccessFlag::None) \
	op(ESaveDataAccessFlag::Validation) \
	op(ESaveDataAccessFlag::Comparation) \
	op(ESaveDataAccessFlag::Type) \
	op(ESaveDataAccessFlag::ALL) 

enum class ESaveDataAccessFlag : uint8;
template<> ELITE_GAME_API UEnum* StaticEnum<ESaveDataAccessFlag>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
