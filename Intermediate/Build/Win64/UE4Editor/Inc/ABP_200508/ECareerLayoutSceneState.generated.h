// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ECareerLayoutSceneState_generated_h
#error "ECareerLayoutSceneState.generated.h already included, missing '#pragma once' in ECareerLayoutSceneState.h"
#endif
#define ABP_200508_ECareerLayoutSceneState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ECareerLayoutSceneState_h


#define FOREACH_ENUM_ECAREERLAYOUTSCENESTATE(op) \
	op(ECareerLayoutSceneState::None) \
	op(ECareerLayoutSceneState::Start) \
	op(ECareerLayoutSceneState::Playing) \
	op(ECareerLayoutSceneState::Finish) \
	op(ECareerLayoutSceneState::GotoCareerHub) \
	op(ECareerLayoutSceneState::End) 

enum class ECareerLayoutSceneState : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ECareerLayoutSceneState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
