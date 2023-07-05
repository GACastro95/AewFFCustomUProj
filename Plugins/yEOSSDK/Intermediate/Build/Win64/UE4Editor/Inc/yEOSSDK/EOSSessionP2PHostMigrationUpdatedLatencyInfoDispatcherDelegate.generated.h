// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSSessionP2P;
class UEOSSessionP2PLatencyInfoPacket;
#ifdef YEOSSDK_EOSSessionP2PHostMigrationUpdatedLatencyInfoDispatcherDelegate_generated_h
#error "EOSSessionP2PHostMigrationUpdatedLatencyInfoDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSSessionP2PHostMigrationUpdatedLatencyInfoDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSSessionP2PHostMigrationUpdatedLatencyInfoDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PHostMigrationUpdatedLatencyInfoDispatcherDelegate_h_8_DELEGATE \
struct _Script_yEOSSDK_eventEOSSessionP2PHostMigrationUpdatedLatencyInfoDispatcher_Parms \
{ \
	UEOSSessionP2P* EOSSessionP2P; \
	UEOSSessionP2PLatencyInfoPacket* EOSSessionP2PLatencyInfoPacket; \
	bool IsHost; \
}; \
static inline void FEOSSessionP2PHostMigrationUpdatedLatencyInfoDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSSessionP2PHostMigrationUpdatedLatencyInfoDispatcher, UEOSSessionP2P* EOSSessionP2P, UEOSSessionP2PLatencyInfoPacket* EOSSessionP2PLatencyInfoPacket, bool IsHost) \
{ \
	_Script_yEOSSDK_eventEOSSessionP2PHostMigrationUpdatedLatencyInfoDispatcher_Parms Parms; \
	Parms.EOSSessionP2P=EOSSessionP2P; \
	Parms.EOSSessionP2PLatencyInfoPacket=EOSSessionP2PLatencyInfoPacket; \
	Parms.IsHost=IsHost ? true : false; \
	EOSSessionP2PHostMigrationUpdatedLatencyInfoDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PHostMigrationUpdatedLatencyInfoDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
