// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSCommunityInfoBase;
class UEOSCommunityUserBase;
#ifdef YEOSSDK_EOSCommunityUserRemovedDispatcherDelegate_generated_h
#error "EOSCommunityUserRemovedDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSCommunityUserRemovedDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSCommunityUserRemovedDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSCommunityUserRemovedDispatcherDelegate_h_8_DELEGATE \
struct _Script_yEOSSDK_eventEOSCommunityUserRemovedDispatcher_Parms \
{ \
	UEOSCommunityInfoBase* EOSCommunityInfoBase; \
	UEOSCommunityUserBase* EOSUserBase; \
}; \
static inline void FEOSCommunityUserRemovedDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSCommunityUserRemovedDispatcher, UEOSCommunityInfoBase* EOSCommunityInfoBase, UEOSCommunityUserBase* EOSUserBase) \
{ \
	_Script_yEOSSDK_eventEOSCommunityUserRemovedDispatcher_Parms Parms; \
	Parms.EOSCommunityInfoBase=EOSCommunityInfoBase; \
	Parms.EOSUserBase=EOSUserBase; \
	EOSCommunityUserRemovedDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSCommunityUserRemovedDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS