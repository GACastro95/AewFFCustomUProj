// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSSessionP2PAFGameFlowStep_generated_h
#error "EEOSSessionP2PAFGameFlowStep.generated.h already included, missing '#pragma once' in EEOSSessionP2PAFGameFlowStep.h"
#endif
#define YEOSSDK_EEOSSessionP2PAFGameFlowStep_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSSessionP2PAFGameFlowStep_h


#define FOREACH_ENUM_EEOSSESSIONP2PAFGAMEFLOWSTEP(op) \
	op(EEOSSessionP2PAFGameFlowStep::None) \
	op(EEOSSessionP2PAFGameFlowStep::Initialized) \
	op(EEOSSessionP2PAFGameFlowStep::BeginCheckLatency) \
	op(EEOSSessionP2PAFGameFlowStep::EndCheckLatency) \
	op(EEOSSessionP2PAFGameFlowStep::BeginSyncGameClock) \
	op(EEOSSessionP2PAFGameFlowStep::EndSyncGameClock) \
	op(EEOSSessionP2PAFGameFlowStep::BeginDistributeMatchData) \
	op(EEOSSessionP2PAFGameFlowStep::EndDistributeMatchData) \
	op(EEOSSessionP2PAFGameFlowStep::BeginInterchangeMatchData) \
	op(EEOSSessionP2PAFGameFlowStep::EndInterchangeMatchData) \
	op(EEOSSessionP2PAFGameFlowStep::Busy) \
	op(EEOSSessionP2PAFGameFlowStep::Ready) \
	op(EEOSSessionP2PAFGameFlowStep::BeginStartMatch) \
	op(EEOSSessionP2PAFGameFlowStep::StartedMatch) \
	op(EEOSSessionP2PAFGameFlowStep::BeginPauseMatch) \
	op(EEOSSessionP2PAFGameFlowStep::PausedMatch) \
	op(EEOSSessionP2PAFGameFlowStep::BeginResumeMatch) \
	op(EEOSSessionP2PAFGameFlowStep::BeginFinishMatch) \
	op(EEOSSessionP2PAFGameFlowStep::FinishedMatch) \
	op(EEOSSessionP2PAFGameFlowStep::BeginSyncGameResult) \
	op(EEOSSessionP2PAFGameFlowStep::EndSyncGameResult) \
	op(EEOSSessionP2PAFGameFlowStep::BeginJoinInProgress) \
	op(EEOSSessionP2PAFGameFlowStep::EndJoinInProgress) \
	op(EEOSSessionP2PAFGameFlowStep::BeginQuitSession) \
	op(EEOSSessionP2PAFGameFlowStep::EndQuitSession) 

enum class EEOSSessionP2PAFGameFlowStep : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSSessionP2PAFGameFlowStep>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
