// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EELNetworkConnectionStatus : uint8;
enum class EELServerType : uint8;
#ifdef ABP_200508_NetworkConnectionStatusChangedDelegate_generated_h
#error "NetworkConnectionStatusChangedDelegate.generated.h already included, missing '#pragma once' in NetworkConnectionStatusChangedDelegate.h"
#endif
#define ABP_200508_NetworkConnectionStatusChangedDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_NetworkConnectionStatusChangedDelegate_h_7_DELEGATE \
struct _Script_ABP_200508_eventNetworkConnectionStatusChanged_Parms \
{ \
	EELNetworkConnectionStatus NetworkConnectionStatus; \
	EELServerType ServerType; \
}; \
static inline void FNetworkConnectionStatusChanged_DelegateWrapper(const FMulticastScriptDelegate& NetworkConnectionStatusChanged, EELNetworkConnectionStatus NetworkConnectionStatus, EELServerType ServerType) \
{ \
	_Script_ABP_200508_eventNetworkConnectionStatusChanged_Parms Parms; \
	Parms.NetworkConnectionStatus=NetworkConnectionStatus; \
	Parms.ServerType=ServerType; \
	NetworkConnectionStatusChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_NetworkConnectionStatusChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
