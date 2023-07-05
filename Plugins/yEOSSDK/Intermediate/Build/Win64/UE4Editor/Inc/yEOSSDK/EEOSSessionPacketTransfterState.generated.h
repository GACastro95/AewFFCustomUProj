// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSSessionPacketTransfterState_generated_h
#error "EEOSSessionPacketTransfterState.generated.h already included, missing '#pragma once' in EEOSSessionPacketTransfterState.h"
#endif
#define YEOSSDK_EEOSSessionPacketTransfterState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSSessionPacketTransfterState_h


#define FOREACH_ENUM_EEOSSESSIONPACKETTRANSFTERSTATE(op) \
	op(EEOSSessionPacketTransfterState::None) \
	op(EEOSSessionPacketTransfterState::Sending) \
	op(EEOSSessionPacketTransfterState::Sent) \
	op(EEOSSessionPacketTransfterState::Compare) \
	op(EEOSSessionPacketTransfterState::Compare_Sent) \
	op(EEOSSessionPacketTransfterState::OW_Sending) \
	op(EEOSSessionPacketTransfterState::OW_Sent) \
	op(EEOSSessionPacketTransfterState::ReceivedResult) \
	op(EEOSSessionPacketTransfterState::Sent_Result) \
	op(EEOSSessionPacketTransfterState::APIError) 

enum class EEOSSessionPacketTransfterState : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSSessionPacketTransfterState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
