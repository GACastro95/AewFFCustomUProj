// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FELLeaderboardUserData;
class UELLeaderboardUserStats;
#ifdef ABP_200508_AsyncCompletedQueryLeaderboardUserStatsListDelegate_generated_h
#error "AsyncCompletedQueryLeaderboardUserStatsListDelegate.generated.h already included, missing '#pragma once' in AsyncCompletedQueryLeaderboardUserStatsListDelegate.h"
#endif
#define ABP_200508_AsyncCompletedQueryLeaderboardUserStatsListDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_AsyncCompletedQueryLeaderboardUserStatsListDelegate_h_8_DELEGATE \
struct _Script_ABP_200508_eventAsyncCompletedQueryLeaderboardUserStatsList_Parms \
{ \
	TArray<FELLeaderboardUserData> UserData; \
	TArray<UELLeaderboardUserStats*> UserStats; \
}; \
static inline void FAsyncCompletedQueryLeaderboardUserStatsList_DelegateWrapper(const FMulticastScriptDelegate& AsyncCompletedQueryLeaderboardUserStatsList, TArray<FELLeaderboardUserData> const& UserData, TArray<UELLeaderboardUserStats*> const& UserStats) \
{ \
	_Script_ABP_200508_eventAsyncCompletedQueryLeaderboardUserStatsList_Parms Parms; \
	Parms.UserData=UserData; \
	Parms.UserStats=UserStats; \
	AsyncCompletedQueryLeaderboardUserStatsList.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_AsyncCompletedQueryLeaderboardUserStatsListDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
