// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FELLeaderboardUserData;
#ifdef ABP_200508_AsyncCompletedQueryLeaderboardUserScoreDelegate_generated_h
#error "AsyncCompletedQueryLeaderboardUserScoreDelegate.generated.h already included, missing '#pragma once' in AsyncCompletedQueryLeaderboardUserScoreDelegate.h"
#endif
#define ABP_200508_AsyncCompletedQueryLeaderboardUserScoreDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_AsyncCompletedQueryLeaderboardUserScoreDelegate_h_6_DELEGATE \
struct _Script_ABP_200508_eventAsyncCompletedQueryLeaderboardUserScore_Parms \
{ \
	TArray<FELLeaderboardUserData> Data; \
}; \
static inline void FAsyncCompletedQueryLeaderboardUserScore_DelegateWrapper(const FMulticastScriptDelegate& AsyncCompletedQueryLeaderboardUserScore, TArray<FELLeaderboardUserData> const& Data) \
{ \
	_Script_ABP_200508_eventAsyncCompletedQueryLeaderboardUserScore_Parms Parms; \
	Parms.Data=Data; \
	AsyncCompletedQueryLeaderboardUserScore.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_AsyncCompletedQueryLeaderboardUserScoreDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
