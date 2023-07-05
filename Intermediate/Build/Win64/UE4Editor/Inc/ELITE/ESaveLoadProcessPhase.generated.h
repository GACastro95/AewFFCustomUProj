// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_ESaveLoadProcessPhase_generated_h
#error "ESaveLoadProcessPhase.generated.h already included, missing '#pragma once' in ESaveLoadProcessPhase.h"
#endif
#define ELITE_ESaveLoadProcessPhase_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Public_ESaveLoadProcessPhase_h


#define FOREACH_ENUM_ESAVELOADPROCESSPHASE(op) \
	op(ESaveLoadProcessPhase::Idle) \
	op(ESaveLoadProcessPhase::Load) \
	op(ESaveLoadProcessPhase::Save) \
	op(ESaveLoadProcessPhase::Validate) 

enum class ESaveLoadProcessPhase : uint8;
template<> ELITE_API UEnum* StaticEnum<ESaveLoadProcessPhase>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
