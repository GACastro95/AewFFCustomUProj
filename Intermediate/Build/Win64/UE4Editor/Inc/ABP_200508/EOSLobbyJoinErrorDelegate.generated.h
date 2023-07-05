// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLobbyInvite;
enum class ELobbyInviteError : uint8;
#ifdef ABP_200508_EOSLobbyJoinErrorDelegate_generated_h
#error "EOSLobbyJoinErrorDelegate.generated.h already included, missing '#pragma once' in EOSLobbyJoinErrorDelegate.h"
#endif
#define ABP_200508_EOSLobbyJoinErrorDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_EOSLobbyJoinErrorDelegate_h_7_DELEGATE \
struct _Script_ABP_200508_eventEOSLobbyJoinError_Parms \
{ \
	FLobbyInvite InLobbyInvite; \
	ELobbyInviteError OutReason; \
}; \
static inline void FEOSLobbyJoinError_DelegateWrapper(const FMulticastScriptDelegate& EOSLobbyJoinError, FLobbyInvite InLobbyInvite, ELobbyInviteError OutReason) \
{ \
	_Script_ABP_200508_eventEOSLobbyJoinError_Parms Parms; \
	Parms.InLobbyInvite=InLobbyInvite; \
	Parms.OutReason=OutReason; \
	EOSLobbyJoinError.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EOSLobbyJoinErrorDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
