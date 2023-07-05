// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ChangedTagWaitDelegate_generated_h
#error "ChangedTagWaitDelegate.generated.h already included, missing '#pragma once' in ChangedTagWaitDelegate.h"
#endif
#define ABP_200508_ChangedTagWaitDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ChangedTagWaitDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventChangedTagWait_Parms \
{ \
	bool Flag; \
}; \
static inline void FChangedTagWait_DelegateWrapper(const FMulticastScriptDelegate& ChangedTagWait, bool Flag) \
{ \
	_Script_ABP_200508_eventChangedTagWait_Parms Parms; \
	Parms.Flag=Flag ? true : false; \
	ChangedTagWait.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ChangedTagWaitDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
