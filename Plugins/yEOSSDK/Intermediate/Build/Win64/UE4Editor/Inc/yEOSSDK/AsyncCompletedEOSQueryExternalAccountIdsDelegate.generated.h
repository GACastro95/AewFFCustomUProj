// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEOSExternalAccountId;
#ifdef YEOSSDK_AsyncCompletedEOSQueryExternalAccountIdsDelegate_generated_h
#error "AsyncCompletedEOSQueryExternalAccountIdsDelegate.generated.h already included, missing '#pragma once' in AsyncCompletedEOSQueryExternalAccountIdsDelegate.h"
#endif
#define YEOSSDK_AsyncCompletedEOSQueryExternalAccountIdsDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_AsyncCompletedEOSQueryExternalAccountIdsDelegate_h_6_DELEGATE \
struct _Script_yEOSSDK_eventAsyncCompletedEOSQueryExternalAccountIds_Parms \
{ \
	bool Success; \
	TArray<FEOSExternalAccountId> ExternalAccountIds; \
}; \
static inline void FAsyncCompletedEOSQueryExternalAccountIds_DelegateWrapper(const FMulticastScriptDelegate& AsyncCompletedEOSQueryExternalAccountIds, bool Success, TArray<FEOSExternalAccountId> const& ExternalAccountIds) \
{ \
	_Script_yEOSSDK_eventAsyncCompletedEOSQueryExternalAccountIds_Parms Parms; \
	Parms.Success=Success ? true : false; \
	Parms.ExternalAccountIds=ExternalAccountIds; \
	AsyncCompletedEOSQueryExternalAccountIds.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_AsyncCompletedEOSQueryExternalAccountIdsDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
