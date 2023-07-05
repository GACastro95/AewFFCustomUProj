// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSSessionP2P;
class UEOSSessionP2PMemberInfoPacket;
#ifdef YEOSSDK_EOSSessionP2PBindPlayerMemberUpdatedDispatcherDelegate_generated_h
#error "EOSSessionP2PBindPlayerMemberUpdatedDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSSessionP2PBindPlayerMemberUpdatedDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSSessionP2PBindPlayerMemberUpdatedDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PBindPlayerMemberUpdatedDispatcherDelegate_h_8_DELEGATE \
struct _Script_yEOSSDK_eventEOSSessionP2PBindPlayerMemberUpdatedDispatcher_Parms \
{ \
	UEOSSessionP2P* EOSSessionP2P; \
	UEOSSessionP2PMemberInfoPacket* EOSSessionP2PMemberInfoPacket; \
}; \
static inline void FEOSSessionP2PBindPlayerMemberUpdatedDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSSessionP2PBindPlayerMemberUpdatedDispatcher, UEOSSessionP2P* EOSSessionP2P, UEOSSessionP2PMemberInfoPacket* EOSSessionP2PMemberInfoPacket) \
{ \
	_Script_yEOSSDK_eventEOSSessionP2PBindPlayerMemberUpdatedDispatcher_Parms Parms; \
	Parms.EOSSessionP2P=EOSSessionP2P; \
	Parms.EOSSessionP2PMemberInfoPacket=EOSSessionP2PMemberInfoPacket; \
	EOSSessionP2PBindPlayerMemberUpdatedDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PBindPlayerMemberUpdatedDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
