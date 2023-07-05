// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSAsyncTask;
class UObject;
#ifdef YEOSSDK_EOSAsyncTaskDispatcherDelegate_generated_h
#error "EOSAsyncTaskDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSAsyncTaskDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSAsyncTaskDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAsyncTaskDispatcherDelegate_h_8_DELEGATE \
struct _Script_yEOSSDK_eventEOSAsyncTaskDispatcher_Parms \
{ \
	UEOSAsyncTask* EOSAsyncTask; \
	UObject* Object; \
}; \
static inline void FEOSAsyncTaskDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSAsyncTaskDispatcher, UEOSAsyncTask* EOSAsyncTask, UObject* Object) \
{ \
	_Script_yEOSSDK_eventEOSAsyncTaskDispatcher_Parms Parms; \
	Parms.EOSAsyncTask=EOSAsyncTask; \
	Parms.Object=Object; \
	EOSAsyncTaskDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAsyncTaskDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
