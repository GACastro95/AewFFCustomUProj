// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInstalledDlcItemParamResult;
#ifdef ABP_200508_CheckInstalledDlcItemCompleteDelegateDelegate_generated_h
#error "CheckInstalledDlcItemCompleteDelegateDelegate.generated.h already included, missing '#pragma once' in CheckInstalledDlcItemCompleteDelegateDelegate.h"
#endif
#define ABP_200508_CheckInstalledDlcItemCompleteDelegateDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_CheckInstalledDlcItemCompleteDelegateDelegate_h_6_DELEGATE \
struct _Script_ABP_200508_eventCheckInstalledDlcItemCompleteDelegate_Parms \
{ \
	FInstalledDlcItemParamResult Result; \
}; \
static inline void FCheckInstalledDlcItemCompleteDelegate_DelegateWrapper(const FScriptDelegate& CheckInstalledDlcItemCompleteDelegate, FInstalledDlcItemParamResult Result) \
{ \
	_Script_ABP_200508_eventCheckInstalledDlcItemCompleteDelegate_Parms Parms; \
	Parms.Result=Result; \
	CheckInstalledDlcItemCompleteDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_CheckInstalledDlcItemCompleteDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS