// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_CloseLoginUIEventHandlerDelegate_generated_h
#error "CloseLoginUIEventHandlerDelegate.generated.h already included, missing '#pragma once' in CloseLoginUIEventHandlerDelegate.h"
#endif
#define ABP_200508_CloseLoginUIEventHandlerDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_CloseLoginUIEventHandlerDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventCloseLoginUIEventHandler_Parms \
{ \
	int32 HostIndex; \
}; \
static inline void FCloseLoginUIEventHandler_DelegateWrapper(const FMulticastScriptDelegate& CloseLoginUIEventHandler, int32 HostIndex) \
{ \
	_Script_ABP_200508_eventCloseLoginUIEventHandler_Parms Parms; \
	Parms.HostIndex=HostIndex; \
	CloseLoginUIEventHandler.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_CloseLoginUIEventHandlerDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
