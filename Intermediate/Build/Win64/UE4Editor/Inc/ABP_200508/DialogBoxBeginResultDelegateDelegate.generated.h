// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UELDialogBoxWidgetBase;
#ifdef ABP_200508_DialogBoxBeginResultDelegateDelegate_generated_h
#error "DialogBoxBeginResultDelegateDelegate.generated.h already included, missing '#pragma once' in DialogBoxBeginResultDelegateDelegate.h"
#endif
#define ABP_200508_DialogBoxBeginResultDelegateDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_DialogBoxBeginResultDelegateDelegate_h_7_DELEGATE \
struct _Script_ABP_200508_eventDialogBoxBeginResultDelegate_Parms \
{ \
	bool IsCancel; \
	UELDialogBoxWidgetBase* Widget; \
}; \
static inline void FDialogBoxBeginResultDelegate_DelegateWrapper(const FScriptDelegate& DialogBoxBeginResultDelegate, bool IsCancel, UELDialogBoxWidgetBase* Widget) \
{ \
	_Script_ABP_200508_eventDialogBoxBeginResultDelegate_Parms Parms; \
	Parms.IsCancel=IsCancel ? true : false; \
	Parms.Widget=Widget; \
	DialogBoxBeginResultDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_DialogBoxBeginResultDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
