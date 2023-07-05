// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSIDs;
enum class EEOSAntiCheatActionReason : uint8;
#ifdef YEOSSDK_EOSAntiCheatClientActionRequiredDispatcherDelegate_generated_h
#error "EOSAntiCheatClientActionRequiredDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSAntiCheatClientActionRequiredDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSAntiCheatClientActionRequiredDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAntiCheatClientActionRequiredDispatcherDelegate_h_8_DELEGATE \
struct _Script_yEOSSDK_eventEOSAntiCheatClientActionRequiredDispatcher_Parms \
{ \
	UEOSIDs* UserId; \
	EEOSAntiCheatActionReason ActionReason; \
	FString ActionReasonString; \
}; \
static inline void FEOSAntiCheatClientActionRequiredDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSAntiCheatClientActionRequiredDispatcher, UEOSIDs* UserId, EEOSAntiCheatActionReason ActionReason, const FString& ActionReasonString) \
{ \
	_Script_yEOSSDK_eventEOSAntiCheatClientActionRequiredDispatcher_Parms Parms; \
	Parms.UserId=UserId; \
	Parms.ActionReason=ActionReason; \
	Parms.ActionReasonString=ActionReasonString; \
	EOSAntiCheatClientActionRequiredDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAntiCheatClientActionRequiredDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
