// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EntranceCutsceneCameraFadeDelegate_generated_h
#error "EntranceCutsceneCameraFadeDelegate.generated.h already included, missing '#pragma once' in EntranceCutsceneCameraFadeDelegate.h"
#endif
#define ABP_200508_EntranceCutsceneCameraFadeDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_EntranceCutsceneCameraFadeDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventEntranceCutsceneCameraFade_Parms \
{ \
	bool IsFadeOut; \
	float Duration; \
}; \
static inline void FEntranceCutsceneCameraFade_DelegateWrapper(const FMulticastScriptDelegate& EntranceCutsceneCameraFade, bool IsFadeOut, float Duration) \
{ \
	_Script_ABP_200508_eventEntranceCutsceneCameraFade_Parms Parms; \
	Parms.IsFadeOut=IsFadeOut ? true : false; \
	Parms.Duration=Duration; \
	EntranceCutsceneCameraFade.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EntranceCutsceneCameraFadeDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
