// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UELLeaderboardUserStats;
#ifdef ABP_200508_AsyncCompletedQueryUserStatsDelegate_generated_h
#error "AsyncCompletedQueryUserStatsDelegate.generated.h already included, missing '#pragma once' in AsyncCompletedQueryUserStatsDelegate.h"
#endif
#define ABP_200508_AsyncCompletedQueryUserStatsDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_AsyncCompletedQueryUserStatsDelegate_h_7_DELEGATE \
struct _Script_ABP_200508_eventAsyncCompletedQueryUserStats_Parms \
{ \
	UELLeaderboardUserStats* UserStats; \
}; \
static inline void FAsyncCompletedQueryUserStats_DelegateWrapper(const FMulticastScriptDelegate& AsyncCompletedQueryUserStats, UELLeaderboardUserStats* UserStats) \
{ \
	_Script_ABP_200508_eventAsyncCompletedQueryUserStats_Parms Parms; \
	Parms.UserStats=UserStats; \
	AsyncCompletedQueryUserStats.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_AsyncCompletedQueryUserStatsDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
