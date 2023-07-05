// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ECareerEventCutSceneState_generated_h
#error "ECareerEventCutSceneState.generated.h already included, missing '#pragma once' in ECareerEventCutSceneState.h"
#endif
#define ABP_200508_ECareerEventCutSceneState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ECareerEventCutSceneState_h


#define FOREACH_ENUM_ECAREEREVENTCUTSCENESTATE(op) \
	op(ECareerEventCutSceneState::CutSceneSeeToEnd) \
	op(ECareerEventCutSceneState::MovieSeeToEnd) \
	op(ECareerEventCutSceneState::CutSceneSkip) \
	op(ECareerEventCutSceneState::MovieSkip) 

enum class ECareerEventCutSceneState : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ECareerEventCutSceneState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
