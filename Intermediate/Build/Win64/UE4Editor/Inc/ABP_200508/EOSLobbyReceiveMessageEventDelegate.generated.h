// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSUserBase;
#ifdef ABP_200508_EOSLobbyReceiveMessageEventDelegate_generated_h
#error "EOSLobbyReceiveMessageEventDelegate.generated.h already included, missing '#pragma once' in EOSLobbyReceiveMessageEventDelegate.h"
#endif
#define ABP_200508_EOSLobbyReceiveMessageEventDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_EOSLobbyReceiveMessageEventDelegate_h_7_DELEGATE \
struct _Script_ABP_200508_eventEOSLobbyReceiveMessageEvent_Parms \
{ \
	UEOSUserBase* _User; \
	FString _DisplayName; \
	FString _Message; \
}; \
static inline void FEOSLobbyReceiveMessageEvent_DelegateWrapper(const FMulticastScriptDelegate& EOSLobbyReceiveMessageEvent, UEOSUserBase* _User, const FString& _DisplayName, const FString& _Message) \
{ \
	_Script_ABP_200508_eventEOSLobbyReceiveMessageEvent_Parms Parms; \
	Parms._User=_User; \
	Parms._DisplayName=_DisplayName; \
	Parms._Message=_Message; \
	EOSLobbyReceiveMessageEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EOSLobbyReceiveMessageEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
