// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_GAME_EPossessedItemConsumeTarget_generated_h
#error "EPossessedItemConsumeTarget.generated.h already included, missing '#pragma once' in EPossessedItemConsumeTarget.h"
#endif
#define ELITE_GAME_EPossessedItemConsumeTarget_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_EPossessedItemConsumeTarget_h


#define FOREACH_ENUM_EPOSSESSEDITEMCONSUMETARGET(op) \
	op(EPossessedItemConsumeTarget::None) \
	op(EPossessedItemConsumeTarget::CrateTicket) \
	op(EPossessedItemConsumeTarget::BattlePassPointBoosterTicket) \
	op(EPossessedItemConsumeTarget::AEW_Cash) \
	op(EPossessedItemConsumeTarget::AEW_Gold) 

enum class EPossessedItemConsumeTarget : uint8;
template<> ELITE_GAME_API UEnum* StaticEnum<EPossessedItemConsumeTarget>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
