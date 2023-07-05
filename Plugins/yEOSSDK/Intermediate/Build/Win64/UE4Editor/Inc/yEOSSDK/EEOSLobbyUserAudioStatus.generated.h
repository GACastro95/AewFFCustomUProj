// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSLobbyUserAudioStatus_generated_h
#error "EEOSLobbyUserAudioStatus.generated.h already included, missing '#pragma once' in EEOSLobbyUserAudioStatus.h"
#endif
#define YEOSSDK_EEOSLobbyUserAudioStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSLobbyUserAudioStatus_h


#define FOREACH_ENUM_EEOSLOBBYUSERAUDIOSTATUS(op) \
	op(EEOSLobbyUserAudioStatus::Unsupported) \
	op(EEOSLobbyUserAudioStatus::Enabled) \
	op(EEOSLobbyUserAudioStatus::Disabled) \
	op(EEOSLobbyUserAudioStatus::AdminDisabled) \
	op(EEOSLobbyUserAudioStatus::NotListeningDisabled) 

enum class EEOSLobbyUserAudioStatus : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSLobbyUserAudioStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
