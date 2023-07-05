// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSSessionHostMigrationEvent_generated_h
#error "EEOSSessionHostMigrationEvent.generated.h already included, missing '#pragma once' in EEOSSessionHostMigrationEvent.h"
#endif
#define YEOSSDK_EEOSSessionHostMigrationEvent_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSSessionHostMigrationEvent_h


#define FOREACH_ENUM_EEOSSESSIONHOSTMIGRATIONEVENT(op) \
	op(EEOSSessionHostMigrationEvent::None) \
	op(EEOSSessionHostMigrationEvent::ExchangedLatencyInfo) \
	op(EEOSSessionHostMigrationEvent::DetectedLostHost) \
	op(EEOSSessionHostMigrationEvent::DetectedQuitGame) \
	op(EEOSSessionHostMigrationEvent::ReceivedLostHost) \
	op(EEOSSessionHostMigrationEvent::ReceivedQuitGame) \
	op(EEOSSessionHostMigrationEvent::UpdatedHostMigrationStatus) \
	op(EEOSSessionHostMigrationEvent::ChangeHost) \
	op(EEOSSessionHostMigrationEvent::LeaveOldSession) \
	op(EEOSSessionHostMigrationEvent::LeaveOldSessionErr) \
	op(EEOSSessionHostMigrationEvent::CreateSession) \
	op(EEOSSessionHostMigrationEvent::CreateSessionErr) \
	op(EEOSSessionHostMigrationEvent::InviteSession) \
	op(EEOSSessionHostMigrationEvent::InviteSessionErr) \
	op(EEOSSessionHostMigrationEvent::JoinNewSession) \
	op(EEOSSessionHostMigrationEvent::JoinNewSessionErr) \
	op(EEOSSessionHostMigrationEvent::InviteReceived) \
	op(EEOSSessionHostMigrationEvent::RetryAPI) \
	op(EEOSSessionHostMigrationEvent::RetryOnTimeout) \
	op(EEOSSessionHostMigrationEvent::Fixed) 

enum class EEOSSessionHostMigrationEvent : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSSessionHostMigrationEvent>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
