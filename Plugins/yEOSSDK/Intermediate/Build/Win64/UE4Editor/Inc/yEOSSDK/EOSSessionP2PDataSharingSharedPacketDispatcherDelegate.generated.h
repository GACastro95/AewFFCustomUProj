// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEOSSessionP2PDataSharingEvent : uint8;
class UEOSSessionP2P;
class UEOSSessionP2PSynchronizedPacketBase;
#ifdef YEOSSDK_EOSSessionP2PDataSharingSharedPacketDispatcherDelegate_generated_h
#error "EOSSessionP2PDataSharingSharedPacketDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSSessionP2PDataSharingSharedPacketDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSSessionP2PDataSharingSharedPacketDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PDataSharingSharedPacketDispatcherDelegate_h_9_DELEGATE \
struct _Script_yEOSSDK_eventEOSSessionP2PDataSharingSharedPacketDispatcher_Parms \
{ \
	EEOSSessionP2PDataSharingEvent EOSSessionP2PDataSharingEvent; \
	UEOSSessionP2P* EOSSessionP2P; \
	UEOSSessionP2PSynchronizedPacketBase* EOSSessionP2PSynchronizedPacketBaseForCurrent; \
	UEOSSessionP2PSynchronizedPacketBase* EOSSessionP2PSynchronizedPacketBaseForReceived; \
	FString ProductUserID; \
}; \
static inline void FEOSSessionP2PDataSharingSharedPacketDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSSessionP2PDataSharingSharedPacketDispatcher, EEOSSessionP2PDataSharingEvent EOSSessionP2PDataSharingEvent, UEOSSessionP2P* EOSSessionP2P, UEOSSessionP2PSynchronizedPacketBase* EOSSessionP2PSynchronizedPacketBaseForCurrent, UEOSSessionP2PSynchronizedPacketBase* EOSSessionP2PSynchronizedPacketBaseForReceived, const FString& ProductUserID) \
{ \
	_Script_yEOSSDK_eventEOSSessionP2PDataSharingSharedPacketDispatcher_Parms Parms; \
	Parms.EOSSessionP2PDataSharingEvent=EOSSessionP2PDataSharingEvent; \
	Parms.EOSSessionP2P=EOSSessionP2P; \
	Parms.EOSSessionP2PSynchronizedPacketBaseForCurrent=EOSSessionP2PSynchronizedPacketBaseForCurrent; \
	Parms.EOSSessionP2PSynchronizedPacketBaseForReceived=EOSSessionP2PSynchronizedPacketBaseForReceived; \
	Parms.ProductUserID=ProductUserID; \
	EOSSessionP2PDataSharingSharedPacketDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PDataSharingSharedPacketDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
