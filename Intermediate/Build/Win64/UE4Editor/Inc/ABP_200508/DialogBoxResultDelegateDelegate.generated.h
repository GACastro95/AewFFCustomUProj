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
#ifdef ABP_200508_DialogBoxResultDelegateDelegate_generated_h
#error "DialogBoxResultDelegateDelegate.generated.h already included, missing '#pragma once' in DialogBoxResultDelegateDelegate.h"
#endif
#define ABP_200508_DialogBoxResultDelegateDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_DialogBoxResultDelegateDelegate_h_8_DELEGATE \
struct _Script_ABP_200508_eventDialogBoxResultDelegate_Parms \
{ \
	yEnDialogBoxResult Result; \
	UELDialogBoxWidgetBase* Widget; \
}; \
static inline void FDialogBoxResultDelegate_DelegateWrapper(const FScriptDelegate& DialogBoxResultDelegate, yEnDialogBoxResult Result, UELDialogBoxWidgetBase* Widget) \
{ \
	_Script_ABP_200508_eventDialogBoxResultDelegate_Parms Parms; \
	Parms.Result=Result; \
	Parms.Widget=Widget; \
	DialogBoxResultDelegate.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_DialogBoxResultDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
