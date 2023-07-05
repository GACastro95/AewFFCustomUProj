// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class FYDebugMenuNotifyType : uint8;
class UYDebugMenuUIBase;
struct FYDebugMenuSimpleUIParam;
#ifdef YDEBUG_DebugMenuNotifyDispatcherDelegate_generated_h
#error "DebugMenuNotifyDispatcherDelegate.generated.h already included, missing '#pragma once' in DebugMenuNotifyDispatcherDelegate.h"
#endif
#define YDEBUG_DebugMenuNotifyDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_DebugMenuNotifyDispatcherDelegate_h_9_DELEGATE \
struct _Script_yDebug_eventDebugMenuNotifyDispatcher_Parms \
{ \
	FYDebugMenuNotifyType DebugMenuNotifyType; \
	UYDebugMenuUIBase* DebugMenuUIBase; \
	FString RegistKey; \
	FYDebugMenuSimpleUIParam YDebugMenuSimpleUIParam; \
}; \
static inline void FDebugMenuNotifyDispatcher_DelegateWrapper(const FMulticastScriptDelegate& DebugMenuNotifyDispatcher, FYDebugMenuNotifyType DebugMenuNotifyType, UYDebugMenuUIBase* DebugMenuUIBase, const FString& RegistKey, FYDebugMenuSimpleUIParam const& YDebugMenuSimpleUIParam) \
{ \
	_Script_yDebug_eventDebugMenuNotifyDispatcher_Parms Parms; \
	Parms.DebugMenuNotifyType=DebugMenuNotifyType; \
	Parms.DebugMenuUIBase=DebugMenuUIBase; \
	Parms.RegistKey=RegistKey; \
	Parms.YDebugMenuSimpleUIParam=YDebugMenuSimpleUIParam; \
	DebugMenuNotifyDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yDebug_Source_yDebug_Public_DebugMenuNotifyDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
