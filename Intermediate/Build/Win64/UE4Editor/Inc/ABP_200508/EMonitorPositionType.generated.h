// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EMonitorPositionType_generated_h
#error "EMonitorPositionType.generated.h already included, missing '#pragma once' in EMonitorPositionType.h"
#endif
#define ABP_200508_EMonitorPositionType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EMonitorPositionType_h


#define FOREACH_ENUM_EMONITORPOSITIONTYPE(op) \
	op(EMonitorPositionType::UpperLeft) \
	op(EMonitorPositionType::UpperRight) \
	op(EMonitorPositionType::LowerLeft) \
	op(EMonitorPositionType::LowerRight) \
	op(EMonitorPositionType::LowerHorizon) \
	op(EMonitorPositionType::PositionMax) 

enum class EMonitorPositionType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EMonitorPositionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
