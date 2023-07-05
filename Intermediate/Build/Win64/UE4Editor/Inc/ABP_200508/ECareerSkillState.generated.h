// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ECareerSkillState_generated_h
#error "ECareerSkillState.generated.h already included, missing '#pragma once' in ECareerSkillState.h"
#endif
#define ABP_200508_ECareerSkillState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ECareerSkillState_h


#define FOREACH_ENUM_ECAREERSKILLSTATE(op) \
	op(ECareerSkillState::Lock) \
	op(ECareerSkillState::Unlock) \
	op(ECareerSkillState::Acquired) \
	op(ECareerSkillState::Error) 

enum class ECareerSkillState : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ECareerSkillState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
