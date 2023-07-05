// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ELITE_CORE_EGenderConditions_generated_h
#error "EGenderConditions.generated.h already included, missing '#pragma once' in EGenderConditions.h"
#endif
#define ELITE_CORE_EGenderConditions_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Core_Public_EGenderConditions_h


#define FOREACH_ENUM_EGENDERCONDITIONS(op) \
	op(EGenderConditions::Disable) \
	op(EGenderConditions::MaleOnly) \
	op(EGenderConditions::FemaleOnly) \
	op(EGenderConditions::Any) 

enum class EGenderConditions : uint8;
template<> ELITE_CORE_API UEnum* StaticEnum<EGenderConditions>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
