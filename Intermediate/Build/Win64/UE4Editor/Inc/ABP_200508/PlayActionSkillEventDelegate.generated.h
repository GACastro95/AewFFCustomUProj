// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_PlayActionSkillEventDelegate_generated_h
#error "PlayActionSkillEventDelegate.generated.h already included, missing '#pragma once' in PlayActionSkillEventDelegate.h"
#endif
#define ABP_200508_PlayActionSkillEventDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_PlayActionSkillEventDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventPlayActionSkillEvent_Parms \
{ \
	int32 ActionSkillNo; \
}; \
static inline void FPlayActionSkillEvent_DelegateWrapper(const FMulticastScriptDelegate& PlayActionSkillEvent, int32 ActionSkillNo) \
{ \
	_Script_ABP_200508_eventPlayActionSkillEvent_Parms Parms; \
	Parms.ActionSkillNo=ActionSkillNo; \
	PlayActionSkillEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_PlayActionSkillEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
