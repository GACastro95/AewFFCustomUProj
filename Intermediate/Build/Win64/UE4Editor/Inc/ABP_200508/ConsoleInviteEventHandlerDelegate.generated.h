// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ConsoleInviteEventHandlerDelegate_generated_h
#error "ConsoleInviteEventHandlerDelegate.generated.h already included, missing '#pragma once' in ConsoleInviteEventHandlerDelegate.h"
#endif
#define ABP_200508_ConsoleInviteEventHandlerDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ConsoleInviteEventHandlerDelegate_h_5_DELEGATE \
struct _Script_ABP_200508_eventConsoleInviteEventHandler_Parms \
{ \
	FString _lobbyID; \
}; \
static inline void FConsoleInviteEventHandler_DelegateWrapper(const FMulticastScriptDelegate& ConsoleInviteEventHandler, const FString& _lobbyID) \
{ \
	_Script_ABP_200508_eventConsoleInviteEventHandler_Parms Parms; \
	Parms._lobbyID=_lobbyID; \
	ConsoleInviteEventHandler.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ConsoleInviteEventHandlerDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
