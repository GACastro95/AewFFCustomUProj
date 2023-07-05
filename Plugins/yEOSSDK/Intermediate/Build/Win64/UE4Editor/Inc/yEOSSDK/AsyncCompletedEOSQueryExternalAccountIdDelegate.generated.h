// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEOSExternalAccountId;
#ifdef YEOSSDK_AsyncCompletedEOSQueryExternalAccountIdDelegate_generated_h
#error "AsyncCompletedEOSQueryExternalAccountIdDelegate.generated.h already included, missing '#pragma once' in AsyncCompletedEOSQueryExternalAccountIdDelegate.h"
#endif
#define YEOSSDK_AsyncCompletedEOSQueryExternalAccountIdDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_AsyncCompletedEOSQueryExternalAccountIdDelegate_h_6_DELEGATE \
struct _Script_yEOSSDK_eventAsyncCompletedEOSQueryExternalAccountId_Parms \
{ \
	bool Success; \
	FEOSExternalAccountId ExternalAccountId; \
}; \
static inline void FAsyncCompletedEOSQueryExternalAccountId_DelegateWrapper(const FMulticastScriptDelegate& AsyncCompletedEOSQueryExternalAccountId, bool Success, FEOSExternalAccountId const& ExternalAccountId) \
{ \
	_Script_yEOSSDK_eventAsyncCompletedEOSQueryExternalAccountId_Parms Parms; \
	Parms.Success=Success ? true : false; \
	Parms.ExternalAccountId=ExternalAccountId; \
	AsyncCompletedEOSQueryExternalAccountId.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_AsyncCompletedEOSQueryExternalAccountIdDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
