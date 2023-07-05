// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSSession;
class UEOSSessionInfo;
class UEOSSessionP2P;
#ifdef YEOSSDK_EOSSessionP2PDestroyDispatcherDelegate_generated_h
#error "EOSSessionP2PDestroyDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSSessionP2PDestroyDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSSessionP2PDestroyDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PDestroyDispatcherDelegate_h_9_DELEGATE \
struct _Script_yEOSSDK_eventEOSSessionP2PDestroyDispatcher_Parms \
{ \
	UEOSSession* EOSSession; \
	UEOSSessionInfo* EOSSessionInfo; \
	UEOSSessionP2P* EOSSessionP2P; \
}; \
static inline void FEOSSessionP2PDestroyDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSSessionP2PDestroyDispatcher, UEOSSession* EOSSession, UEOSSessionInfo* EOSSessionInfo, UEOSSessionP2P* EOSSessionP2P) \
{ \
	_Script_yEOSSDK_eventEOSSessionP2PDestroyDispatcher_Parms Parms; \
	Parms.EOSSession=EOSSession; \
	Parms.EOSSessionInfo=EOSSessionInfo; \
	Parms.EOSSessionP2P=EOSSessionP2P; \
	EOSSessionP2PDestroyDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSSessionP2PDestroyDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
