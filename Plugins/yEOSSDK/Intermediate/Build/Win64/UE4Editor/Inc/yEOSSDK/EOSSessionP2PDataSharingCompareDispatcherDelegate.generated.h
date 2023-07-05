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
#ifdef YEOSSDK_EOSSessionP2PDataSharingCompareDispatcherDelegate_generated_h
#error "EOSSessionP2PDataSharingCompareDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSSessionP2PDataSharingCompareDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSSessionP2PDataSharingCompareDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PDataSharingCompareDispatcherDelegate_h_8_DELEGATE \
struct _Script_yEOSSDK_eventEOSSessionP2PDataSharingCompareDispatcher_Parms \
{ \
	UEOSSessionP2P* EOSSessionP2P; \
	UEOSSessionP2PSynchronizedPacketBase* EOSSessionP2PSynchronizedPacketBaseForCurrent; \
	UEOSSessionP2PSynchronizedPacketBase* EOSSessionP2PSynchronizedPacketBaseForReply; \
	FString ProductUserID; \
}; \
static inline void FEOSSessionP2PDataSharingCompareDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSSessionP2PDataSharingCompareDispatcher, UEOSSessionP2P* EOSSessionP2P, UEOSSessionP2PSynchronizedPacketBase* EOSSessionP2PSynchronizedPacketBaseForCurrent, UEOSSessionP2PSynchronizedPacketBase* EOSSessionP2PSynchronizedPacketBaseForReply, const FString& ProductUserID) \
{ \
	_Script_yEOSSDK_eventEOSSessionP2PDataSharingCompareDispatcher_Parms Parms; \
	Parms.EOSSessionP2P=EOSSessionP2P; \
	Parms.EOSSessionP2PSynchronizedPacketBaseForCurrent=EOSSessionP2PSynchronizedPacketBaseForCurrent; \
	Parms.EOSSessionP2PSynchronizedPacketBaseForReply=EOSSessionP2PSynchronizedPacketBaseForReply; \
	Parms.ProductUserID=ProductUserID; \
	EOSSessionP2PDataSharingCompareDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PDataSharingCompareDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
