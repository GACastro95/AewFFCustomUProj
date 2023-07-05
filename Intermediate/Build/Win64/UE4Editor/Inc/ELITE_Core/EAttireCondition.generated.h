// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_CORE_EAttireCondition_generated_h
#error "EAttireCondition.generated.h already included, missing '#pragma once' in EAttireCondition.h"
#endif
#define ELITE_CORE_EAttireCondition_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Core_Public_EAttireCondition_h


#define FOREACH_ENUM_EATTIRECONDITION(op) \
	op(EAttireCondition::Disable) \
	op(EAttireCondition::ForRing) \
	op(EAttireCondition::ForEntrance) \
	op(EAttireCondition::ForPlain) \
	op(EAttireCondition::ForMatch) \
	op(EAttireCondition::Any) 

enum class EAttireCondition : uint8;
template<> ELITE_CORE_API UEnum* StaticEnum<EAttireCondition>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
