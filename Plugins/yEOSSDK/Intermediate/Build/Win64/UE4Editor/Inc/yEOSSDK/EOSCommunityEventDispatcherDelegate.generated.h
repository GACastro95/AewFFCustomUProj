// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEOSCommunityEvent : uint8;
class UEOSCommunityBase;
class UEOSCommunityInfoBase;
class UEOSCommunityUserBase;
#ifdef YEOSSDK_EOSCommunityEventDispatcherDelegate_generated_h
#error "EOSCommunityEventDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSCommunityEventDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSCommunityEventDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSCommunityEventDispatcherDelegate_h_10_DELEGATE \
struct _Script_yEOSSDK_eventEOSCommunityEventDispatcher_Parms \
{ \
	EEOSCommunityEvent EOSCommunityEvent; \
	UEOSCommunityBase* EOSCommunityBase; \
	UEOSCommunityInfoBase* EOSCommunityInfo; \
	UEOSCommunityUserBase* EOSLobbyUser; \
}; \
static inline void FEOSCommunityEventDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSCommunityEventDispatcher, EEOSCommunityEvent EOSCommunityEvent, UEOSCommunityBase* EOSCommunityBase, UEOSCommunityInfoBase* EOSCommunityInfo, UEOSCommunityUserBase* EOSLobbyUser) \
{ \
	_Script_yEOSSDK_eventEOSCommunityEventDispatcher_Parms Parms; \
	Parms.EOSCommunityEvent=EOSCommunityEvent; \
	Parms.EOSCommunityBase=EOSCommunityBase; \
	Parms.EOSCommunityInfo=EOSCommunityInfo; \
	Parms.EOSLobbyUser=EOSLobbyUser; \
	EOSCommunityEventDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSCommunityEventDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
