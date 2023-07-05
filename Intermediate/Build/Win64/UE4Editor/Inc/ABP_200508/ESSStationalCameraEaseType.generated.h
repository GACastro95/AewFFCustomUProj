// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSStationalCameraEaseType_generated_h
#error "ESSStationalCameraEaseType.generated.h already included, missing '#pragma once' in ESSStationalCameraEaseType.h"
#endif
#define ABP_200508_ESSStationalCameraEaseType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSStationalCameraEaseType_h


#define FOREACH_ENUM_ESSSTATIONALCAMERAEASETYPE(op) \
	op(ESSStationalCameraEaseType::Linear) \
	op(ESSStationalCameraEaseType::EaseIn) \
	op(ESSStationalCameraEaseType::EaseOut) \
	op(ESSStationalCameraEaseType::EaseInOut) \
	op(ESSStationalCameraEaseType::Max) 

enum class ESSStationalCameraEaseType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSStationalCameraEaseType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
