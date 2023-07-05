// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSLeaderboardEvent_generated_h
#error "EEOSLeaderboardEvent.generated.h already included, missing '#pragma once' in EEOSLeaderboardEvent.h"
#endif
#define YEOSSDK_EEOSLeaderboardEvent_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSLeaderboardEvent_h


#define FOREACH_ENUM_EEOSLEADERBOARDEVENT(op) \
	op(EEOSLeaderboardEvent::QueryDefinitions) \
	op(EEOSLeaderboardEvent::QueryDefinitionsErr) \
	op(EEOSLeaderboardEvent::QueryRank) \
	op(EEOSLeaderboardEvent::QueryRankErr) \
	op(EEOSLeaderboardEvent::QueryUserScore) \
	op(EEOSLeaderboardEvent::QueryUserScoreErr) \
	op(EEOSLeaderboardEvent::QueryUserScoreNotFound) 

enum class EEOSLeaderboardEvent : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSLeaderboardEvent>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
