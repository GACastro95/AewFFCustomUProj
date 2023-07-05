// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRIWARERUNTIME_EAtomWavePlayState_generated_h
#error "EAtomWavePlayState.generated.h already included, missing '#pragma once' in EAtomWavePlayState.h"
#endif
#define CRIWARERUNTIME_EAtomWavePlayState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_Runtime_CriWare_CriWare_Source_CriWareRuntime_Public_EAtomWavePlayState_h


#define FOREACH_ENUM_EATOMWAVEPLAYSTATE(op) \
	op(EAtomWavePlayState::Playing) \
	op(EAtomWavePlayState::Stopped) \
	op(EAtomWavePlayState::Paused) \
	op(EAtomWavePlayState::FadingIn) \
	op(EAtomWavePlayState::FadingOut) \
	op(EAtomWavePlayState::Count) 

enum class EAtomWavePlayState : uint8;
template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomWavePlayState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
