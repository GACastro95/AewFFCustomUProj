// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ECareerEventDebugMode_generated_h
#error "ECareerEventDebugMode.generated.h already included, missing '#pragma once' in ECareerEventDebugMode.h"
#endif
#define ABP_200508_ECareerEventDebugMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ECareerEventDebugMode_h


#define FOREACH_ENUM_ECAREEREVENTDEBUGMODE(op) \
	op(ECareerEventDebugMode::None) \
	op(ECareerEventDebugMode::CameraMove) \
	op(ECareerEventDebugMode::LocationMove) \
	op(ECareerEventDebugMode::Yaw) \
	op(ECareerEventDebugMode::Animation) \
	op(ECareerEventDebugMode::Facial) \
	op(ECareerEventDebugMode::Talk) \
	op(ECareerEventDebugMode::Prop) \
	op(ECareerEventDebugMode::PropAnimation) \
	op(ECareerEventDebugMode::Max) 

enum class ECareerEventDebugMode : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ECareerEventDebugMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
