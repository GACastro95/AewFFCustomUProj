// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ETrainingReversalKind_generated_h
#error "ETrainingReversalKind.generated.h already included, missing '#pragma once' in ETrainingReversalKind.h"
#endif
#define ABP_200508_ETrainingReversalKind_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ETrainingReversalKind_h


#define FOREACH_ENUM_ETRAININGREVERSALKIND(op) \
	op(ETrainingReversalKind::HitStrike) \
	op(ETrainingReversalKind::HitGrapple) \
	op(ETrainingReversalKind::ReversalStrike) \
	op(ETrainingReversalKind::ReversalGrapple) \
	op(ETrainingReversalKind::GuardStrike) \
	op(ETrainingReversalKind::GuardGrapple) \
	op(ETrainingReversalKind::FailedRandomChoice) 

enum class ETrainingReversalKind : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ETrainingReversalKind>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
