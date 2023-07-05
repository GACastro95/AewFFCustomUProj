// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSSessionNotificationType_generated_h
#error "EEOSSessionNotificationType.generated.h already included, missing '#pragma once' in EEOSSessionNotificationType.h"
#endif
#define YEOSSDK_EEOSSessionNotificationType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSSessionNotificationType_h


#define FOREACH_ENUM_EEOSSESSIONNOTIFICATIONTYPE(op) \
	op(EEOSSessionNotificationType::UpdateReceived) \
	op(EEOSSessionNotificationType::MemberUpdateReceived) \
	op(EEOSSessionNotificationType::UpdateMemberDescription) \
	op(EEOSSessionNotificationType::SesionGameStarted) \
	op(EEOSSessionNotificationType::SesionGameEnded) \
	op(EEOSSessionNotificationType::Accepted) \
	op(EEOSSessionNotificationType::Blocked) \
	op(EEOSSessionNotificationType::SessionFull) \
	op(EEOSSessionNotificationType::SessionAlreadyStarted) \
	op(EEOSSessionNotificationType::SessionAlreadyEnded) 

enum class EEOSSessionNotificationType : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSSessionNotificationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
