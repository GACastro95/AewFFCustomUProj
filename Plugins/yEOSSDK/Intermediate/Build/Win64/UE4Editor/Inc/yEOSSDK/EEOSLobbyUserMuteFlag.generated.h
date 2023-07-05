// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSLobbyUserMuteFlag_generated_h
#error "EEOSLobbyUserMuteFlag.generated.h already included, missing '#pragma once' in EEOSLobbyUserMuteFlag.h"
#endif
#define YEOSSDK_EEOSLobbyUserMuteFlag_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSLobbyUserMuteFlag_h


#define FOREACH_ENUM_EEOSLOBBYUSERMUTEFLAG(op) \
	op(EEOSLobbyUserMuteFlag::None) \
	op(EEOSLobbyUserMuteFlag::Player) \
	op(EEOSLobbyUserMuteFlag::System) \
	op(EEOSLobbyUserMuteFlag::Game) \
	op(EEOSLobbyUserMuteFlag::Game1) \
	op(EEOSLobbyUserMuteFlag::ConsoleSsytemChatMenu) \
	op(EEOSLobbyUserMuteFlag::ConsoleSystemChatMenu) \
	op(EEOSLobbyUserMuteFlag::ConsoleSystemPrivacy) 

enum class EEOSLobbyUserMuteFlag : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSLobbyUserMuteFlag>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
