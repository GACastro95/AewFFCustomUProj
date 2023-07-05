// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEOSStatsEvent : uint8;
class UEOSStats;
#ifdef YEOSSDK_EOSStatsEventDispatcherDelegate_generated_h
#error "EOSStatsEventDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSStatsEventDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSStatsEventDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSStatsEventDispatcherDelegate_h_8_DELEGATE \
struct _Script_yEOSSDK_eventEOSStatsEventDispatcher_Parms \
{ \
	EEOSStatsEvent EOSStatsEvent; \
	UEOSStats* EOSStats; \
	FString ProductUserID; \
}; \
static inline void FEOSStatsEventDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSStatsEventDispatcher, EEOSStatsEvent EOSStatsEvent, UEOSStats* EOSStats, const FString& ProductUserID) \
{ \
	_Script_yEOSSDK_eventEOSStatsEventDispatcher_Parms Parms; \
	Parms.EOSStatsEvent=EOSStatsEvent; \
	Parms.EOSStats=EOSStats; \
	Parms.ProductUserID=ProductUserID; \
	EOSStatsEventDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSStatsEventDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
