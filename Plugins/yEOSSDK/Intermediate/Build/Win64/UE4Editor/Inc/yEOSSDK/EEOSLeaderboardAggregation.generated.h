// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSLeaderboardAggregation_generated_h
#error "EEOSLeaderboardAggregation.generated.h already included, missing '#pragma once' in EEOSLeaderboardAggregation.h"
#endif
#define YEOSSDK_EEOSLeaderboardAggregation_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSLeaderboardAggregation_h


#define FOREACH_ENUM_EEOSLEADERBOARDAGGREGATION(op) \
	op(EEOSLeaderboardAggregation::Min) \
	op(EEOSLeaderboardAggregation::Max) \
	op(EEOSLeaderboardAggregation::Sum) \
	op(EEOSLeaderboardAggregation::Latest) 

enum class EEOSLeaderboardAggregation : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSLeaderboardAggregation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
