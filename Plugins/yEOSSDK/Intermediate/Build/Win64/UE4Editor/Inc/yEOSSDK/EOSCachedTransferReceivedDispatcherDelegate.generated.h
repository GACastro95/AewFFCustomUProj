// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSNatP2PCachedTransfer;
class UEOSUserBase;
class UEOSNatP2PBinary;
#ifdef YEOSSDK_EOSCachedTransferReceivedDispatcherDelegate_generated_h
#error "EOSCachedTransferReceivedDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSCachedTransferReceivedDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSCachedTransferReceivedDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSCachedTransferReceivedDispatcherDelegate_h_9_DELEGATE \
struct _Script_yEOSSDK_eventEOSCachedTransferReceivedDispatcher_Parms \
{ \
	UEOSNatP2PCachedTransfer* EOSNatP2PCachedTransfer; \
	UEOSUserBase* EOSUserBase; \
	UEOSNatP2PBinary* EOSNatP2PBinary; \
}; \
static inline void FEOSCachedTransferReceivedDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSCachedTransferReceivedDispatcher, UEOSNatP2PCachedTransfer* EOSNatP2PCachedTransfer, UEOSUserBase* EOSUserBase, UEOSNatP2PBinary* EOSNatP2PBinary) \
{ \
	_Script_yEOSSDK_eventEOSCachedTransferReceivedDispatcher_Parms Parms; \
	Parms.EOSNatP2PCachedTransfer=EOSNatP2PCachedTransfer; \
	Parms.EOSUserBase=EOSUserBase; \
	Parms.EOSNatP2PBinary=EOSNatP2PBinary; \
	EOSCachedTransferReceivedDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSCachedTransferReceivedDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
