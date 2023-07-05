// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARERUNTIME_EManaPlaybackTimer_generated_h
#error "EManaPlaybackTimer.generated.h already included, missing '#pragma once' in EManaPlaybackTimer.h"
#endif
#define CRIWARERUNTIME_EManaPlaybackTimer_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EManaPlaybackTimer_h


#define FOREACH_ENUM_EMANAPLAYBACKTIMER(op) \
	op(EManaPlaybackTimer::Default) \
	op(EManaPlaybackTimer::RealTime) \
	op(EManaPlaybackTimer::FrameTime) \
	op(EManaPlaybackTimer::Manual) 

enum class EManaPlaybackTimer : uint8;
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EManaPlaybackTimer>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
