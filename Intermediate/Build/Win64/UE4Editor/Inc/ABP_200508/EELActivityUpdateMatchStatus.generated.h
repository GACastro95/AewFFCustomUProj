// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EELActivityUpdateMatchStatus_generated_h
#error "EELActivityUpdateMatchStatus.generated.h already included, missing '#pragma once' in EELActivityUpdateMatchStatus.h"
#endif
#define ABP_200508_EELActivityUpdateMatchStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EELActivityUpdateMatchStatus_h


#define FOREACH_ENUM_EELACTIVITYUPDATEMATCHSTATUS(op) \
	op(EELActivityUpdateMatchStatus::Invalid) \
	op(EELActivityUpdateMatchStatus::InProgress) \
	op(EELActivityUpdateMatchStatus::Paused) \
	op(EELActivityUpdateMatchStatus::Aborted) 

enum class EELActivityUpdateMatchStatus : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EELActivityUpdateMatchStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
