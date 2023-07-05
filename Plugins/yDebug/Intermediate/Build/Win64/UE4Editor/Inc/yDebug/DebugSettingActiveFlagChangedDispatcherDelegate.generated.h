// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YDEBUG_DebugSettingActiveFlagChangedDispatcherDelegate_generated_h
#error "DebugSettingActiveFlagChangedDispatcherDelegate.generated.h already included, missing '#pragma once' in DebugSettingActiveFlagChangedDispatcherDelegate.h"
#endif
#define YDEBUG_DebugSettingActiveFlagChangedDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_DebugSettingActiveFlagChangedDispatcherDelegate_h_5_DELEGATE \
struct _Script_yDebug_eventDebugSettingActiveFlagChangedDispatcher_Parms \
{ \
	FString Key; \
	bool Active; \
}; \
static inline void FDebugSettingActiveFlagChangedDispatcher_DelegateWrapper(const FMulticastScriptDelegate& DebugSettingActiveFlagChangedDispatcher, const FString& Key, bool Active) \
{ \
	_Script_yDebug_eventDebugSettingActiveFlagChangedDispatcher_Parms Parms; \
	Parms.Key=Key; \
	Parms.Active=Active ? true : false; \
	DebugSettingActiveFlagChangedDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_DebugSettingActiveFlagChangedDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
