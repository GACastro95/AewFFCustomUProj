// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_GAME_EWrestlerDataObjectFlag_generated_h
#error "EWrestlerDataObjectFlag.generated.h already included, missing '#pragma once' in EWrestlerDataObjectFlag.h"
#endif
#define ELITE_GAME_EWrestlerDataObjectFlag_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_EWrestlerDataObjectFlag_h


#define FOREACH_ENUM_EWRESTLERDATAOBJECTFLAG(op) \
	op(EWrestlerDataObjectFlag::None) \
	op(EWrestlerDataObjectFlag::Ready) \
	op(EWrestlerDataObjectFlag::Unlocked) \
	op(EWrestlerDataObjectFlag::Editable) \
	op(EWrestlerDataObjectFlag::Modify) \
	op(EWrestlerDataObjectFlag::Disabled) \
	op(EWrestlerDataObjectFlag::UsingCreateTeam) \
	op(EWrestlerDataObjectFlag::UsingCareer) \
	op(EWrestlerDataObjectFlag::SaveRequest) 

enum class EWrestlerDataObjectFlag : uint8;
template<> ELITE_GAME_API UEnum* StaticEnum<EWrestlerDataObjectFlag>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
