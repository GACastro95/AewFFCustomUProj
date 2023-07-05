// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_EnVisualizeMode_generated_h
#error "EnVisualizeMode.generated.h already included, missing '#pragma once' in EnVisualizeMode.h"
#endif
#define ELITE_EnVisualizeMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Public_EnVisualizeMode_h


#define FOREACH_ENUM_ENVISUALIZEMODE(op) \
	op(EnVisualizeMode::All) \
	op(EnVisualizeMode::Color) \
	op(EnVisualizeMode::Normal) \
	op(EnVisualizeMode::AO) \
	op(EnVisualizeMode::Roughness) 

enum class EnVisualizeMode : uint8;
template<> ELITE_API UEnum* StaticEnum<EnVisualizeMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
