// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ReverseDirectionEventDelegate_generated_h
#error "ReverseDirectionEventDelegate.generated.h already included, missing '#pragma once' in ReverseDirectionEventDelegate.h"
#endif
#define ABP_200508_ReverseDirectionEventDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ReverseDirectionEventDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventReverseDirectionEvent_Parms \
{ \
	bool InReverse; \
}; \
static inline void FReverseDirectionEvent_DelegateWrapper(const FMulticastScriptDelegate& ReverseDirectionEvent, bool InReverse) \
{ \
	_Script_ABP_200508_eventReverseDirectionEvent_Parms Parms; \
	Parms.InReverse=InReverse ? true : false; \
	ReverseDirectionEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ReverseDirectionEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
