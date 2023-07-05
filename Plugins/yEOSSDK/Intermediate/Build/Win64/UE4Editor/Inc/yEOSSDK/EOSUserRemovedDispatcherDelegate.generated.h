// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSUserManager;
class UEOSUserBase;
#ifdef YEOSSDK_EOSUserRemovedDispatcherDelegate_generated_h
#error "EOSUserRemovedDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSUserRemovedDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSUserRemovedDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserRemovedDispatcherDelegate_h_8_DELEGATE \
struct _Script_yEOSSDK_eventEOSUserRemovedDispatcher_Parms \
{ \
	UEOSUserManager* UserManager; \
	UEOSUserBase* EOSUserBase; \
	bool ProductUser; \
}; \
static inline void FEOSUserRemovedDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSUserRemovedDispatcher, UEOSUserManager* UserManager, UEOSUserBase* EOSUserBase, bool ProductUser) \
{ \
	_Script_yEOSSDK_eventEOSUserRemovedDispatcher_Parms Parms; \
	Parms.UserManager=UserManager; \
	Parms.EOSUserBase=EOSUserBase; \
	Parms.ProductUser=ProductUser ? true : false; \
	EOSUserRemovedDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserRemovedDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
