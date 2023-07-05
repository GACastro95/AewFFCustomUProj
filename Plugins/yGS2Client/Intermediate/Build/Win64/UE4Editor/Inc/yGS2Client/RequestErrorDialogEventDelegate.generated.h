// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRequest_ErrSetupData;
#ifdef YGS2CLIENT_RequestErrorDialogEventDelegate_generated_h
#error "RequestErrorDialogEventDelegate.generated.h already included, missing '#pragma once' in RequestErrorDialogEventDelegate.h"
#endif
#define YGS2CLIENT_RequestErrorDialogEventDelegate_generated_h

#define AewFFCustomUProj_Plugins_yGS2Client_Source_yGS2Client_Public_RequestErrorDialogEventDelegate_h_6_DELEGATE \
struct _Script_yGS2Client_eventRequestErrorDialogEvent_Parms \
{ \
	bool isYES; \
	FRequest_ErrSetupData errDialogData; \
}; \
static inline void FRequestErrorDialogEvent_DelegateWrapper(const FMulticastScriptDelegate& RequestErrorDialogEvent, bool isYES, const FRequest_ErrSetupData errDialogData) \
{ \
	_Script_yGS2Client_eventRequestErrorDialogEvent_Parms Parms; \
	Parms.isYES=isYES ? true : false; \
	Parms.errDialogData=errDialogData; \
	RequestErrorDialogEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yGS2Client_Source_yGS2Client_Public_RequestErrorDialogEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
