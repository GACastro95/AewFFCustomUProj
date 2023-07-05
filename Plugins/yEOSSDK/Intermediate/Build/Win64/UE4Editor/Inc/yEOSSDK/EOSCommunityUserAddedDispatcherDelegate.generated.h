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
#ifdef YEOSSDK_EOSCommunityUserAddedDispatcherDelegate_generated_h
#error "EOSCommunityUserAddedDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSCommunityUserAddedDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSCommunityUserAddedDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSCommunityUserAddedDispatcherDelegate_h_8_DELEGATE \
struct _Script_yEOSSDK_eventEOSCommunityUserAddedDispatcher_Parms \
{ \
	UEOSCommunityInfoBase* EOSCommunityInfoBase; \
	UEOSCommunityUserBase* EOSUserBase; \
}; \
static inline void FEOSCommunityUserAddedDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSCommunityUserAddedDispatcher, UEOSCommunityInfoBase* EOSCommunityInfoBase, UEOSCommunityUserBase* EOSUserBase) \
{ \
	_Script_yEOSSDK_eventEOSCommunityUserAddedDispatcher_Parms Parms; \
	Parms.EOSCommunityInfoBase=EOSCommunityInfoBase; \
	Parms.EOSUserBase=EOSUserBase; \
	EOSCommunityUserAddedDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSCommunityUserAddedDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
