// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EJIRAAccessorEvent : uint8;
class UYJIRAAccessor;
#ifdef YDEBUG_JIRAAccessorEventDispatcherDelegate_generated_h
#error "JIRAAccessorEventDispatcherDelegate.generated.h already included, missing '#pragma once' in JIRAAccessorEventDispatcherDelegate.h"
#endif
#define YDEBUG_JIRAAccessorEventDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_JIRAAccessorEventDispatcherDelegate_h_8_DELEGATE \
struct _Script_yDebug_eventJIRAAccessorEventDispatcher_Parms \
{ \
	EJIRAAccessorEvent JIRAAccessorEvent; \
	UYJIRAAccessor* JIRAAccessor; \
	bool Result; \
}; \
static inline void FJIRAAccessorEventDispatcher_DelegateWrapper(const FMulticastScriptDelegate& JIRAAccessorEventDispatcher, EJIRAAccessorEvent JIRAAccessorEvent, UYJIRAAccessor* JIRAAccessor, bool Result) \
{ \
	_Script_yDebug_eventJIRAAccessorEventDispatcher_Parms Parms; \
	Parms.JIRAAccessorEvent=JIRAAccessorEvent; \
	Parms.JIRAAccessor=JIRAAccessor; \
	Parms.Result=Result ? true : false; \
	JIRAAccessorEventDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_JIRAAccessorEventDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
