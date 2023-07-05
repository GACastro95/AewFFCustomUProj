// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSCommunityBase;
class UEOSSearchResultsBase;
#ifdef YEOSSDK_EOSCommunitySearchResultEventDispatcherDelegate_generated_h
#error "EOSCommunitySearchResultEventDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSCommunitySearchResultEventDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSCommunitySearchResultEventDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSCommunitySearchResultEventDispatcherDelegate_h_8_DELEGATE \
struct _Script_yEOSSDK_eventEOSCommunitySearchResultEventDispatcher_Parms \
{ \
	UEOSCommunityBase* EOSCommunityBase; \
	UEOSSearchResultsBase* EOSSearchResultsBase; \
}; \
static inline void FEOSCommunitySearchResultEventDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSCommunitySearchResultEventDispatcher, UEOSCommunityBase* EOSCommunityBase, UEOSSearchResultsBase* EOSSearchResultsBase) \
{ \
	_Script_yEOSSDK_eventEOSCommunitySearchResultEventDispatcher_Parms Parms; \
	Parms.EOSCommunityBase=EOSCommunityBase; \
	Parms.EOSSearchResultsBase=EOSSearchResultsBase; \
	EOSCommunitySearchResultEventDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSCommunitySearchResultEventDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
