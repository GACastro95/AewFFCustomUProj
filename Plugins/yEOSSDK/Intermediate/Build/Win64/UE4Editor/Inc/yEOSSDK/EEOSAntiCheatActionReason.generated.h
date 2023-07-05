// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSAntiCheatActionReason_generated_h
#error "EEOSAntiCheatActionReason.generated.h already included, missing '#pragma once' in EEOSAntiCheatActionReason.h"
#endif
#define YEOSSDK_EEOSAntiCheatActionReason_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSAntiCheatActionReason_h


#define FOREACH_ENUM_EEOSANTICHEATACTIONREASON(op) \
	op(EEOSAntiCheatActionReason::Invalid) \
	op(EEOSAntiCheatActionReason::InternalError) \
	op(EEOSAntiCheatActionReason::InvalidMessage) \
	op(EEOSAntiCheatActionReason::AuthenticationFailed) \
	op(EEOSAntiCheatActionReason::NullClient) \
	op(EEOSAntiCheatActionReason::HeartbeatTimeout) \
	op(EEOSAntiCheatActionReason::ClientViolation) \
	op(EEOSAntiCheatActionReason::BackendViolation) \
	op(EEOSAntiCheatActionReason::TemporaryCooldown) \
	op(EEOSAntiCheatActionReason::TemporaryBanned) \
	op(EEOSAntiCheatActionReason::PermanentBanned) 

enum class EEOSAntiCheatActionReason : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSAntiCheatActionReason>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
