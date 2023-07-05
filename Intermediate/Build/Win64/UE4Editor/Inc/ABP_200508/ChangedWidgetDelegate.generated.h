// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UELOperationalWidgetBase;
enum class yEnMenuWidgetType : uint8;
#ifdef ABP_200508_ChangedWidgetDelegate_generated_h
#error "ChangedWidgetDelegate.generated.h already included, missing '#pragma once' in ChangedWidgetDelegate.h"
#endif
#define ABP_200508_ChangedWidgetDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ChangedWidgetDelegate_h_8_DELEGATE \
struct _Script_ABP_200508_eventChangedWidget_Parms \
{ \
	UELOperationalWidgetBase* MenuWidget; \
	yEnMenuWidgetType Type; \
}; \
static inline void FChangedWidget_DelegateWrapper(const FMulticastScriptDelegate& ChangedWidget, UELOperationalWidgetBase* MenuWidget, yEnMenuWidgetType Type) \
{ \
	_Script_ABP_200508_eventChangedWidget_Parms Parms; \
	Parms.MenuWidget=MenuWidget; \
	Parms.Type=Type; \
	ChangedWidget.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ChangedWidgetDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
