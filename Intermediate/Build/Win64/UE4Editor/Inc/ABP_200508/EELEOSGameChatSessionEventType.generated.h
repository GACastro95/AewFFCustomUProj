// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EELEOSGameChatSessionEventType_generated_h
#error "EELEOSGameChatSessionEventType.generated.h already included, missing '#pragma once' in EELEOSGameChatSessionEventType.h"
#endif
#define ABP_200508_EELEOSGameChatSessionEventType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EELEOSGameChatSessionEventType_h


#define FOREACH_ENUM_EELEOSGAMECHATSESSIONEVENTTYPE(op) \
	op(EELEOSGameChatSessionEventType::VoiceChatEnabled) \
	op(EELEOSGameChatSessionEventType::VoiceChatDisabled) \
	op(EELEOSGameChatSessionEventType::VoiceChatUnsupported) \
	op(EELEOSGameChatSessionEventType::Mute) \
	op(EELEOSGameChatSessionEventType::Unmute) \
	op(EELEOSGameChatSessionEventType::StartSpeaking) \
	op(EELEOSGameChatSessionEventType::StopSpeaking) \
	op(EELEOSGameChatSessionEventType::Block) \
	op(EELEOSGameChatSessionEventType::Unblock) 

enum class EELEOSGameChatSessionEventType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EELEOSGameChatSessionEventType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
