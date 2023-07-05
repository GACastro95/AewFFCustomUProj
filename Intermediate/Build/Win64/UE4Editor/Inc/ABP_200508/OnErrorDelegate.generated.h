// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGLAPI_ErrorData;
#ifdef ABP_200508_OnErrorDelegate_generated_h
#error "OnErrorDelegate.generated.h already included, missing '#pragma once' in OnErrorDelegate.h"
#endif
#define ABP_200508_OnErrorDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_OnErrorDelegate_h_6_DELEGATE \
struct _Script_ABP_200508_eventOnError_Parms \
{ \
	FGLAPI_ErrorData err; \
}; \
static inline void FOnError_DelegateWrapper(const FMulticastScriptDelegate& OnError, FGLAPI_ErrorData const& err) \
{ \
	_Script_ABP_200508_eventOnError_Parms Parms; \
	Parms.err=err; \
	OnError.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_OnErrorDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
