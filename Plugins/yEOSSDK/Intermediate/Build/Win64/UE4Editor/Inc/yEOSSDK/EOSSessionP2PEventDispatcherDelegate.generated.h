// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEOSSessionP2PEvent : uint8;
class UEOSSessionP2P;
class UEOSSessionUserPacketMap;
#ifdef YEOSSDK_EOSSessionP2PEventDispatcherDelegate_generated_h
#error "EOSSessionP2PEventDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSSessionP2PEventDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSSessionP2PEventDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PEventDispatcherDelegate_h_9_DELEGATE \
struct _Script_yEOSSDK_eventEOSSessionP2PEventDispatcher_Parms \
{ \
	EEOSSessionP2PEvent EOSSessionP2PEvent; \
	UEOSSessionP2P* EOSSessionP2P; \
	UEOSSessionUserPacketMap* EOSSessionUserPacketMap; \
}; \
static inline void FEOSSessionP2PEventDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSSessionP2PEventDispatcher, EEOSSessionP2PEvent EOSSessionP2PEvent, UEOSSessionP2P* EOSSessionP2P, UEOSSessionUserPacketMap* EOSSessionUserPacketMap) \
{ \
	_Script_yEOSSDK_eventEOSSessionP2PEventDispatcher_Parms Parms; \
	Parms.EOSSessionP2PEvent=EOSSessionP2PEvent; \
	Parms.EOSSessionP2P=EOSSessionP2P; \
	Parms.EOSSessionUserPacketMap=EOSSessionUserPacketMap; \
	EOSSessionP2PEventDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PEventDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
