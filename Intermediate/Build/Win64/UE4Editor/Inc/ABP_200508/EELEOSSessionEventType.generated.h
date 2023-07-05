// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EELEOSSessionEventType_generated_h
#error "EELEOSSessionEventType.generated.h already included, missing '#pragma once' in EELEOSSessionEventType.h"
#endif
#define ABP_200508_EELEOSSessionEventType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EELEOSSessionEventType_h


#define FOREACH_ENUM_EELEOSSESSIONEVENTTYPE(op) \
	op(EELEOSSessionEventType::SessionSearch) \
	op(EELEOSSessionEventType::SessionSearchResult) \
	op(EELEOSSessionEventType::SessionSearchEnd) \
	op(EELEOSSessionEventType::SessionSearchCancel) \
	op(EELEOSSessionEventType::GameSessionCreated) \
	op(EELEOSSessionEventType::SessionCreate) \
	op(EELEOSSessionEventType::SessionDestroyed) \
	op(EELEOSSessionEventType::SessionJoin) \
	op(EELEOSSessionEventType::SessionLeave) \
	op(EELEOSSessionEventType::SessionGameStart) \
	op(EELEOSSessionEventType::SessionGameEnd) \
	op(EELEOSSessionEventType::Start) \
	op(EELEOSSessionEventType::End) \
	op(EELEOSSessionEventType::UpdateSessionMember) \
	op(EELEOSSessionEventType::ReceivePlayerData) \
	op(EELEOSSessionEventType::ReceiveWrestlerData) \
	op(EELEOSSessionEventType::ReceiveArenaData) \
	op(EELEOSSessionEventType::ReceiveMatchRuleData) \
	op(EELEOSSessionEventType::UpdatePlayerStateData) \
	op(EELEOSSessionEventType::Disconnected) \
	op(EELEOSSessionEventType::ReceiveInvite) \
	op(EELEOSSessionEventType::Release) 

enum class EELEOSSessionEventType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EELEOSSessionEventType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
