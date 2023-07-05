// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FStPassiveSkillData;
#ifdef ABP_200508_PassiveSkillEffectEventDelegate_generated_h
#error "PassiveSkillEffectEventDelegate.generated.h already included, missing '#pragma once' in PassiveSkillEffectEventDelegate.h"
#endif
#define ABP_200508_PassiveSkillEffectEventDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_PassiveSkillEffectEventDelegate_h_6_DELEGATE \
struct _Script_ABP_200508_eventPassiveSkillEffectEvent_Parms \
{ \
	FStPassiveSkillData PassiveSkillData; \
}; \
static inline void FPassiveSkillEffectEvent_DelegateWrapper(const FMulticastScriptDelegate& PassiveSkillEffectEvent, FStPassiveSkillData const& PassiveSkillData) \
{ \
	_Script_ABP_200508_eventPassiveSkillEffectEvent_Parms Parms; \
	Parms.PassiveSkillData=PassiveSkillData; \
	PassiveSkillEffectEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_PassiveSkillEffectEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
