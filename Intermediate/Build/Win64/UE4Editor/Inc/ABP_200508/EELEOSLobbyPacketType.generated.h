// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EELEOSLobbyPacketType_generated_h
#error "EELEOSLobbyPacketType.generated.h already included, missing '#pragma once' in EELEOSLobbyPacketType.h"
#endif
#define ABP_200508_EELEOSLobbyPacketType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EELEOSLobbyPacketType_h


#define FOREACH_ENUM_EELEOSLOBBYPACKETTYPE(op) \
	op(EELEOSLobbyPacketType::Chat) \
	op(EELEOSLobbyPacketType::PrivateMatchNotify) \
	op(EELEOSLobbyPacketType::InvitePrivateMatchRequest) \
	op(EELEOSLobbyPacketType::InvitePrivateMatchResponse) \
	op(EELEOSLobbyPacketType::PrivateMatchPlayerIndex) \
	op(EELEOSLobbyPacketType::PrivateMatchMenuInput) \
	op(EELEOSLobbyPacketType::PrivateMatchMenuInputSync) \
	op(EELEOSLobbyPacketType::PositionSelectInput) \
	op(EELEOSLobbyPacketType::PositionSelectInputResult) \
	op(EELEOSLobbyPacketType::WrestlerData) \
	op(EELEOSLobbyPacketType::MatchupWrestlerData0) \
	op(EELEOSLobbyPacketType::MatchupWrestlerData1) \
	op(EELEOSLobbyPacketType::MatchupWrestlerData2) \
	op(EELEOSLobbyPacketType::MatchupWrestlerData3) \
	op(EELEOSLobbyPacketType::MatchupWrestlerData4) \
	op(EELEOSLobbyPacketType::MatchupWrestlerData5) \
	op(EELEOSLobbyPacketType::MatchupWrestlerData6) \
	op(EELEOSLobbyPacketType::MatchupWrestlerData7) \
	op(EELEOSLobbyPacketType::SelectNPCWrestlerData) \
	op(EELEOSLobbyPacketType::NPCWrestlerData) \
	op(EELEOSLobbyPacketType::SelectArenaData) \
	op(EELEOSLobbyPacketType::SelectMinigameData) \
	op(EELEOSLobbyPacketType::MiniGameInfo) \
	op(EELEOSLobbyPacketType::MiniGameSteps) \
	op(EELEOSLobbyPacketType::MiniGameOwnerSelectInfo) \
	op(EELEOSLobbyPacketType::Request) 

enum class EELEOSLobbyPacketType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EELEOSLobbyPacketType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
