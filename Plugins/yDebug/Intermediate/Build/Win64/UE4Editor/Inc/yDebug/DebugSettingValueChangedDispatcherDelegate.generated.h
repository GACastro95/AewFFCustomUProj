// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDBGSettingValueType : uint8;
#ifdef YDEBUG_DebugSettingValueChangedDispatcherDelegate_generated_h
#error "DebugSettingValueChangedDispatcherDelegate.generated.h already included, missing '#pragma once' in DebugSettingValueChangedDispatcherDelegate.h"
#endif
#define YDEBUG_DebugSettingValueChangedDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_DebugSettingValueChangedDispatcherDelegate_h_6_DELEGATE \
struct _Script_yDebug_eventDebugSettingValueChangedDispatcher_Parms \
{ \
	FString Key; \
	EDBGSettingValueType Type; \
	float Value; \
	FString Text; \
}; \
static inline void FDebugSettingValueChangedDispatcher_DelegateWrapper(const FMulticastScriptDelegate& DebugSettingValueChangedDispatcher, const FString& Key, EDBGSettingValueType Type, float Value, const FString& Text) \
{ \
	_Script_yDebug_eventDebugSettingValueChangedDispatcher_Parms Parms; \
	Parms.Key=Key; \
	Parms.Type=Type; \
	Parms.Value=Value; \
	Parms.Text=Text; \
	DebugSettingValueChangedDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_DebugSettingValueChangedDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
