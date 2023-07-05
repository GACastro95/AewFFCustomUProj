// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FExternalAccountIdMap;
#ifdef YEOSSDK_AsyncCompletedEOSQueryExternalAccountIdMapDelegate_generated_h
#error "AsyncCompletedEOSQueryExternalAccountIdMapDelegate.generated.h already included, missing '#pragma once' in AsyncCompletedEOSQueryExternalAccountIdMapDelegate.h"
#endif
#define YEOSSDK_AsyncCompletedEOSQueryExternalAccountIdMapDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_AsyncCompletedEOSQueryExternalAccountIdMapDelegate_h_6_DELEGATE \
struct _Script_yEOSSDK_eventAsyncCompletedEOSQueryExternalAccountIdMap_Parms \
{ \
	bool Success; \
	FExternalAccountIdMap ExternalAccountIdMap; \
}; \
static inline void FAsyncCompletedEOSQueryExternalAccountIdMap_DelegateWrapper(const FMulticastScriptDelegate& AsyncCompletedEOSQueryExternalAccountIdMap, bool Success, FExternalAccountIdMap const& ExternalAccountIdMap) \
{ \
	_Script_yEOSSDK_eventAsyncCompletedEOSQueryExternalAccountIdMap_Parms Parms; \
	Parms.Success=Success ? true : false; \
	Parms.ExternalAccountIdMap=ExternalAccountIdMap; \
	AsyncCompletedEOSQueryExternalAccountIdMap.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_AsyncCompletedEOSQueryExternalAccountIdMapDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
