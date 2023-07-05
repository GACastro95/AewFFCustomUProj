// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEOSAntiCheatClientViolationType : uint8;
#ifdef YEOSSDK_EOSAntiCheatClientPollStatusDispatcherDelegate_generated_h
#error "EOSAntiCheatClientPollStatusDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSAntiCheatClientPollStatusDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSAntiCheatClientPollStatusDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAntiCheatClientPollStatusDispatcherDelegate_h_6_DELEGATE \
struct _Script_yEOSSDK_eventEOSAntiCheatClientPollStatusDispatcher_Parms \
{ \
	EEOSAntiCheatClientViolationType ViolationType; \
	FString StatusMessage; \
}; \
static inline void FEOSAntiCheatClientPollStatusDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSAntiCheatClientPollStatusDispatcher, EEOSAntiCheatClientViolationType ViolationType, const FString& StatusMessage) \
{ \
	_Script_yEOSSDK_eventEOSAntiCheatClientPollStatusDispatcher_Parms Parms; \
	Parms.ViolationType=ViolationType; \
	Parms.StatusMessage=StatusMessage; \
	EOSAntiCheatClientPollStatusDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAntiCheatClientPollStatusDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
