// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EELWrestlerStat_generated_h
#error "EELWrestlerStat.generated.h already included, missing '#pragma once' in EELWrestlerStat.h"
#endif
#define ABP_200508_EELWrestlerStat_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EELWrestlerStat_h


#define FOREACH_ENUM_EELWRESTLERSTAT(op) \
	op(EELWrestlerStat::Win) \
	op(EELWrestlerStat::Lose) \
	op(EELWrestlerStat::Draw) \
	op(EELWrestlerStat::Match) \
	op(EELWrestlerStat::Win_Streak) \
	op(EELWrestlerStat::CasinoBattleRoyale_Win) \
	op(EELWrestlerStat::CasinoBattleRoyale_Defeat) 

enum class EELWrestlerStat : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EELWrestlerStat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
