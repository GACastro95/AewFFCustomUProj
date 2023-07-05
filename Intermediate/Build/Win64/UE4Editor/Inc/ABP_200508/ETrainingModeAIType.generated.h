// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ETrainingModeAIType_generated_h
#error "ETrainingModeAIType.generated.h already included, missing '#pragma once' in ETrainingModeAIType.h"
#endif
#define ABP_200508_ETrainingModeAIType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ETrainingModeAIType_h


#define FOREACH_ENUM_ETRAININGMODEAITYPE(op) \
	op(ETrainingModeAIType::Stop) \
	op(ETrainingModeAIType::Normal) \
	op(ETrainingModeAIType::StrikeGuard) \
	op(ETrainingModeAIType::GrappleGuard) \
	op(ETrainingModeAIType::Agressive) 

enum class ETrainingModeAIType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ETrainingModeAIType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
