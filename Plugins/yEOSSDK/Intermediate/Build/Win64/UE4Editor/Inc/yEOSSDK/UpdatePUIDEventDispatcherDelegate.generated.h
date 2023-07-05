// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSUserBase;
#ifdef YEOSSDK_UpdatePUIDEventDispatcherDelegate_generated_h
#error "UpdatePUIDEventDispatcherDelegate.generated.h already included, missing '#pragma once' in UpdatePUIDEventDispatcherDelegate.h"
#endif
#define YEOSSDK_UpdatePUIDEventDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_UpdatePUIDEventDispatcherDelegate_h_7_DELEGATE \
struct _Script_yEOSSDK_eventUpdatePUIDEventDispatcher_Parms \
{ \
	UEOSUserBase* _FriendUser; \
}; \
static inline void FUpdatePUIDEventDispatcher_DelegateWrapper(const FMulticastScriptDelegate& UpdatePUIDEventDispatcher, UEOSUserBase* _FriendUser) \
{ \
	_Script_yEOSSDK_eventUpdatePUIDEventDispatcher_Parms Parms; \
	Parms._FriendUser=_FriendUser; \
	UpdatePUIDEventDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_UpdatePUIDEventDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
