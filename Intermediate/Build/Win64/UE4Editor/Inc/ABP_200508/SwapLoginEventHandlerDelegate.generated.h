// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_SwapLoginEventHandlerDelegate_generated_h
#error "SwapLoginEventHandlerDelegate.generated.h already included, missing '#pragma once' in SwapLoginEventHandlerDelegate.h"
#endif
#define ABP_200508_SwapLoginEventHandlerDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_SwapLoginEventHandlerDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventSwapLoginEventHandler_Parms \
{ \
	int32 NewHostIndex; \
}; \
static inline void FSwapLoginEventHandler_DelegateWrapper(const FMulticastScriptDelegate& SwapLoginEventHandler, int32 NewHostIndex) \
{ \
	_Script_ABP_200508_eventSwapLoginEventHandler_Parms Parms; \
	Parms.NewHostIndex=NewHostIndex; \
	SwapLoginEventHandler.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_SwapLoginEventHandlerDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
