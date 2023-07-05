// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_GAME_EELMatchResultType_generated_h
#error "EELMatchResultType.generated.h already included, missing '#pragma once' in EELMatchResultType.h"
#endif
#define ELITE_GAME_EELMatchResultType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_EELMatchResultType_h


#define FOREACH_ENUM_EELMATCHRESULTTYPE(op) \
	op(EELMatchResultType::None) \
	op(EELMatchResultType::PinFall) \
	op(EELMatchResultType::Submit) \
	op(EELMatchResultType::TimeOut) \
	op(EELMatchResultType::DQ) \
	op(EELMatchResultType::BattleRoyale) \
	op(EELMatchResultType::KO) \
	op(EELMatchResultType::Draw) \
	op(EELMatchResultType::Ladder) 

enum class EELMatchResultType : uint8;
template<> ELITE_GAME_API UEnum* StaticEnum<EELMatchResultType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
