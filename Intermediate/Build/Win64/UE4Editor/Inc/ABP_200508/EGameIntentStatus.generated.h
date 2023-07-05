// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EGameIntentStatus_generated_h
#error "EGameIntentStatus.generated.h already included, missing '#pragma once' in EGameIntentStatus.h"
#endif
#define ABP_200508_EGameIntentStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EGameIntentStatus_h


#define FOREACH_ENUM_EGAMEINTENTSTATUS(op) \
	op(EGameIntentStatus::None) \
	op(EGameIntentStatus::Received) \
	op(EGameIntentStatus::Skipped) 

enum class EGameIntentStatus : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EGameIntentStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
