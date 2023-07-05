// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ChangedChallengeListDelegate_generated_h
#error "ChangedChallengeListDelegate.generated.h already included, missing '#pragma once' in ChangedChallengeListDelegate.h"
#endif
#define ABP_200508_ChangedChallengeListDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ChangedChallengeListDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventChangedChallengeList_Parms \
{ \
	bool ChangedDailyChallenge; \
	bool ChangedWeeklyChallenge; \
}; \
static inline void FChangedChallengeList_DelegateWrapper(const FMulticastScriptDelegate& ChangedChallengeList, bool ChangedDailyChallenge, bool ChangedWeeklyChallenge) \
{ \
	_Script_ABP_200508_eventChangedChallengeList_Parms Parms; \
	Parms.ChangedDailyChallenge=ChangedDailyChallenge ? true : false; \
	Parms.ChangedWeeklyChallenge=ChangedWeeklyChallenge ? true : false; \
	ChangedChallengeList.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ChangedChallengeListDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
