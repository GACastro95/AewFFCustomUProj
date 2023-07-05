// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEOSTitleStorageEvent : uint8;
class UEOSTitleStorageBase;
struct FEOSTitleStorageProgress;
#ifdef YEOSSDK_EOSTitleStorageEventDispatcherDelegate_generated_h
#error "EOSTitleStorageEventDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSTitleStorageEventDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSTitleStorageEventDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSTitleStorageEventDispatcherDelegate_h_9_DELEGATE \
struct _Script_yEOSSDK_eventEOSTitleStorageEventDispatcher_Parms \
{ \
	EEOSTitleStorageEvent EEOSTitleStorageEvent; \
	UEOSTitleStorageBase* UEOSTitleStorageBase; \
	FEOSTitleStorageProgress EOSTitleStorageProgress; \
}; \
static inline void FEOSTitleStorageEventDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSTitleStorageEventDispatcher, EEOSTitleStorageEvent EEOSTitleStorageEvent, UEOSTitleStorageBase* UEOSTitleStorageBase, FEOSTitleStorageProgress const& EOSTitleStorageProgress) \
{ \
	_Script_yEOSSDK_eventEOSTitleStorageEventDispatcher_Parms Parms; \
	Parms.EEOSTitleStorageEvent=EEOSTitleStorageEvent; \
	Parms.UEOSTitleStorageBase=UEOSTitleStorageBase; \
	Parms.EOSTitleStorageProgress=EOSTitleStorageProgress; \
	EOSTitleStorageEventDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSTitleStorageEventDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
