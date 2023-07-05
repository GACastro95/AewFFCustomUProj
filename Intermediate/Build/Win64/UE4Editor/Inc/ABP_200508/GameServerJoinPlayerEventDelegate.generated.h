// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
struct FSSOnlinePlayerData;
#ifdef ABP_200508_GameServerJoinPlayerEventDelegate_generated_h
#error "GameServerJoinPlayerEventDelegate.generated.h already included, missing '#pragma once' in GameServerJoinPlayerEventDelegate.h"
#endif
#define ABP_200508_GameServerJoinPlayerEventDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_GameServerJoinPlayerEventDelegate_h_8_DELEGATE \
struct _Script_ABP_200508_eventGameServerJoinPlayerEvent_Parms \
{ \
	APlayerController* pController; \
	FSSOnlinePlayerData PlayerData; \
	bool isLogin; \
}; \
static inline void FGameServerJoinPlayerEvent_DelegateWrapper(const FMulticastScriptDelegate& GameServerJoinPlayerEvent, APlayerController* pController, FSSOnlinePlayerData const& PlayerData, bool isLogin) \
{ \
	_Script_ABP_200508_eventGameServerJoinPlayerEvent_Parms Parms; \
	Parms.pController=pController; \
	Parms.PlayerData=PlayerData; \
	Parms.isLogin=isLogin ? true : false; \
	GameServerJoinPlayerEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_GameServerJoinPlayerEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
