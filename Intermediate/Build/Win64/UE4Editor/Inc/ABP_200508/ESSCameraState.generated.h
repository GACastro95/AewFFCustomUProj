// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSCameraState_generated_h
#error "ESSCameraState.generated.h already included, missing '#pragma once' in ESSCameraState.h"
#endif
#define ABP_200508_ESSCameraState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSCameraState_h


#define FOREACH_ENUM_ESSCAMERASTATE(op) \
	op(ESSCameraState::Default) \
	op(ESSCameraState::Jumping) \
	op(ESSCameraState::JumpingDown) \
	op(ESSCameraState::Falling) \
	op(ESSCameraState::DeadStart) \
	op(ESSCameraState::Dead) \
	op(ESSCameraState::Grapple) \
	op(ESSCameraState::GrappleThrow) \
	op(ESSCameraState::VehicleDefault) \
	op(ESSCameraState::VehicleMoving) \
	op(ESSCameraState::HorseDefault) \
	op(ESSCameraState::HorseMoving) \
	op(ESSCameraState::GunAim) \
	op(ESSCameraState::ThrowAim) \
	op(ESSCameraState::PutTrapAim) 

enum class ESSCameraState : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSCameraState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
