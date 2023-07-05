// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundAtomCue;
#ifdef CRIWARERUNTIME_OnWavePlaybackPercentDelegate_generated_h
#error "OnWavePlaybackPercentDelegate.generated.h already included, missing '#pragma once' in OnWavePlaybackPercentDelegate.h"
#endif
#define CRIWARERUNTIME_OnWavePlaybackPercentDelegate_generated_h

#define AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_OnWavePlaybackPercentDelegate_h_7_DELEGATE \
struct _Script_CriWareRuntime_eventOnWavePlaybackPercent_Parms \
{ \
	const USoundAtomCue* PlayingAtomCue; \
	int32 WaveId; \
	float PlaybackPercent; \
}; \
static inline void FOnWavePlaybackPercent_DelegateWrapper(const FMulticastScriptDelegate& OnWavePlaybackPercent, const USoundAtomCue* PlayingAtomCue, int32 WaveId, const float PlaybackPercent) \
{ \
	_Script_CriWareRuntime_eventOnWavePlaybackPercent_Parms Parms; \
	Parms.PlayingAtomCue=PlayingAtomCue; \
	Parms.WaveId=WaveId; \
	Parms.PlaybackPercent=PlaybackPercent; \
	OnWavePlaybackPercent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_OnWavePlaybackPercentDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
