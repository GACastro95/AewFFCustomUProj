// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EChallengeMatchEndConditionType_generated_h
#error "EChallengeMatchEndConditionType.generated.h already included, missing '#pragma once' in EChallengeMatchEndConditionType.h"
#endif
#define ABP_200508_EChallengeMatchEndConditionType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EChallengeMatchEndConditionType_h


#define FOREACH_ENUM_ECHALLENGEMATCHENDCONDITIONTYPE(op) \
	op(EChallengeMatchEndConditionType::None) \
	op(EChallengeMatchEndConditionType::Win) \
	op(EChallengeMatchEndConditionType::PinFallFinish) \
	op(EChallengeMatchEndConditionType::SubmissionFinish) \
	op(EChallengeMatchEndConditionType::CountOutFinish) 

enum class EChallengeMatchEndConditionType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EChallengeMatchEndConditionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
