// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AELCharacter_Native;
#ifdef ABP_200508_DamageHPEventDelegate_generated_h
#error "DamageHPEventDelegate.generated.h already included, missing '#pragma once' in DamageHPEventDelegate.h"
#endif
#define ABP_200508_DamageHPEventDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_DamageHPEventDelegate_h_7_DELEGATE \
struct _Script_ABP_200508_eventDamageHPEvent_Parms \
{ \
	const AELCharacter_Native* AtkPlayer; \
	float DamageHead; \
	float DamageArm; \
	float DamageBody; \
	float DamageLeg; \
}; \
static inline void FDamageHPEvent_DelegateWrapper(const FMulticastScriptDelegate& DamageHPEvent, const AELCharacter_Native* AtkPlayer, float DamageHead, float DamageArm, float DamageBody, float DamageLeg) \
{ \
	_Script_ABP_200508_eventDamageHPEvent_Parms Parms; \
	Parms.AtkPlayer=AtkPlayer; \
	Parms.DamageHead=DamageHead; \
	Parms.DamageArm=DamageArm; \
	Parms.DamageBody=DamageBody; \
	Parms.DamageLeg=DamageLeg; \
	DamageHPEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_DamageHPEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
