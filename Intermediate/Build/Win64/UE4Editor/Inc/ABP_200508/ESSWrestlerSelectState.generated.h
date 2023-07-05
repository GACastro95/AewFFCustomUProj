// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSWrestlerSelectState_generated_h
#error "ESSWrestlerSelectState.generated.h already included, missing '#pragma once' in ESSWrestlerSelectState.h"
#endif
#define ABP_200508_ESSWrestlerSelectState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSWrestlerSelectState_h


#define FOREACH_ENUM_ESSWRESTLERSELECTSTATE(op) \
	op(ESSWrestlerSelectState::ESSWrestlerSelectState_SelectWrestler) \
	op(ESSWrestlerSelectState::ESSWrestlerSelectState_SelectWrestlerType) \
	op(ESSWrestlerSelectState::ESSWrestlerSelectState_SelectWrestlerTypeView) \
	op(ESSWrestlerSelectState::ESSWrestlerSelectState_SelectWrestlerPreset) \
	op(ESSWrestlerSelectState::ESSWrestlerSelectState_DecisionWait) \
	op(ESSWrestlerSelectState::ESSWrestlerSelectState_Cancel) \
	op(ESSWrestlerSelectState::ESSWrestlerSelectState_End) 

enum class ESSWrestlerSelectState : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSWrestlerSelectState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
