// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_CheckedValidSeasonDelegateDelegate_generated_h
#error "CheckedValidSeasonDelegateDelegate.generated.h already included, missing '#pragma once' in CheckedValidSeasonDelegateDelegate.h"
#endif
#define ABP_200508_CheckedValidSeasonDelegateDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_CheckedValidSeasonDelegateDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventCheckedValidSeasonDelegate_Parms \
{ \
	bool UpdatedSeason; \
}; \
static inline void FCheckedValidSeasonDelegate_DelegateWrapper(const FScriptDelegate& CheckedValidSeasonDelegate, bool UpdatedSeason) \
{ \
	_Script_ABP_200508_eventCheckedValidSeasonDelegate_Parms Parms; \
	Parms.UpdatedSeason=UpdatedSeason ? true : false; \
	CheckedValidSeasonDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_CheckedValidSeasonDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
