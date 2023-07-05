// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EELNetworkType : uint8;
#ifdef ABP_200508_NetworkTypeChangedDelegate_generated_h
#error "NetworkTypeChangedDelegate.generated.h already included, missing '#pragma once' in NetworkTypeChangedDelegate.h"
#endif
#define ABP_200508_NetworkTypeChangedDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_NetworkTypeChangedDelegate_h_6_DELEGATE \
struct _Script_ABP_200508_eventNetworkTypeChanged_Parms \
{ \
	EELNetworkType NetworkType; \
}; \
static inline void FNetworkTypeChanged_DelegateWrapper(const FMulticastScriptDelegate& NetworkTypeChanged, EELNetworkType NetworkType) \
{ \
	_Script_ABP_200508_eventNetworkTypeChanged_Parms Parms; \
	Parms.NetworkType=NetworkType; \
	NetworkTypeChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_NetworkTypeChangedDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
