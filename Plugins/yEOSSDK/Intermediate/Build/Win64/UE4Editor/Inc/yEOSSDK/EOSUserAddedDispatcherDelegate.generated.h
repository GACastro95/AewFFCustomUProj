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
#ifdef YEOSSDK_EOSUserAddedDispatcherDelegate_generated_h
#error "EOSUserAddedDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSUserAddedDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSUserAddedDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserAddedDispatcherDelegate_h_8_DELEGATE \
struct _Script_yEOSSDK_eventEOSUserAddedDispatcher_Parms \
{ \
	UEOSUserManager* EOSUserManager; \
	UEOSUserBase* EOSUserBase; \
	bool ProductUser; \
}; \
static inline void FEOSUserAddedDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSUserAddedDispatcher, UEOSUserManager* EOSUserManager, UEOSUserBase* EOSUserBase, bool ProductUser) \
{ \
	_Script_yEOSSDK_eventEOSUserAddedDispatcher_Parms Parms; \
	Parms.EOSUserManager=EOSUserManager; \
	Parms.EOSUserBase=EOSUserBase; \
	Parms.ProductUser=ProductUser ? true : false; \
	EOSUserAddedDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSUserAddedDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
