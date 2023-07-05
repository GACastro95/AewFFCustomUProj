// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ChangedTouchLeaveRingDelegate_generated_h
#error "ChangedTouchLeaveRingDelegate.generated.h already included, missing '#pragma once' in ChangedTouchLeaveRingDelegate.h"
#endif
#define ABP_200508_ChangedTouchLeaveRingDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ChangedTouchLeaveRingDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventChangedTouchLeaveRing_Parms \
{ \
	bool Flag; \
}; \
static inline void FChangedTouchLeaveRing_DelegateWrapper(const FMulticastScriptDelegate& ChangedTouchLeaveRing, bool Flag) \
{ \
	_Script_ABP_200508_eventChangedTouchLeaveRing_Parms Parms; \
	Parms.Flag=Flag ? true : false; \
	ChangedTouchLeaveRing.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ChangedTouchLeaveRingDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
