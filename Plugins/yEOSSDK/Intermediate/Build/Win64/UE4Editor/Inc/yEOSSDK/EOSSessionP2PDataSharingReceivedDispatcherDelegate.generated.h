// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSSessionP2P;
class UEOSSessionP2PSynchronizedPacketBase;
#ifdef YEOSSDK_EOSSessionP2PDataSharingReceivedDispatcherDelegate_generated_h
#error "EOSSessionP2PDataSharingReceivedDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSSessionP2PDataSharingReceivedDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSSessionP2PDataSharingReceivedDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PDataSharingReceivedDispatcherDelegate_h_8_DELEGATE \
struct _Script_yEOSSDK_eventEOSSessionP2PDataSharingReceivedDispatcher_Parms \
{ \
	UEOSSessionP2P* EOSSessionP2P; \
	UEOSSessionP2PSynchronizedPacketBase* EOSSessionP2PSynchronizedPacketBaseForCurrent; \
	UEOSSessionP2PSynchronizedPacketBase* SessionP2PSynchronizedPacketBaseForReceivedAndReply; \
	FString ProductUserID; \
	bool Overwrite; \
}; \
static inline void FEOSSessionP2PDataSharingReceivedDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSSessionP2PDataSharingReceivedDispatcher, UEOSSessionP2P* EOSSessionP2P, UEOSSessionP2PSynchronizedPacketBase* EOSSessionP2PSynchronizedPacketBaseForCurrent, UEOSSessionP2PSynchronizedPacketBase* SessionP2PSynchronizedPacketBaseForReceivedAndReply, const FString& ProductUserID, bool Overwrite) \
{ \
	_Script_yEOSSDK_eventEOSSessionP2PDataSharingReceivedDispatcher_Parms Parms; \
	Parms.EOSSessionP2P=EOSSessionP2P; \
	Parms.EOSSessionP2PSynchronizedPacketBaseForCurrent=EOSSessionP2PSynchronizedPacketBaseForCurrent; \
	Parms.SessionP2PSynchronizedPacketBaseForReceivedAndReply=SessionP2PSynchronizedPacketBaseForReceivedAndReply; \
	Parms.ProductUserID=ProductUserID; \
	Parms.Overwrite=Overwrite ? true : false; \
	EOSSessionP2PDataSharingReceivedDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PDataSharingReceivedDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
