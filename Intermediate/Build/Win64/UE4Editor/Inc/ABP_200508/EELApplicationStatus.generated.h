// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EELApplicationStatus_generated_h
#error "EELApplicationStatus.generated.h already included, missing '#pragma once' in EELApplicationStatus.h"
#endif
#define ABP_200508_EELApplicationStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EELApplicationStatus_h


#define FOREACH_ENUM_EELAPPLICATIONSTATUS(op) \
	op(EELApplicationStatus::Unknown) \
	op(EELApplicationStatus::Suspend) \
	op(EELApplicationStatus::Resume) \
	op(EELApplicationStatus::Constrained) \
	op(EELApplicationStatus::Unconstrained) \
	op(EELApplicationStatus::Running) 

enum class EELApplicationStatus : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EELApplicationStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
