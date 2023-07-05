// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ELobbyPacketPrivateMatchNotify_generated_h
#error "ELobbyPacketPrivateMatchNotify.generated.h already included, missing '#pragma once' in ELobbyPacketPrivateMatchNotify.h"
#endif
#define ABP_200508_ELobbyPacketPrivateMatchNotify_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELobbyPacketPrivateMatchNotify_h


#define FOREACH_ENUM_ELOBBYPACKETPRIVATEMATCHNOTIFY(op) \
	op(ELobbyPacketPrivateMatchNotify::MatchCancel) \
	op(ELobbyPacketPrivateMatchNotify::MovePositionSelect) \
	op(ELobbyPacketPrivateMatchNotify::MoveWrestlerSelect) \
	op(ELobbyPacketPrivateMatchNotify::MatchStart) \
	op(ELobbyPacketPrivateMatchNotify::MatchStartCancel) \
	op(ELobbyPacketPrivateMatchNotify::MatchReady) \
	op(ELobbyPacketPrivateMatchNotify::MatchUnready) \
	op(ELobbyPacketPrivateMatchNotify::MatchUnready_Accept) \
	op(ELobbyPacketPrivateMatchNotify::MatchUnready_Reject) \
	op(ELobbyPacketPrivateMatchNotify::MatchCancelRequest) \
	op(ELobbyPacketPrivateMatchNotify::MoveMiniGameSelect) \
	op(ELobbyPacketPrivateMatchNotify::MoveNextMenu) \
	op(ELobbyPacketPrivateMatchNotify::MiniGameStartOwnerSelect) \
	op(ELobbyPacketPrivateMatchNotify::MiniGameEndOwnerSelect) \
	op(ELobbyPacketPrivateMatchNotify::MiniGameWaitReceiveStatus) \
	op(ELobbyPacketPrivateMatchNotify::MoveOnMainMenu) \
	op(ELobbyPacketPrivateMatchNotify::RequestResendCurrentWrestler) \
	op(ELobbyPacketPrivateMatchNotify::Test) 

enum class ELobbyPacketPrivateMatchNotify : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ELobbyPacketPrivateMatchNotify>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
