// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EOSReportsSendPlayerBehaviorReportDispatcherDelegate_generated_h
#error "EOSReportsSendPlayerBehaviorReportDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSReportsSendPlayerBehaviorReportDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSReportsSendPlayerBehaviorReportDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSReportsSendPlayerBehaviorReportDispatcherDelegate_h_5_DELEGATE \
struct _Script_yEOSSDK_eventEOSReportsSendPlayerBehaviorReportDispatcher_Parms \
{ \
	bool bSuccess; \
}; \
static inline void FEOSReportsSendPlayerBehaviorReportDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSReportsSendPlayerBehaviorReportDispatcher, bool bSuccess) \
{ \
	_Script_yEOSSDK_eventEOSReportsSendPlayerBehaviorReportDispatcher_Parms Parms; \
	Parms.bSuccess=bSuccess ? true : false; \
	EOSReportsSendPlayerBehaviorReportDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSReportsSendPlayerBehaviorReportDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
