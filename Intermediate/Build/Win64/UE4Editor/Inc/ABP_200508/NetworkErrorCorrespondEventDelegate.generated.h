// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSSNetworkErrorInfo;
#ifdef ABP_200508_NetworkErrorCorrespondEventDelegate_generated_h
#error "NetworkErrorCorrespondEventDelegate.generated.h already included, missing '#pragma once' in NetworkErrorCorrespondEventDelegate.h"
#endif
#define ABP_200508_NetworkErrorCorrespondEventDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_NetworkErrorCorrespondEventDelegate_h_6_DELEGATE \
struct _Script_ABP_200508_eventNetworkErrorCorrespondEvent_Parms \
{ \
	FSSNetworkErrorInfo errInfo; \
}; \
static inline void FNetworkErrorCorrespondEvent_DelegateWrapper(const FMulticastScriptDelegate& NetworkErrorCorrespondEvent, FSSNetworkErrorInfo const& errInfo) \
{ \
	_Script_ABP_200508_eventNetworkErrorCorrespondEvent_Parms Parms; \
	Parms.errInfo=errInfo; \
	NetworkErrorCorrespondEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_NetworkErrorCorrespondEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
