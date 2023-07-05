// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class eSSLobbyState : uint8;
#ifdef ABP_200508_LobbyStateChangeEventDelegate_generated_h
#error "LobbyStateChangeEventDelegate.generated.h already included, missing '#pragma once' in LobbyStateChangeEventDelegate.h"
#endif
#define ABP_200508_LobbyStateChangeEventDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_LobbyStateChangeEventDelegate_h_6_DELEGATE \
struct _Script_ABP_200508_eventLobbyStateChangeEvent_Parms \
{ \
	eSSLobbyState lobbyState; \
}; \
static inline void FLobbyStateChangeEvent_DelegateWrapper(const FMulticastScriptDelegate& LobbyStateChangeEvent, const eSSLobbyState lobbyState) \
{ \
	_Script_ABP_200508_eventLobbyStateChangeEvent_Parms Parms; \
	Parms.lobbyState=lobbyState; \
	LobbyStateChangeEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_LobbyStateChangeEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
