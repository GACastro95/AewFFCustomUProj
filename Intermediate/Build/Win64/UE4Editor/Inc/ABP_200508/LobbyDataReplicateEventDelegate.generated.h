// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class eSSLobbyReplicateDataType : uint8;
class UELSSGameLobby;
#ifdef ABP_200508_LobbyDataReplicateEventDelegate_generated_h
#error "LobbyDataReplicateEventDelegate.generated.h already included, missing '#pragma once' in LobbyDataReplicateEventDelegate.h"
#endif
#define ABP_200508_LobbyDataReplicateEventDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_LobbyDataReplicateEventDelegate_h_8_DELEGATE \
struct _Script_ABP_200508_eventLobbyDataReplicateEvent_Parms \
{ \
	eSSLobbyReplicateDataType lobbyState; \
	const UELSSGameLobby* targetLobby; \
}; \
static inline void FLobbyDataReplicateEvent_DelegateWrapper(const FMulticastScriptDelegate& LobbyDataReplicateEvent, const eSSLobbyReplicateDataType lobbyState, const UELSSGameLobby* targetLobby) \
{ \
	_Script_ABP_200508_eventLobbyDataReplicateEvent_Parms Parms; \
	Parms.lobbyState=lobbyState; \
	Parms.targetLobby=targetLobby; \
	LobbyDataReplicateEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_LobbyDataReplicateEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
