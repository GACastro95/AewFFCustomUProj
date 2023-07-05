// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ECareerEventCameraType_generated_h
#error "ECareerEventCameraType.generated.h already included, missing '#pragma once' in ECareerEventCameraType.h"
#endif
#define ABP_200508_ECareerEventCameraType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ECareerEventCameraType_h


#define FOREACH_ENUM_ECAREEREVENTCAMERATYPE(op) \
	op(ECareerEventCameraType::WHOLE) \
	op(ECareerEventCameraType::INDIVIDUAL) \
	op(ECareerEventCameraType::INDIVIDUAL_SNAPSHOT) \
	op(ECareerEventCameraType::INDIVIDUAL_HEAD) \
	op(ECareerEventCameraType::INDIVIDUAL_NECK) \
	op(ECareerEventCameraType::INDIVIDUAL_CHEST) \
	op(ECareerEventCameraType::INDIVIDUAL_SPINE) 

enum class ECareerEventCameraType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ECareerEventCameraType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
