// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSConnectionClosedReason_generated_h
#error "EEOSConnectionClosedReason.generated.h already included, missing '#pragma once' in EEOSConnectionClosedReason.h"
#endif
#define YEOSSDK_EEOSConnectionClosedReason_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSConnectionClosedReason_h


#define FOREACH_ENUM_EEOSCONNECTIONCLOSEDREASON(op) \
	op(EEOSConnectionClosedReason::Unknown) \
	op(EEOSConnectionClosedReason::ClosedByLocalUser) \
	op(EEOSConnectionClosedReason::ClosedByPeer) \
	op(EEOSConnectionClosedReason::TimedOut) \
	op(EEOSConnectionClosedReason::TooManyConnections) \
	op(EEOSConnectionClosedReason::InvalidMessage) \
	op(EEOSConnectionClosedReason::InvalidData) \
	op(EEOSConnectionClosedReason::ConnectionFailed) \
	op(EEOSConnectionClosedReason::ConnectionClosed) \
	op(EEOSConnectionClosedReason::NegotiationFailed) \
	op(EEOSConnectionClosedReason::UnexpectedError) 

enum class EEOSConnectionClosedReason : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSConnectionClosedReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
