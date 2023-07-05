// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEOSLeaderboardEvent : uint8;
class UEOSLeaderboard;
#ifdef YEOSSDK_EOSLeaderboardEventDispatcherDelegate_generated_h
#error "EOSLeaderboardEventDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSLeaderboardEventDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSLeaderboardEventDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLeaderboardEventDispatcherDelegate_h_8_DELEGATE \
struct _Script_yEOSSDK_eventEOSLeaderboardEventDispatcher_Parms \
{ \
	EEOSLeaderboardEvent EOSLeaderboardEvent; \
	UEOSLeaderboard* EOSLeaderboard; \
}; \
static inline void FEOSLeaderboardEventDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSLeaderboardEventDispatcher, EEOSLeaderboardEvent EOSLeaderboardEvent, UEOSLeaderboard* EOSLeaderboard) \
{ \
	_Script_yEOSSDK_eventEOSLeaderboardEventDispatcher_Parms Parms; \
	Parms.EOSLeaderboardEvent=EOSLeaderboardEvent; \
	Parms.EOSLeaderboard=EOSLeaderboard; \
	EOSLeaderboardEventDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLeaderboardEventDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
