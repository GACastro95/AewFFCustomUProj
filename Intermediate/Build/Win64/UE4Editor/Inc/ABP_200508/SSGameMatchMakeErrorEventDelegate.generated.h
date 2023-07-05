// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRequest_ErrSetupData;
#ifdef ABP_200508_SSGameMatchMakeErrorEventDelegate_generated_h
#error "SSGameMatchMakeErrorEventDelegate.generated.h already included, missing '#pragma once' in SSGameMatchMakeErrorEventDelegate.h"
#endif
#define ABP_200508_SSGameMatchMakeErrorEventDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_SSGameMatchMakeErrorEventDelegate_h_6_DELEGATE \
struct _Script_ABP_200508_eventSSGameMatchMakeErrorEvent_Parms \
{ \
	bool isDialogYES; \
	FRequest_ErrSetupData errDialogData; \
}; \
static inline void FSSGameMatchMakeErrorEvent_DelegateWrapper(const FMulticastScriptDelegate& SSGameMatchMakeErrorEvent, bool isDialogYES, const FRequest_ErrSetupData errDialogData) \
{ \
	_Script_ABP_200508_eventSSGameMatchMakeErrorEvent_Parms Parms; \
	Parms.isDialogYES=isDialogYES ? true : false; \
	Parms.errDialogData=errDialogData; \
	SSGameMatchMakeErrorEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_SSGameMatchMakeErrorEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
