// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEOSUserContentsEvent : uint8;
class UEOSUserContentsBase;
struct FEOSUserContentProgress;
#ifdef YEOSSDK_EOSUserContentsEventDispatcherDelegate_generated_h
#error "EOSUserContentsEventDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSUserContentsEventDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSUserContentsEventDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserContentsEventDispatcherDelegate_h_9_DELEGATE \
struct _Script_yEOSSDK_eventEOSUserContentsEventDispatcher_Parms \
{ \
	EEOSUserContentsEvent EOSUserContentsEvent; \
	UEOSUserContentsBase* EOSUserContentsBase; \
	FEOSUserContentProgress EOSUserContentProgress; \
}; \
static inline void FEOSUserContentsEventDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSUserContentsEventDispatcher, EEOSUserContentsEvent EOSUserContentsEvent, UEOSUserContentsBase* EOSUserContentsBase, FEOSUserContentProgress const& EOSUserContentProgress) \
{ \
	_Script_yEOSSDK_eventEOSUserContentsEventDispatcher_Parms Parms; \
	Parms.EOSUserContentsEvent=EOSUserContentsEvent; \
	Parms.EOSUserContentsBase=EOSUserContentsBase; \
	Parms.EOSUserContentProgress=EOSUserContentProgress; \
	EOSUserContentsEventDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserContentsEventDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
