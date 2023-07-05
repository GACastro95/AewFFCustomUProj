// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSSNetworkErrorInfo;
#ifdef ABP_200508_NetworkErrorAddedEventDelegate_generated_h
#error "NetworkErrorAddedEventDelegate.generated.h already included, missing '#pragma once' in NetworkErrorAddedEventDelegate.h"
#endif
#define ABP_200508_NetworkErrorAddedEventDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_NetworkErrorAddedEventDelegate_h_6_DELEGATE \
struct _Script_ABP_200508_eventNetworkErrorAddedEvent_Parms \
{ \
	FSSNetworkErrorInfo errInfo; \
}; \
static inline void FNetworkErrorAddedEvent_DelegateWrapper(const FMulticastScriptDelegate& NetworkErrorAddedEvent, FSSNetworkErrorInfo const& errInfo) \
{ \
	_Script_ABP_200508_eventNetworkErrorAddedEvent_Parms Parms; \
	Parms.errInfo=errInfo; \
	NetworkErrorAddedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_NetworkErrorAddedEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
