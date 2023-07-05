// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_GAME_EWrestlerProfileFlag_generated_h
#error "EWrestlerProfileFlag.generated.h already included, missing '#pragma once' in EWrestlerProfileFlag.h"
#endif
#define ELITE_GAME_EWrestlerProfileFlag_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_EWrestlerProfileFlag_h


#define FOREACH_ENUM_EWRESTLERPROFILEFLAG(op) \
	op(EWrestlerProfileFlag::None) \
	op(EWrestlerProfileFlag::DisplayHeight) \
	op(EWrestlerProfileFlag::DisplayWeight) \
	op(EWrestlerProfileFlag::DisplayHomeTown) \
	op(EWrestlerProfileFlag::DisplayBirthday) \
	op(EWrestlerProfileFlag::EditableStreetClothes) 

enum class EWrestlerProfileFlag : uint8;
template<> ELITE_GAME_API UEnum* StaticEnum<EWrestlerProfileFlag>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
