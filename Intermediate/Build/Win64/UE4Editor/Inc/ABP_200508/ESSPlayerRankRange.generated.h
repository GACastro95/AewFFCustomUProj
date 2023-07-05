// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSPlayerRankRange_generated_h
#error "ESSPlayerRankRange.generated.h already included, missing '#pragma once' in ESSPlayerRankRange.h"
#endif
#define ABP_200508_ESSPlayerRankRange_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSPlayerRankRange_h


#define FOREACH_ENUM_ESSPLAYERRANKRANGE(op) \
	op(ESSPlayerRankRange::None) \
	op(ESSPlayerRankRange::ROOKIE) \
	op(ESSPlayerRankRange::INDIE) \
	op(ESSPlayerRankRange::DARK) \
	op(ESSPlayerRankRange::DYNAMITE) \
	op(ESSPlayerRankRange::ELITE) 

enum class ESSPlayerRankRange : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSPlayerRankRange>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
