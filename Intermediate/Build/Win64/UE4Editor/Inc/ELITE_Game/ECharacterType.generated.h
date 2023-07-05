// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_GAME_ECharacterType_generated_h
#error "ECharacterType.generated.h already included, missing '#pragma once' in ECharacterType.h"
#endif
#define ELITE_GAME_ECharacterType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_ECharacterType_h


#define FOREACH_ENUM_ECHARACTERTYPE(op) \
	op(ECharacterType::Invalid) \
	op(ECharacterType::Roster) \
	op(ECharacterType::EditWrestler) \
	op(ECharacterType::Npc) 

enum class ECharacterType : uint8;
template<> ELITE_GAME_API UEnum* StaticEnum<ECharacterType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
