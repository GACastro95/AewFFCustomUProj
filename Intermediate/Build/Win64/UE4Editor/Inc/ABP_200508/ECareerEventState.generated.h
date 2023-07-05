// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ECareerEventState_generated_h
#error "ECareerEventState.generated.h already included, missing '#pragma once' in ECareerEventState.h"
#endif
#define ABP_200508_ECareerEventState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ECareerEventState_h


#define FOREACH_ENUM_ECAREEREVENTSTATE(op) \
	op(ECareerEventState::ECareerEventState_None) \
	op(ECareerEventState::ECareerEventState_WaitFadeIn) \
	op(ECareerEventState::ECareerEventState_EventStart) \
	op(ECareerEventState::ECareerEventState_EventTitle) \
	op(ECareerEventState::ECareerEventState_EventTitleWait) \
	op(ECareerEventState::ECareerEventState_EventTitleEnd) \
	op(ECareerEventState::ECareerEventState_EventContinue) \
	op(ECareerEventState::ECareerEventState_EventContinue_CheckTutorial) \
	op(ECareerEventState::ECareerEventState_EventMessageStart) \
	op(ECareerEventState::ECareerEventState_EventMessage) \
	op(ECareerEventState::ECareerEventState_EventMessageEnd) \
	op(ECareerEventState::ECareerEventState_EventChoices) \
	op(ECareerEventState::ECareerEventState_EventChoicesEnd) \
	op(ECareerEventState::ECareerEventState_EventEndCheck) \
	op(ECareerEventState::ECareerEventState_EventSkip_StartFadeOut) \
	op(ECareerEventState::ECareerEventState_EventSkip_Message) \
	op(ECareerEventState::ECareerEventState_EventSkip_StartFadeIn) \
	op(ECareerEventState::ECareerEventState_EventSkip_NextState) \
	op(ECareerEventState::ECareerEventState_EventResult) \
	op(ECareerEventState::ECareerEventState_EventResultEnd) \
	op(ECareerEventState::ECareerEventState_RewardPrepare) \
	op(ECareerEventState::ECareerEventState_RewardGet) \
	op(ECareerEventState::ECareerEventState_RewardEnd) \
	op(ECareerEventState::ECareerEventState_SnapShotStart) \
	op(ECareerEventState::ECareerEventState_SnapShotPrepare) \
	op(ECareerEventState::ECareerEventState_SnapShotTimeAdjust) \
	op(ECareerEventState::ECareerEventState_SnapShotCapture) \
	op(ECareerEventState::ECareerEventState_SnapShotCapture_Wait) \
	op(ECareerEventState::ECareerEventState_SnapShotTake) \
	op(ECareerEventState::ECareerEventState_SnapShotEnd) \
	op(ECareerEventState::ECareerEventState_SelectDatePartner) \
	op(ECareerEventState::ECareerEventState_ReportMenu) \
	op(ECareerEventState::ECareerEventState_StoryEndCheck) \
	op(ECareerEventState::ECareerEventState_CheckTutorial) \
	op(ECareerEventState::ECareerEventState_StoryEnd) 

enum class ECareerEventState : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ECareerEventState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
