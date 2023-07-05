// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSGameFlowState_generated_h
#error "ESSGameFlowState.generated.h already included, missing '#pragma once' in ESSGameFlowState.h"
#endif
#define ABP_200508_ESSGameFlowState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSGameFlowState_h


#define FOREACH_ENUM_ESSGAMEFLOWSTATE(op) \
	op(ESSGameFlowState::None) \
	op(ESSGameFlowState::BeforeInProgress) \
	op(ESSGameFlowState::Initialize) \
	op(ESSGameFlowState::Loading) \
	op(ESSGameFlowState::Setup) \
	op(ESSGameFlowState::Entrance) \
	op(ESSGameFlowState::OpenGamePlayScreen) \
	op(ESSGameFlowState::Description) \
	op(ESSGameFlowState::Ready) \
	op(ESSGameFlowState::GamePlay) \
	op(ESSGameFlowState::AfterGamePlay) \
	op(ESSGameFlowState::Exit) \
	op(ESSGameFlowState::Max) 

enum class ESSGameFlowState : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSGameFlowState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
