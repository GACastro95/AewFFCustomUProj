// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMoviePlayerEvent : uint8;
class UELMoviePlayerBase;
#ifdef ABP_200508_MoviePlayerEventDelegate_generated_h
#error "MoviePlayerEventDelegate.generated.h already included, missing '#pragma once' in MoviePlayerEventDelegate.h"
#endif
#define ABP_200508_MoviePlayerEventDelegate_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_MoviePlayerEventDelegate_h_8_DELEGATE \
struct _Script_ABP_200508_eventMoviePlayerEvent_Parms \
{ \
	EMoviePlayerEvent EventType; \
	UELMoviePlayerBase* ELMoviePlayerBase; \
}; \
static inline void FMoviePlayerEvent_DelegateWrapper(const FMulticastScriptDelegate& MoviePlayerEvent, EMoviePlayerEvent EventType, UELMoviePlayerBase* ELMoviePlayerBase) \
{ \
	_Script_ABP_200508_eventMoviePlayerEvent_Parms Parms; \
	Parms.EventType=EventType; \
	Parms.ELMoviePlayerBase=ELMoviePlayerBase; \
	MoviePlayerEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_MoviePlayerEventDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
