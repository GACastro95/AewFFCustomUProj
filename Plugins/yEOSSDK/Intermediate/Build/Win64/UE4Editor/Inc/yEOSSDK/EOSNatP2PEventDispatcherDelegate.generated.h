// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEOSNatP2PEvent : uint8;
class UEOSNatP2P;
class UEOSUserBase;
#ifdef YEOSSDK_EOSNatP2PEventDispatcherDelegate_generated_h
#error "EOSNatP2PEventDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSNatP2PEventDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSNatP2PEventDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PEventDispatcherDelegate_h_9_DELEGATE \
struct _Script_yEOSSDK_eventEOSNatP2PEventDispatcher_Parms \
{ \
	EEOSNatP2PEvent EOSP2PEvent; \
	UEOSNatP2P* EOSNatP2P; \
	UEOSUserBase* EOSUserBase; \
}; \
static inline void FEOSNatP2PEventDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSNatP2PEventDispatcher, EEOSNatP2PEvent EOSP2PEvent, UEOSNatP2P* EOSNatP2P, UEOSUserBase* EOSUserBase) \
{ \
	_Script_yEOSSDK_eventEOSNatP2PEventDispatcher_Parms Parms; \
	Parms.EOSP2PEvent=EOSP2PEvent; \
	Parms.EOSNatP2P=EOSNatP2P; \
	Parms.EOSUserBase=EOSUserBase; \
	EOSNatP2PEventDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PEventDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
