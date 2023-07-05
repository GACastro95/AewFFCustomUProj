// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_GAME_EMatchRecordsMatchType_generated_h
#error "EMatchRecordsMatchType.generated.h already included, missing '#pragma once' in EMatchRecordsMatchType.h"
#endif
#define ELITE_GAME_EMatchRecordsMatchType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_EMatchRecordsMatchType_h


#define FOREACH_ENUM_EMATCHRECORDSMATCHTYPE(op) \
	op(EMatchRecordsMatchType::OneOnOne) \
	op(EMatchRecordsMatchType::TwoOnTwo) \
	op(EMatchRecordsMatchType::ThreeWay) \
	op(EMatchRecordsMatchType::FourWay) \
	op(EMatchRecordsMatchType::LightsOut) \
	op(EMatchRecordsMatchType::FallsCountAnywhere) \
	op(EMatchRecordsMatchType::CasinoBattleRoyalSolo) \
	op(EMatchRecordsMatchType::CasinoBattleRoyalTeam) \
	op(EMatchRecordsMatchType::ExplodingDeathMatch) \
	op(EMatchRecordsMatchType::Max) 

enum class EMatchRecordsMatchType : uint8;
template<> ELITE_GAME_API UEnum* StaticEnum<EMatchRecordsMatchType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
