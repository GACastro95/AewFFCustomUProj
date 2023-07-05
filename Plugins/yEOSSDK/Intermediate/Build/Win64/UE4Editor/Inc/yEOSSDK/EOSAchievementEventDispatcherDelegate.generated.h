// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EEOSAchievementEvent : uint8;
class UEOSAchievement;
#ifdef YEOSSDK_EOSAchievementEventDispatcherDelegate_generated_h
#error "EOSAchievementEventDispatcherDelegate.generated.h already included, missing '#pragma once' in EOSAchievementEventDispatcherDelegate.h"
#endif
#define YEOSSDK_EOSAchievementEventDispatcherDelegate_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAchievementEventDispatcherDelegate_h_8_DELEGATE \
struct _Script_yEOSSDK_eventEOSAchievementEventDispatcher_Parms \
{ \
	EEOSAchievementEvent EOSAchievementEvent; \
	UEOSAchievement* EOSAchievement; \
}; \
static inline void FEOSAchievementEventDispatcher_DelegateWrapper(const FMulticastScriptDelegate& EOSAchievementEventDispatcher, EEOSAchievementEvent EOSAchievementEvent, UEOSAchievement* EOSAchievement) \
{ \
	_Script_yEOSSDK_eventEOSAchievementEventDispatcher_Parms Parms; \
	Parms.EOSAchievementEvent=EOSAchievementEvent; \
	Parms.EOSAchievement=EOSAchievement; \
	EOSAchievementEventDispatcher.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSAchievementEventDispatcherDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
