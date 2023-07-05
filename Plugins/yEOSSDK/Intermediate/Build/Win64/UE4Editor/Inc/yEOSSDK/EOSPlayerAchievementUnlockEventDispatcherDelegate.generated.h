// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEOSPlayerAchievementUnlockInfo;
#ifdef YEOSSDK_EOSPlayerAchievementUnlockEventDispatcherDelegate_generated_h
#error "EOSPlayerAchievementUnlockEventDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSPlayerAchievementUnlockEventDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSPlayerAchievementUnlockEventDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSPlayerAchievementUnlockEventDispatcherDelegate_h_6_DELEGATE \
struct _Script_yEOSSDK_eventEOSPlayerAchievementUnlockEventDispatcher_Parms \
{ \
	FEOSPlayerAchievementUnlockInfo EOSPlayerAchievementUnlockInfo; \
}; \
static inline void FEOSPlayerAchievementUnlockEventDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSPlayerAchievementUnlockEventDispatcher, FEOSPlayerAchievementUnlockInfo EOSPlayerAchievementUnlockInfo) \
{ \
	_Script_yEOSSDK_eventEOSPlayerAchievementUnlockEventDispatcher_Parms Parms; \
	Parms.EOSPlayerAchievementUnlockInfo=EOSPlayerAchievementUnlockInfo; \
	EOSPlayerAchievementUnlockEventDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSPlayerAchievementUnlockEventDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
