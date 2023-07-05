// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSStormState_generated_h
#error "ESSStormState.generated.h already included, missing '#pragma once' in ESSStormState.h"
#endif
#define ABP_200508_ESSStormState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSStormState_h


#define FOREACH_ENUM_ESSSTORMSTATE(op) \
	op(ESSStormState::None) \
	op(ESSStormState::Announce) \
	op(ESSStormState::Shrink) \
	op(ESSStormState::Interval) 

enum class ESSStormState : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSStormState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
