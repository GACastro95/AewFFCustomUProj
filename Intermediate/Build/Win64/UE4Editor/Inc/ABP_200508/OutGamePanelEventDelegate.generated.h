// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EOutGamePanelEventType : uint8;
class UELSSPanelOutGameBase;
#ifdef ABP_200508_OutGamePanelEventDelegate_generated_h
#error "OutGamePanelEventDelegate.generated.h already included, missing '#pragma once' in OutGamePanelEventDelegate.h"
#endif
#define ABP_200508_OutGamePanelEventDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_OutGamePanelEventDelegate_h_8_DELEGATE \
struct _Script_ABP_200508_eventOutGamePanelEvent_Parms \
{ \
	EOutGamePanelEventType EventType; \
	UELSSPanelOutGameBase* callPanel; \
}; \
static inline void FOutGamePanelEvent_DelegateWrapper(const FMulticastScriptDelegate& OutGamePanelEvent, const EOutGamePanelEventType EventType, UELSSPanelOutGameBase* callPanel) \
{ \
	_Script_ABP_200508_eventOutGamePanelEvent_Parms Parms; \
	Parms.EventType=EventType; \
	Parms.callPanel=callPanel; \
	OutGamePanelEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_OutGamePanelEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
