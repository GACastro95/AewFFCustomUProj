// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_LadderMatchMiniGameProgressEventDelegate_generated_h
#error "LadderMatchMiniGameProgressEventDelegate.generated.h already included, missing '#pragma once' in LadderMatchMiniGameProgressEventDelegate.h"
#endif
#define ABP_200508_LadderMatchMiniGameProgressEventDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_LadderMatchMiniGameProgressEventDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventLadderMatchMiniGameProgressEvent_Parms \
{ \
	int32 Step; \
	bool Finish; \
}; \
static inline void FLadderMatchMiniGameProgressEvent_DelegateWrapper(const FMulticastScriptDelegate& LadderMatchMiniGameProgressEvent, int32 Step, bool Finish) \
{ \
	_Script_ABP_200508_eventLadderMatchMiniGameProgressEvent_Parms Parms; \
	Parms.Step=Step; \
	Parms.Finish=Finish ? true : false; \
	LadderMatchMiniGameProgressEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_LadderMatchMiniGameProgressEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
