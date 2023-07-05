// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_GAME_EAttachConditionBit_generated_h
#error "EAttachConditionBit.generated.h already included, missing '#pragma once' in EAttachConditionBit.h"
#endif
#define ELITE_GAME_EAttachConditionBit_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_EAttachConditionBit_h


#define FOREACH_ENUM_EATTACHCONDITIONBIT(op) \
	op(EAttachConditionBit::LocationX) \
	op(EAttachConditionBit::LocationY) \
	op(EAttachConditionBit::LocationZ) \
	op(EAttachConditionBit::RotationX) \
	op(EAttachConditionBit::RotationY) \
	op(EAttachConditionBit::RotationZ) \
	op(EAttachConditionBit::NoEffect) \
	op(EAttachConditionBit::LocationAll) \
	op(EAttachConditionBit::RotationAll) \
	op(EAttachConditionBit::All) 

enum class EAttachConditionBit : uint8;
template<> ELITE_GAME_API UEnum* StaticEnum<EAttachConditionBit>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
