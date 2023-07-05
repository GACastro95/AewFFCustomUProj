// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSSPlatformNetworkData;
enum class ESSOnlineErrorType : uint8;
#ifdef ABP_200508_PlatformNetworkErrorEventDelegate_generated_h
#error "PlatformNetworkErrorEventDelegate.generated.h already included, missing '#pragma once' in PlatformNetworkErrorEventDelegate.h"
#endif
#define ABP_200508_PlatformNetworkErrorEventDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_PlatformNetworkErrorEventDelegate_h_7_DELEGATE \
struct _Script_ABP_200508_eventPlatformNetworkErrorEvent_Parms \
{ \
	FSSPlatformNetworkData errInfo; \
	ESSOnlineErrorType errType; \
}; \
static inline void FPlatformNetworkErrorEvent_DelegateWrapper(const FMulticastScriptDelegate& PlatformNetworkErrorEvent, FSSPlatformNetworkData const& errInfo, const ESSOnlineErrorType errType) \
{ \
	_Script_ABP_200508_eventPlatformNetworkErrorEvent_Parms Parms; \
	Parms.errInfo=errInfo; \
	Parms.errType=errType; \
	PlatformNetworkErrorEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_PlatformNetworkErrorEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
