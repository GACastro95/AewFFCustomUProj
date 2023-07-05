// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EELNetworkStatus : uint8;
#ifdef ABP_200508_NetworkStatusChangedDelegate_generated_h
#error "NetworkStatusChangedDelegate.generated.h already included, missing '#pragma once' in NetworkStatusChangedDelegate.h"
#endif
#define ABP_200508_NetworkStatusChangedDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_NetworkStatusChangedDelegate_h_6_DELEGATE \
struct _Script_ABP_200508_eventNetworkStatusChanged_Parms \
{ \
	EELNetworkStatus NetworkStatus; \
}; \
static inline void FNetworkStatusChanged_DelegateWrapper(const FMulticastScriptDelegate& NetworkStatusChanged, EELNetworkStatus NetworkStatus) \
{ \
	_Script_ABP_200508_eventNetworkStatusChanged_Parms Parms; \
	Parms.NetworkStatus=NetworkStatus; \
	NetworkStatusChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_NetworkStatusChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
