// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_GAME_EELIKPartType_generated_h
#error "EELIKPartType.generated.h already included, missing '#pragma once' in EELIKPartType.h"
#endif
#define ELITE_GAME_EELIKPartType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_EELIKPartType_h


#define FOREACH_ENUM_EELIKPARTTYPE(op) \
	op(EELIKPartType::Empty) \
	op(EELIKPartType::ArmIK_Begin) \
	op(EELIKPartType::Hand_L) \
	op(EELIKPartType::Hand_R) \
	op(EELIKPartType::Elbow_L) \
	op(EELIKPartType::Elbow_R) \
	op(EELIKPartType::Shoulder_L) \
	op(EELIKPartType::Shoulder_R) \
	op(EELIKPartType::ArmIK_End) \
	op(EELIKPartType::LegIK_Begin) \
	op(EELIKPartType::Leg_L) \
	op(EELIKPartType::Leg_R) \
	op(EELIKPartType::Foot_L) \
	op(EELIKPartType::Foot_R) \
	op(EELIKPartType::LegIK_End) 

enum class EELIKPartType : uint8;
template<> ELITE_GAME_API UEnum* StaticEnum<EELIKPartType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
