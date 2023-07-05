// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSAchievementEvent_generated_h
#error "EEOSAchievementEvent.generated.h already included, missing '#pragma once' in EEOSAchievementEvent.h"
#endif
#define YEOSSDK_EEOSAchievementEvent_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSAchievementEvent_h


#define FOREACH_ENUM_EEOSACHIEVEMENTEVENT(op) \
	op(EEOSAchievementEvent::Unlocked) \
	op(EEOSAchievementEvent::QueryDefinitions) \
	op(EEOSAchievementEvent::QueryDefinitionsErr) \
	op(EEOSAchievementEvent::QueryPlayer) \
	op(EEOSAchievementEvent::QueryPlayerErr) \
	op(EEOSAchievementEvent::Unlock) \
	op(EEOSAchievementEvent::UnlockErr) 

enum class EEOSAchievementEvent : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSAchievementEvent>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
