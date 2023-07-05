// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ESSVehicleType_generated_h
#error "ESSVehicleType.generated.h already included, missing '#pragma once' in ESSVehicleType.h"
#endif
#define ABP_200508_ESSVehicleType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ESSVehicleType_h


#define FOREACH_ENUM_ESSVEHICLETYPE(op) \
	op(ESSVehicleType::None) \
	op(ESSVehicleType::Wheeled) \
	op(ESSVehicleType::Horse) \
	op(ESSVehicleType::Max) 

enum class ESSVehicleType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ESSVehicleType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
