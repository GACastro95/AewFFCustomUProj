// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EYGS2DebugMenuClientStep_generated_h
#error "EYGS2DebugMenuClientStep.generated.h already included, missing '#pragma once' in EYGS2DebugMenuClientStep.h"
#endif
#define ABP_200508_EYGS2DebugMenuClientStep_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EYGS2DebugMenuClientStep_h


#define FOREACH_ENUM_EYGS2DEBUGMENUCLIENTSTEP(op) \
	op(EYGS2DebugMenuClientStep::None) \
	op(EYGS2DebugMenuClientStep::BeginWait) \
	op(EYGS2DebugMenuClientStep::Requested) \
	op(EYGS2DebugMenuClientStep::Respond) \
	op(EYGS2DebugMenuClientStep::Error) \
	op(EYGS2DebugMenuClientStep::Max) 

enum class EYGS2DebugMenuClientStep : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EYGS2DebugMenuClientStep>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
