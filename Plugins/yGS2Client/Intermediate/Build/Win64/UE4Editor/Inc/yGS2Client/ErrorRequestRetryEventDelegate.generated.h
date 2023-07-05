// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRequest_ErrSetupData;
#ifdef YGS2CLIENT_ErrorRequestRetryEventDelegate_generated_h
#error "ErrorRequestRetryEventDelegate.generated.h already included, missing '#pragma once' in ErrorRequestRetryEventDelegate.h"
#endif
#define YGS2CLIENT_ErrorRequestRetryEventDelegate_generated_h

#define AewFFCustomUProj_Plugins_yGS2Client_Source_yGS2Client_Public_ErrorRequestRetryEventDelegate_h_6_DELEGATE \
struct _Script_yGS2Client_eventErrorRequestRetryEvent_Parms \
{ \
	FRequest_ErrSetupData apiErrData; \
	int32 errRetryCnt; \
}; \
static inline void FErrorRequestRetryEvent_DelegateWrapper(const FMulticastScriptDelegate& ErrorRequestRetryEvent, FRequest_ErrSetupData const& apiErrData, const int32 errRetryCnt) \
{ \
	_Script_yGS2Client_eventErrorRequestRetryEvent_Parms Parms; \
	Parms.apiErrData=apiErrData; \
	Parms.errRetryCnt=errRetryCnt; \
	ErrorRequestRetryEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yGS2Client_Source_yGS2Client_Public_ErrorRequestRetryEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
