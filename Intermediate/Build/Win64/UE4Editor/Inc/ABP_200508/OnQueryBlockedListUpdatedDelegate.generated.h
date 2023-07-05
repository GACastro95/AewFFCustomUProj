// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_OnQueryBlockedListUpdatedDelegate_generated_h
#error "OnQueryBlockedListUpdatedDelegate.generated.h already included, missing '#pragma once' in OnQueryBlockedListUpdatedDelegate.h"
#endif
#define ABP_200508_OnQueryBlockedListUpdatedDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_OnQueryBlockedListUpdatedDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventOnQueryBlockedListUpdated_Parms \
{ \
	bool bWasSuccessful; \
}; \
static inline void FOnQueryBlockedListUpdated_DelegateWrapper(const FScriptDelegate& OnQueryBlockedListUpdated, bool bWasSuccessful) \
{ \
	_Script_ABP_200508_eventOnQueryBlockedListUpdated_Parms Parms; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnQueryBlockedListUpdated.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_OnQueryBlockedListUpdatedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
