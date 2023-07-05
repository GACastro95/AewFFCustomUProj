// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSActionCameraID_generated_h
#error "ESSActionCameraID.generated.h already included, missing '#pragma once' in ESSActionCameraID.h"
#endif
#define ABP_200508_ESSActionCameraID_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSActionCameraID_h


#define FOREACH_ENUM_ESSACTIONCAMERAID(op) \
	op(ESSActionCameraID::None) \
	op(ESSActionCameraID::Dead) \
	op(ESSActionCameraID::GunAim) \
	op(ESSActionCameraID::ThrowWeaponAim) \
	op(ESSActionCameraID::PutTrapAim) \
	op(ESSActionCameraID::SyncMotion) \
	op(ESSActionCameraID::SyncMotionFar) 

enum class ESSActionCameraID : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSActionCameraID>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
