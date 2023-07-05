// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_OnChangePauseResumeDelegate_generated_h
#error "OnChangePauseResumeDelegate.generated.h already included, missing '#pragma once' in OnChangePauseResumeDelegate.h"
#endif
#define ABP_200508_OnChangePauseResumeDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_OnChangePauseResumeDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventOnChangePauseResume_Parms \
{ \
	bool Pause; \
}; \
static inline void FOnChangePauseResume_DelegateWrapper(const FMulticastScriptDelegate& OnChangePauseResume, bool Pause) \
{ \
	_Script_ABP_200508_eventOnChangePauseResume_Parms Parms; \
	Parms.Pause=Pause ? true : false; \
	OnChangePauseResume.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_OnChangePauseResumeDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
