// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_GAME_EELOnlineModeType_generated_h
#error "EELOnlineModeType.generated.h already included, missing '#pragma once' in EELOnlineModeType.h"
#endif
#define ELITE_GAME_EELOnlineModeType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_EELOnlineModeType_h


#define FOREACH_ENUM_EELONLINEMODETYPE(op) \
	op(EELOnlineModeType::OnlineModeType_RANKED) \
	op(EELOnlineModeType::OnlineModeType_PARTY) \
	op(EELOnlineModeType::OnlineModeType_CASUAL) \
	op(EELOnlineModeType::OnlineModeType_MINIGAME) \
	op(EELOnlineModeType::None) 

enum class EELOnlineModeType : uint8;
template<> ELITE_GAME_API UEnum* StaticEnum<EELOnlineModeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
