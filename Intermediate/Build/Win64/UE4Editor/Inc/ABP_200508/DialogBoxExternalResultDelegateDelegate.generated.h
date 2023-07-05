// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class yEnDialogBoxResult : uint8;
#ifdef ABP_200508_DialogBoxExternalResultDelegateDelegate_generated_h
#error "DialogBoxExternalResultDelegateDelegate.generated.h already included, missing '#pragma once' in DialogBoxExternalResultDelegateDelegate.h"
#endif
#define ABP_200508_DialogBoxExternalResultDelegateDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_DialogBoxExternalResultDelegateDelegate_h_6_DELEGATE \
struct _Script_ABP_200508_eventDialogBoxExternalResultDelegate_Parms \
{ \
	yEnDialogBoxResult Result; \
}; \
static inline void FDialogBoxExternalResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& DialogBoxExternalResultDelegate, yEnDialogBoxResult Result) \
{ \
	_Script_ABP_200508_eventDialogBoxExternalResultDelegate_Parms Parms; \
	Parms.Result=Result; \
	DialogBoxExternalResultDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_DialogBoxExternalResultDelegateDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
