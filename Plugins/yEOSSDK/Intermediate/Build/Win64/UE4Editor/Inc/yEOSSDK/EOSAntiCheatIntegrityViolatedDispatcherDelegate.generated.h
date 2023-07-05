// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEOSAntiCheatClientViolationType : uint8;
#ifdef YEOSSDK_EOSAntiCheatIntegrityViolatedDispatcherDelegate_generated_h
#error "EOSAntiCheatIntegrityViolatedDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSAntiCheatIntegrityViolatedDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSAntiCheatIntegrityViolatedDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAntiCheatIntegrityViolatedDispatcherDelegate_h_6_DELEGATE \
struct _Script_yEOSSDK_eventEOSAntiCheatIntegrityViolatedDispatcher_Parms \
{ \
	EEOSAntiCheatClientViolationType ViolationType; \
	FString StatusMessage; \
}; \
static inline void FEOSAntiCheatIntegrityViolatedDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSAntiCheatIntegrityViolatedDispatcher, EEOSAntiCheatClientViolationType ViolationType, const FString& StatusMessage) \
{ \
	_Script_yEOSSDK_eventEOSAntiCheatIntegrityViolatedDispatcher_Parms Parms; \
	Parms.ViolationType=ViolationType; \
	Parms.StatusMessage=StatusMessage; \
	EOSAntiCheatIntegrityViolatedDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAntiCheatIntegrityViolatedDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
