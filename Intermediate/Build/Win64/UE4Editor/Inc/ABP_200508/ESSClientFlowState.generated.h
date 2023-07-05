// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSClientFlowState_generated_h
#error "ESSClientFlowState.generated.h already included, missing '#pragma once' in ESSClientFlowState.h"
#endif
#define ABP_200508_ESSClientFlowState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSClientFlowState_h


#define FOREACH_ENUM_ESSCLIENTFLOWSTATE(op) \
	op(ESSClientFlowState::None) \
	op(ESSClientFlowState::BeforeGamePlay) \
	op(ESSClientFlowState::GamePlay) \
	op(ESSClientFlowState::Finish) \
	op(ESSClientFlowState::VictoryRoyale) \
	op(ESSClientFlowState::Result) \
	op(ESSClientFlowState::WatchGame) \
	op(ESSClientFlowState::WatchVictoryRoyale) \
	op(ESSClientFlowState::Closing) \
	op(ESSClientFlowState::Exit) 

enum class ESSClientFlowState : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSClientFlowState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
