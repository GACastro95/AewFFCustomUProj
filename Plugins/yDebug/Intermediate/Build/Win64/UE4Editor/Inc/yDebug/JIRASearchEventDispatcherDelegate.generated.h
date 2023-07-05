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
struct FJIRASearchResultInfo;
#ifdef YDEBUG_JIRASearchEventDispatcherDelegate_generated_h
#error "JIRASearchEventDispatcherDelegate.generated.h already included, missing '#pragma once' in JIRASearchEventDispatcherDelegate.h"
#endif
#define YDEBUG_JIRASearchEventDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_JIRASearchEventDispatcherDelegate_h_9_DELEGATE \
struct _Script_yDebug_eventJIRASearchEventDispatcher_Parms \
{ \
	EJIRAAccessorEvent JIRAAccessorEvent; \
	UYJIRAAccessor* JIRAAccessor; \
	FJIRASearchResultInfo JIRASearchResultInfo; \
}; \
static inline void FJIRASearchEventDispatcher_DelegateWrapper(const FMulticastScriptDelegate& JIRASearchEventDispatcher, EJIRAAccessorEvent JIRAAccessorEvent, UYJIRAAccessor* JIRAAccessor, FJIRASearchResultInfo const& JIRASearchResultInfo) \
{ \
	_Script_yDebug_eventJIRASearchEventDispatcher_Parms Parms; \
	Parms.JIRAAccessorEvent=JIRAAccessorEvent; \
	Parms.JIRAAccessor=JIRAAccessor; \
	Parms.JIRASearchResultInfo=JIRASearchResultInfo; \
	JIRASearchEventDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_JIRASearchEventDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
