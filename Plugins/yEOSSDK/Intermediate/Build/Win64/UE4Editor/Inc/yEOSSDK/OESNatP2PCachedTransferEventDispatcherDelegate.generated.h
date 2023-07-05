// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEOSNatP2PCachedTransferEvent : uint8;
class UEOSNatP2PCachedTransfer;
class UEOSUserBase;
#ifdef YEOSSDK_OESNatP2PCachedTransferEventDispatcherDelegate_generated_h
#error "OESNatP2PCachedTransferEventDispatcherDelegate.generated.h already included, missing '#pragma once' in OESNatP2PCachedTransferEventDispatcherDelegate.h"
#endif
#define YEOSSDK_OESNatP2PCachedTransferEventDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_OESNatP2PCachedTransferEventDispatcherDelegate_h_9_DELEGATE \
struct _Script_yEOSSDK_eventOESNatP2PCachedTransferEventDispatcher_Parms \
{ \
	EEOSNatP2PCachedTransferEvent EOSP2PCachedTransferEvent; \
	UEOSNatP2PCachedTransfer* EOSNatP2PCachedTransfer; \
	UEOSUserBase* EOSUserBase; \
}; \
static inline void FOESNatP2PCachedTransferEventDispatcher_DelegateWrapper(const FMulticastScriptDelegate& OESNatP2PCachedTransferEventDispatcher, EEOSNatP2PCachedTransferEvent EOSP2PCachedTransferEvent, UEOSNatP2PCachedTransfer* EOSNatP2PCachedTransfer, UEOSUserBase* EOSUserBase) \
{ \
	_Script_yEOSSDK_eventOESNatP2PCachedTransferEventDispatcher_Parms Parms; \
	Parms.EOSP2PCachedTransferEvent=EOSP2PCachedTransferEvent; \
	Parms.EOSNatP2PCachedTransfer=EOSNatP2PCachedTransfer; \
	Parms.EOSUserBase=EOSUserBase; \
	OESNatP2PCachedTransferEventDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_OESNatP2PCachedTransferEventDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
