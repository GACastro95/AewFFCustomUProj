// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSWheeledVehicleDamagedState_generated_h
#error "ESSWheeledVehicleDamagedState.generated.h already included, missing '#pragma once' in ESSWheeledVehicleDamagedState.h"
#endif
#define ABP_200508_ESSWheeledVehicleDamagedState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSWheeledVehicleDamagedState_h


#define FOREACH_ENUM_ESSWHEELEDVEHICLEDAMAGEDSTATE(op) \
	op(ESSWheeledVehicleDamagedState::None) \
	op(ESSWheeledVehicleDamagedState::DamagedLv1) \
	op(ESSWheeledVehicleDamagedState::DamagedMax) 

enum class ESSWheeledVehicleDamagedState : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSWheeledVehicleDamagedState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
