// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YGS2CLIENT_EYGS2AnalyticsType_generated_h
#error "EYGS2AnalyticsType.generated.h already included, missing '#pragma once' in EYGS2AnalyticsType.h"
#endif
#define YGS2CLIENT_EYGS2AnalyticsType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yGS2Client_Source_yGS2Client_Public_EYGS2AnalyticsType_h


#define FOREACH_ENUM_EYGS2ANALYTICSTYPE(op) \
	op(EYGS2AnalyticsType::None) \
	op(EYGS2AnalyticsType::Offline) \
	op(EYGS2AnalyticsType::Createion) \
	op(EYGS2AnalyticsType::Online) \
	op(EYGS2AnalyticsType::Casual_MatchingInfo) \
	op(EYGS2AnalyticsType::Ranked_MatchingInfo) \
	op(EYGS2AnalyticsType::Private_MatchingInfo) \
	op(EYGS2AnalyticsType::SS_Mode) \
	op(EYGS2AnalyticsType::SS_MatchingInfo) 

enum class EYGS2AnalyticsType : uint8;
template<> YGS2CLIENT_API UEnum* StaticEnum<EYGS2AnalyticsType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
