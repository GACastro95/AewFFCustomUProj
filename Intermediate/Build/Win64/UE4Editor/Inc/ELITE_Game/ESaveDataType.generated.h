// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_GAME_ESaveDataType_generated_h
#error "ESaveDataType.generated.h already included, missing '#pragma once' in ESaveDataType.h"
#endif
#define ELITE_GAME_ESaveDataType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_ESaveDataType_h


#define FOREACH_ENUM_ESAVEDATATYPE(op) \
	op(ESaveDataType::Unknown) \
	op(ESaveDataType::GameSystem) \
	op(ESaveDataType::PlayerData) \
	op(ESaveDataType::OnlineInfo) \
	op(ESaveDataType::JukeBox) \
	op(ESaveDataType::Achievement) \
	op(ESaveDataType::MiniGame) \
	op(ESaveDataType::Jpeg) \
	op(ESaveDataType::PNG) \
	op(ESaveDataType::UGC_Room) \
	op(ESaveDataType::UGC_Wrestler) \
	op(ESaveDataType::UGC_Arena) \
	op(ESaveDataType::UGC_Team) \
	op(ESaveDataType::CareerMode) \
	op(ESaveDataType::CareerModeSnapshot) \
	op(ESaveDataType::CareerModeSystem) \
	op(ESaveDataType::SSMode) \
	op(ESaveDataType::Max) \
	op(ESaveDataType::KindStart) \
	op(ESaveDataType::KindEnd) 

enum class ESaveDataType : uint8;
template<> ELITE_GAME_API UEnum* StaticEnum<ESaveDataType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
