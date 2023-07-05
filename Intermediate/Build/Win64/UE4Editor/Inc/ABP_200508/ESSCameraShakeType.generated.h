// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSCameraShakeType_generated_h
#error "ESSCameraShakeType.generated.h already included, missing '#pragma once' in ESSCameraShakeType.h"
#endif
#define ABP_200508_ESSCameraShakeType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSCameraShakeType_h


#define FOREACH_ENUM_ESSCAMERASHAKETYPE(op) \
	op(ESSCameraShakeType::None) \
	op(ESSCameraShakeType::DamageWeak) \
	op(ESSCameraShakeType::DamageMedium) \
	op(ESSCameraShakeType::DamageStrong) \
	op(ESSCameraShakeType::GroundImpact_Weak) \
	op(ESSCameraShakeType::GroundImpact_Medium) \
	op(ESSCameraShakeType::GroundImpact_Strong) 

enum class ESSCameraShakeType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSCameraShakeType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
