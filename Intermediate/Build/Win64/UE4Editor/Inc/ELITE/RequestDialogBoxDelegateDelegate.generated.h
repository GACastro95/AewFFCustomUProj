// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class yEnDialogBoxResult : uint8;
class UELDialogBoxWidgetBase;
#ifdef ELITE_RequestDialogBoxDelegateDelegate_generated_h
#error "RequestDialogBoxDelegateDelegate.generated.h already included, missing '#pragma once' in RequestDialogBoxDelegateDelegate.h"
#endif
#define ELITE_RequestDialogBoxDelegateDelegate_generated_h

#define AewFFCustomUProj_Source_ELITE_Public_RequestDialogBoxDelegateDelegate_h_8_DELEGATE \
struct _Script_ELITE_eventRequestDialogBoxDelegate_Parms \
{ \
	yEnDialogBoxResult Result; \
	UELDialogBoxWidgetBase* Widget; \
}; \
static inline void FRequestDialogBoxDelegate_DelegateWrapper(const FScriptDelegate& RequestDialogBoxDelegate, yEnDialogBoxResult Result, UELDialogBoxWidgetBase* Widget) \
{ \
	_Script_ELITE_eventRequestDialogBoxDelegate_Parms Parms; \
	Parms.Result=Result; \
	Parms.Widget=Widget; \
	RequestDialogBoxDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ELITE_Public_RequestDialogBoxDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
