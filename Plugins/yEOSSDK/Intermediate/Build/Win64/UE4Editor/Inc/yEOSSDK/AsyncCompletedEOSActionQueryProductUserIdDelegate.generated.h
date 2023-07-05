// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FProductUserIdMap;
#ifdef YEOSSDK_AsyncCompletedEOSActionQueryProductUserIdDelegate_generated_h
#error "AsyncCompletedEOSActionQueryProductUserIdDelegate.generated.h already included, missing '#pragma once' in AsyncCompletedEOSActionQueryProductUserIdDelegate.h"
#endif
#define YEOSSDK_AsyncCompletedEOSActionQueryProductUserIdDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_AsyncCompletedEOSActionQueryProductUserIdDelegate_h_6_DELEGATE \
struct _Script_yEOSSDK_eventAsyncCompletedEOSActionQueryProductUserId_Parms \
{ \
	bool Success; \
	FProductUserIdMap ProductUserIdMap; \
}; \
static inline void FAsyncCompletedEOSActionQueryProductUserId_DelegateWrapper(const FMulticastScriptDelegate& AsyncCompletedEOSActionQueryProductUserId, bool Success, FProductUserIdMap const& ProductUserIdMap) \
{ \
	_Script_yEOSSDK_eventAsyncCompletedEOSActionQueryProductUserId_Parms Parms; \
	Parms.Success=Success ? true : false; \
	Parms.ProductUserIdMap=ProductUserIdMap; \
	AsyncCompletedEOSActionQueryProductUserId.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_AsyncCompletedEOSActionQueryProductUserIdDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
