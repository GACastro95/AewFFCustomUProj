// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EMoviePlayerEvent_generated_h
#error "EMoviePlayerEvent.generated.h already included, missing '#pragma once' in EMoviePlayerEvent.h"
#endif
#define ABP_200508_EMoviePlayerEvent_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EMoviePlayerEvent_h


#define FOREACH_ENUM_EMOVIEPLAYEREVENT(op) \
	op(EMoviePlayerEvent::Opened) \
	op(EMoviePlayerEvent::OpenFailed) \
	op(EMoviePlayerEvent::Closed) \
	op(EMoviePlayerEvent::Prepared) \
	op(EMoviePlayerEvent::Suspended) \
	op(EMoviePlayerEvent::Resumed) \
	op(EMoviePlayerEvent::Seeked) \
	op(EMoviePlayerEvent::PlaybackEnd) \
	op(EMoviePlayerEvent::TrackChanged) 

enum class EMoviePlayerEvent : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EMoviePlayerEvent>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
