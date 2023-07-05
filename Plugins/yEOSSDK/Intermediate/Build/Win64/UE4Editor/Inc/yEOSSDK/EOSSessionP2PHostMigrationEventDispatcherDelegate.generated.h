// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSSessionP2P;
enum class EEOSSessionHostMigrationEvent : uint8;
class UEOSSessionP2PAFHostMigration;
#ifdef YEOSSDK_EOSSessionP2PHostMigrationEventDispatcherDelegate_generated_h
#error "EOSSessionP2PHostMigrationEventDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSSessionP2PHostMigrationEventDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSSessionP2PHostMigrationEventDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PHostMigrationEventDispatcherDelegate_h_9_DELEGATE \
struct _Script_yEOSSDK_eventEOSSessionP2PHostMigrationEventDispatcher_Parms \
{ \
	UEOSSessionP2P* EOSSessionP2P; \
	EEOSSessionHostMigrationEvent EOSSessionHostMigrationEvent; \
	UEOSSessionP2PAFHostMigration* EOSSessionP2PAFHostMigration; \
}; \
static inline void FEOSSessionP2PHostMigrationEventDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSSessionP2PHostMigrationEventDispatcher, UEOSSessionP2P* EOSSessionP2P, EEOSSessionHostMigrationEvent EOSSessionHostMigrationEvent, UEOSSessionP2PAFHostMigration* EOSSessionP2PAFHostMigration) \
{ \
	_Script_yEOSSDK_eventEOSSessionP2PHostMigrationEventDispatcher_Parms Parms; \
	Parms.EOSSessionP2P=EOSSessionP2P; \
	Parms.EOSSessionHostMigrationEvent=EOSSessionHostMigrationEvent; \
	Parms.EOSSessionP2PAFHostMigration=EOSSessionP2PAFHostMigration; \
	EOSSessionP2PHostMigrationEventDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PHostMigrationEventDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
