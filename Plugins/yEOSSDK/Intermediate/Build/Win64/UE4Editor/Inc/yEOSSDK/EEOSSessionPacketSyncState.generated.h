// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSSessionPacketSyncState_generated_h
#error "EEOSSessionPacketSyncState.generated.h already included, missing '#pragma once' in EEOSSessionPacketSyncState.h"
#endif
#define YEOSSDK_EEOSSessionPacketSyncState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSSessionPacketSyncState_h


#define FOREACH_ENUM_EEOSSESSIONPACKETSYNCSTATE(op) \
	op(EEOSSessionPacketSyncState::None) \
	op(EEOSSessionPacketSyncState::Update) \
	op(EEOSSessionPacketSyncState::Compare) \
	op(EEOSSessionPacketSyncState::Compare_Synchronized) \
	op(EEOSSessionPacketSyncState::Retry) \
	op(EEOSSessionPacketSyncState::Synchronized) 

enum class EEOSSessionPacketSyncState : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSSessionPacketSyncState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
