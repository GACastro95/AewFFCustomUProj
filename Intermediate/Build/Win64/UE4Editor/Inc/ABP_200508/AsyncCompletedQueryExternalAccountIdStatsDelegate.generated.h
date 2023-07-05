// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_AsyncCompletedQueryExternalAccountIdStatsDelegate_generated_h
#error "AsyncCompletedQueryExternalAccountIdStatsDelegate.generated.h already included, missing '#pragma once' in AsyncCompletedQueryExternalAccountIdStatsDelegate.h"
#endif
#define ABP_200508_AsyncCompletedQueryExternalAccountIdStatsDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_AsyncCompletedQueryExternalAccountIdStatsDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventAsyncCompletedQueryExternalAccountIdStats_Parms \
{ \
	FString ProductUserID; \
	FString ExternalAccountId; \
}; \
static inline void FAsyncCompletedQueryExternalAccountIdStats_DelegateWrapper(const FMulticastScriptDelegate& AsyncCompletedQueryExternalAccountIdStats, const FString& ProductUserID, const FString& ExternalAccountId) \
{ \
	_Script_ABP_200508_eventAsyncCompletedQueryExternalAccountIdStats_Parms Parms; \
	Parms.ProductUserID=ProductUserID; \
	Parms.ExternalAccountId=ExternalAccountId; \
	AsyncCompletedQueryExternalAccountIdStats.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_AsyncCompletedQueryExternalAccountIdStatsDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
