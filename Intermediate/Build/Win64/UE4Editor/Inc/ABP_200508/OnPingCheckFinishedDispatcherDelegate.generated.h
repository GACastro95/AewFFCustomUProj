// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UELGameServerSelector;
#ifdef ABP_200508_OnPingCheckFinishedDispatcherDelegate_generated_h
#error "OnPingCheckFinishedDispatcherDelegate.generated.h already included, missing '#pragma once' in OnPingCheckFinishedDispatcherDelegate.h"
#endif
#define ABP_200508_OnPingCheckFinishedDispatcherDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_OnPingCheckFinishedDispatcherDelegate_h_7_DELEGATE \
struct _Script_ABP_200508_eventOnPingCheckFinishedDispatcher_Parms \
{ \
	UELGameServerSelector* OnlineParam; \
}; \
static inline void FOnPingCheckFinishedDispatcher_DelegateWrapper(const FMulticastScriptDelegate& OnPingCheckFinishedDispatcher, UELGameServerSelector* OnlineParam) \
{ \
	_Script_ABP_200508_eventOnPingCheckFinishedDispatcher_Parms Parms; \
	Parms.OnlineParam=OnlineParam; \
	OnPingCheckFinishedDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_OnPingCheckFinishedDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
