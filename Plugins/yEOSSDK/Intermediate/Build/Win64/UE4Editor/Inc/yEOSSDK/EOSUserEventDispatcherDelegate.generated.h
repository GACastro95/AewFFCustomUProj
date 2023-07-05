// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEOSUserEvent : uint8;
class UEOSUserBase;
#ifdef YEOSSDK_EOSUserEventDispatcherDelegate_generated_h
#error "EOSUserEventDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSUserEventDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSUserEventDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserEventDispatcherDelegate_h_8_DELEGATE \
struct _Script_yEOSSDK_eventEOSUserEventDispatcher_Parms \
{ \
	EEOSUserEvent EOSUserEvent; \
	UEOSUserBase* EOSUserBase; \
}; \
static inline void FEOSUserEventDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSUserEventDispatcher, EEOSUserEvent EOSUserEvent, UEOSUserBase* EOSUserBase) \
{ \
	_Script_yEOSSDK_eventEOSUserEventDispatcher_Parms Parms; \
	Parms.EOSUserEvent=EOSUserEvent; \
	Parms.EOSUserBase=EOSUserBase; \
	EOSUserEventDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserEventDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
