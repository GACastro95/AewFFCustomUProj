// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_GAME_EBodyWeightType_generated_h
#error "EBodyWeightType.generated.h already included, missing '#pragma once' in EBodyWeightType.h"
#endif
#define ELITE_GAME_EBodyWeightType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Game_Public_EBodyWeightType_h


#define FOREACH_ENUM_EBODYWEIGHTTYPE(op) \
	op(EBodyWeightType::Normal) \
	op(EBodyWeightType::Light) \
	op(EBodyWeightType::Heavy) 

enum class EBodyWeightType : uint8;
template<> ELITE_GAME_API UEnum* StaticEnum<EBodyWeightType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
