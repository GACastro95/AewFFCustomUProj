// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEOSUserBase;
class ULobbyPacketPrivateMatchNotify;
#ifdef ABP_200508_OnMiniGameNotifyDelegate_generated_h
#error "OnMiniGameNotifyDelegate.generated.h already included, missing '#pragma once' in OnMiniGameNotifyDelegate.h"
#endif
#define ABP_200508_OnMiniGameNotifyDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_OnMiniGameNotifyDelegate_h_8_DELEGATE \
struct _Script_ABP_200508_eventOnMiniGameNotify_Parms \
{ \
	UEOSUserBase* Owner; \
	ULobbyPacketPrivateMatchNotify* Notify; \
}; \
static inline void FOnMiniGameNotify_DelegateWrapper(const FScriptDelegate& OnMiniGameNotify, UEOSUserBase* Owner, ULobbyPacketPrivateMatchNotify* Notify) \
{ \
	_Script_ABP_200508_eventOnMiniGameNotify_Parms Parms; \
	Parms.Owner=Owner; \
	Parms.Notify=Notify; \
	OnMiniGameNotify.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_OnMiniGameNotifyDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
