// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_GAME_EPossessedItemExtendTarget_generated_h
#error "EPossessedItemExtendTarget.generated.h already included, missing '#pragma once' in EPossessedItemExtendTarget.h"
#endif
#define ELITE_GAME_EPossessedItemExtendTarget_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_EPossessedItemExtendTarget_h


#define FOREACH_ENUM_EPOSSESSEDITEMEXTENDTARGET(op) \
	op(EPossessedItemExtendTarget::None) \
	op(EPossessedItemExtendTarget::CAW_SaveSlot) \
	op(EPossessedItemExtendTarget::CAA_SaveSlot) \
	op(EPossessedItemExtendTarget::Team_SaveSlot) \
	op(EPossessedItemExtendTarget::AttireSlot) 

enum class EPossessedItemExtendTarget : uint8;
template<> ELITE_GAME_API UEnum* StaticEnum<EPossessedItemExtendTarget>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
