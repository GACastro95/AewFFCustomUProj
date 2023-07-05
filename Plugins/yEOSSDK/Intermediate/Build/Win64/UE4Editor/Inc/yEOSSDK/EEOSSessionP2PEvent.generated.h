// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSSessionP2PEvent_generated_h
#error "EEOSSessionP2PEvent.generated.h already included, missing '#pragma once' in EEOSSessionP2PEvent.h"
#endif
#define YEOSSDK_EEOSSessionP2PEvent_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSSessionP2PEvent_h


#define FOREACH_ENUM_EEOSSESSIONP2PEVENT(op) \
	op(EEOSSessionP2PEvent::GetNatType) \
	op(EEOSSessionP2PEvent::GetNatTypeErr) \
	op(EEOSSessionP2PEvent::IncommingPlayer) \
	op(EEOSSessionP2PEvent::ConnectedPlayer) \
	op(EEOSSessionP2PEvent::DisconnectedPlayer) \
	op(EEOSSessionP2PEvent::ReceivedPacket) \
	op(EEOSSessionP2PEvent::ReceivedSynchronizedPacket) \
	op(EEOSSessionP2PEvent::LatencyCheck) \
	op(EEOSSessionP2PEvent::LatencyCheckErr) \
	op(EEOSSessionP2PEvent::ClosedSocket) \
	op(EEOSSessionP2PEvent::ClosedSocketErr) \
	op(EEOSSessionP2PEvent::LeaveSession) \
	op(EEOSSessionP2PEvent::HostMigration) \
	op(EEOSSessionP2PEvent::HostMigration_Owner) \
	op(EEOSSessionP2PEvent::AllPlayersLeaved) 

enum class EEOSSessionP2PEvent : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSSessionP2PEvent>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
