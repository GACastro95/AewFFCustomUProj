// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EELReplicationCondition_generated_h
#error "EELReplicationCondition.generated.h already included, missing '#pragma once' in EELReplicationCondition.h"
#endif
#define ABP_200508_EELReplicationCondition_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EELReplicationCondition_h


#define FOREACH_ENUM_EELREPLICATIONCONDITION(op) \
	op(EELReplicationCondition::None) \
	op(EELReplicationCondition::Always) \
	op(EELReplicationCondition::Changed) 

enum class EELReplicationCondition : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EELReplicationCondition>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
