// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSCommunityInfoBase;
#ifdef YEOSSDK_EOSCommunityClosedDispatcherDelegate_generated_h
#error "EOSCommunityClosedDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSCommunityClosedDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSCommunityClosedDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSCommunityClosedDispatcherDelegate_h_7_DELEGATE \
struct _Script_yEOSSDK_eventEOSCommunityClosedDispatcher_Parms \
{ \
	UEOSCommunityInfoBase* EOSCommunityInfoBase; \
}; \
static inline void FEOSCommunityClosedDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSCommunityClosedDispatcher, UEOSCommunityInfoBase* EOSCommunityInfoBase) \
{ \
	_Script_yEOSSDK_eventEOSCommunityClosedDispatcher_Parms Parms; \
	Parms.EOSCommunityInfoBase=EOSCommunityInfoBase; \
	EOSCommunityClosedDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSCommunityClosedDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
