// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EELStatsDataType_generated_h
#error "EELStatsDataType.generated.h already included, missing '#pragma once' in EELStatsDataType.h"
#endif
#define ABP_200508_EELStatsDataType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EELStatsDataType_h


#define FOREACH_ENUM_EELSTATSDATATYPE(op) \
	op(EELStatsDataType::Unknown) \
	op(EELStatsDataType::Sum) \
	op(EELStatsDataType::Latest) \
	op(EELStatsDataType::Min) \
	op(EELStatsDataType::Max) 

enum class EELStatsDataType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EELStatsDataType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
