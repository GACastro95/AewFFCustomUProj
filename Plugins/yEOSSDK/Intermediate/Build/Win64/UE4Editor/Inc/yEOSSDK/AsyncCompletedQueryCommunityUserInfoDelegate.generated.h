// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSCommunityUserBase;
#ifdef YEOSSDK_AsyncCompletedQueryCommunityUserInfoDelegate_generated_h
#error "AsyncCompletedQueryCommunityUserInfoDelegate.generated.h already included, missing '#pragma once' in AsyncCompletedQueryCommunityUserInfoDelegate.h"
#endif
#define YEOSSDK_AsyncCompletedQueryCommunityUserInfoDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_AsyncCompletedQueryCommunityUserInfoDelegate_h_7_DELEGATE \
struct _Script_yEOSSDK_eventAsyncCompletedQueryCommunityUserInfo_Parms \
{ \
	UEOSCommunityUserBase* User; \
}; \
static inline void FAsyncCompletedQueryCommunityUserInfo_DelegateWrapper(const FMulticastScriptDelegate& AsyncCompletedQueryCommunityUserInfo, UEOSCommunityUserBase* User) \
{ \
	_Script_yEOSSDK_eventAsyncCompletedQueryCommunityUserInfo_Parms Parms; \
	Parms.User=User; \
	AsyncCompletedQueryCommunityUserInfo.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_AsyncCompletedQueryCommunityUserInfoDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
