// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSNatP2P;
class UEOSUserBase;
class UEOSNatP2PBinary;
#ifdef YEOSSDK_EOSNatP2PReceivePacketDispatcherDelegate_generated_h
#error "EOSNatP2PReceivePacketDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSNatP2PReceivePacketDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSNatP2PReceivePacketDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PReceivePacketDispatcherDelegate_h_9_DELEGATE \
struct _Script_yEOSSDK_eventEOSNatP2PReceivePacketDispatcher_Parms \
{ \
	UEOSNatP2P* EOSNatP2P; \
	UEOSUserBase* EOSUserBase; \
	UEOSNatP2PBinary* EOSNatP2PBinary; \
}; \
static inline void FEOSNatP2PReceivePacketDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSNatP2PReceivePacketDispatcher, UEOSNatP2P* EOSNatP2P, UEOSUserBase* EOSUserBase, UEOSNatP2PBinary* EOSNatP2PBinary) \
{ \
	_Script_yEOSSDK_eventEOSNatP2PReceivePacketDispatcher_Parms Parms; \
	Parms.EOSNatP2P=EOSNatP2P; \
	Parms.EOSUserBase=EOSUserBase; \
	Parms.EOSNatP2PBinary=EOSNatP2PBinary; \
	EOSNatP2PReceivePacketDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSNatP2PReceivePacketDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
