// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ELobbyPacketNotifyType_generated_h
#error "ELobbyPacketNotifyType.generated.h already included, missing '#pragma once' in ELobbyPacketNotifyType.h"
#endif
#define ABP_200508_ELobbyPacketNotifyType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELobbyPacketNotifyType_h


#define FOREACH_ENUM_ELOBBYPACKETNOTIFYTYPE(op) \
	op(ELobbyPacketNotifyType::MatchCancel) \
	op(ELobbyPacketNotifyType::MovePositionSelect) \
	op(ELobbyPacketNotifyType::MoveWrestlerSelect) \
	op(ELobbyPacketNotifyType::MatchStart) \
	op(ELobbyPacketNotifyType::MatchStartCancel) \
	op(ELobbyPacketNotifyType::MatchReady) \
	op(ELobbyPacketNotifyType::MatchUnready) \
	op(ELobbyPacketNotifyType::MatchUnready_Accept) \
	op(ELobbyPacketNotifyType::MatchUnready_Reject) \
	op(ELobbyPacketNotifyType::MatchCancelRequest) \
	op(ELobbyPacketNotifyType::MatchLeave) \
	op(ELobbyPacketNotifyType::MoveMiniGameSelect) \
	op(ELobbyPacketNotifyType::MoveNextMenu) \
	op(ELobbyPacketNotifyType::MiniGameStartOwnerSelect) \
	op(ELobbyPacketNotifyType::MiniGameEndOwnerSelect) \
	op(ELobbyPacketNotifyType::MiniGameWaitReceiveStatus) \
	op(ELobbyPacketNotifyType::MoveOnMainMenu) \
	op(ELobbyPacketNotifyType::RequestResendCurrentWrestler) \
	op(ELobbyPacketNotifyType::Test) 

enum class ELobbyPacketNotifyType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ELobbyPacketNotifyType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
