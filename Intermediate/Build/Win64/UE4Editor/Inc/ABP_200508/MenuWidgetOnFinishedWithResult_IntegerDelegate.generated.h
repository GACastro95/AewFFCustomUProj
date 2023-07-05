// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_MenuWidgetOnFinishedWithResult_IntegerDelegate_generated_h
#error "MenuWidgetOnFinishedWithResult_IntegerDelegate.generated.h already included, missing '#pragma once' in MenuWidgetOnFinishedWithResult_IntegerDelegate.h"
#endif
#define ABP_200508_MenuWidgetOnFinishedWithResult_IntegerDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_MenuWidgetOnFinishedWithResult_IntegerDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventMenuWidgetOnFinishedWithResult_Integer_Parms \
{ \
	int32 Result; \
}; \
static inline void FMenuWidgetOnFinishedWithResult_Integer_DelegateWrapper(const FMulticastScriptDelegate& MenuWidgetOnFinishedWithResult_Integer, int32 Result) \
{ \
	_Script_ABP_200508_eventMenuWidgetOnFinishedWithResult_Integer_Parms Parms; \
	Parms.Result=Result; \
	MenuWidgetOnFinishedWithResult_Integer.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_MenuWidgetOnFinishedWithResult_IntegerDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
