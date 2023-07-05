// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ECareerEventSceneSwitchState_generated_h
#error "ECareerEventSceneSwitchState.generated.h already included, missing '#pragma once' in ECareerEventSceneSwitchState.h"
#endif
#define ABP_200508_ECareerEventSceneSwitchState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ECareerEventSceneSwitchState_h


#define FOREACH_ENUM_ECAREEREVENTSCENESWITCHSTATE(op) \
	op(ECareerEventSceneSwitchState::None) \
	op(ECareerEventSceneSwitchState::RequestScene) \
	op(ECareerEventSceneSwitchState::PreperScene) \
	op(ECareerEventSceneSwitchState::ChangeScene) \
	op(ECareerEventSceneSwitchState::PreInitialScene) \
	op(ECareerEventSceneSwitchState::InitialScene) \
	op(ECareerEventSceneSwitchState::Finish) 

enum class ECareerEventSceneSwitchState : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ECareerEventSceneSwitchState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
