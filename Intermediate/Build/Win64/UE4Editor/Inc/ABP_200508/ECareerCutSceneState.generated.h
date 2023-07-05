// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ECareerCutSceneState_generated_h
#error "ECareerCutSceneState.generated.h already included, missing '#pragma once' in ECareerCutSceneState.h"
#endif
#define ABP_200508_ECareerCutSceneState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ECareerCutSceneState_h


#define FOREACH_ENUM_ECAREERCUTSCENESTATE(op) \
	op(ECareerCutSceneState::None) \
	op(ECareerCutSceneState::Start) \
	op(ECareerCutSceneState::Continue) \
	op(ECareerCutSceneState::Finish) \
	op(ECareerCutSceneState::GotoCareerHub) \
	op(ECareerCutSceneState::MessageStart) \
	op(ECareerCutSceneState::MessageEnd) \
	op(ECareerCutSceneState::End) 

enum class ECareerCutSceneState : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ECareerCutSceneState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
