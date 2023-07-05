// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ResetWidgetAllDelegate_generated_h
#error "ResetWidgetAllDelegate.generated.h already included, missing '#pragma once' in ResetWidgetAllDelegate.h"
#endif
#define ABP_200508_ResetWidgetAllDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ResetWidgetAllDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventResetWidgetAll_Parms \
{ \
	int32 Num; \
}; \
static inline void FResetWidgetAll_DelegateWrapper(const FMulticastScriptDelegate& ResetWidgetAll, int32 Num) \
{ \
	_Script_ABP_200508_eventResetWidgetAll_Parms Parms; \
	Parms.Num=Num; \
	ResetWidgetAll.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ResetWidgetAllDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
