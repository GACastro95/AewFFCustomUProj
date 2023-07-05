// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class yEnMenuWidgetType : uint8;
#ifdef ABP_200508_ChangedWidgetTypeDelegate_generated_h
#error "ChangedWidgetTypeDelegate.generated.h already included, missing '#pragma once' in ChangedWidgetTypeDelegate.h"
#endif
#define ABP_200508_ChangedWidgetTypeDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ChangedWidgetTypeDelegate_h_6_DELEGATE \
struct _Script_ABP_200508_eventChangedWidgetType_Parms \
{ \
	yEnMenuWidgetType Type; \
}; \
static inline void FChangedWidgetType_DelegateWrapper(const FMulticastScriptDelegate& ChangedWidgetType, yEnMenuWidgetType Type) \
{ \
	_Script_ABP_200508_eventChangedWidgetType_Parms Parms; \
	Parms.Type=Type; \
	ChangedWidgetType.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ChangedWidgetTypeDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
