// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSStationalCameraBaseTransformMode_generated_h
#error "ESSStationalCameraBaseTransformMode.generated.h already included, missing '#pragma once' in ESSStationalCameraBaseTransformMode.h"
#endif
#define ABP_200508_ESSStationalCameraBaseTransformMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSStationalCameraBaseTransformMode_h


#define FOREACH_ENUM_ESSSTATIONALCAMERABASETRANSFORMMODE(op) \
	op(ESSStationalCameraBaseTransformMode::Continue) \
	op(ESSStationalCameraBaseTransformMode::Owner) \
	op(ESSStationalCameraBaseTransformMode::OwnerInitial) \
	op(ESSStationalCameraBaseTransformMode::Receiver) \
	op(ESSStationalCameraBaseTransformMode::ReceiverInitial) 

enum class ESSStationalCameraBaseTransformMode : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSStationalCameraBaseTransformMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
