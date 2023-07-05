// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEOSGeneralEvent : uint8;
enum class EEOSObjectType : uint8;
class UEOSCommon;
#ifdef YEOSSDK_EOSGeneralEventDispatcherDelegate_generated_h
#error "EOSGeneralEventDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSGeneralEventDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSGeneralEventDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSGeneralEventDispatcherDelegate_h_9_DELEGATE \
struct _Script_yEOSSDK_eventEOSGeneralEventDispatcher_Parms \
{ \
	EEOSGeneralEvent GeneralEvent; \
	EEOSObjectType EOSObjectType; \
	UEOSCommon* EOSCommon; \
}; \
static inline void FEOSGeneralEventDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSGeneralEventDispatcher, EEOSGeneralEvent GeneralEvent, EEOSObjectType EOSObjectType, UEOSCommon* EOSCommon) \
{ \
	_Script_yEOSSDK_eventEOSGeneralEventDispatcher_Parms Parms; \
	Parms.GeneralEvent=GeneralEvent; \
	Parms.EOSObjectType=EOSObjectType; \
	Parms.EOSCommon=EOSCommon; \
	EOSGeneralEventDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSGeneralEventDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
