// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSFriendStatus_generated_h
#error "EEOSFriendStatus.generated.h already included, missing '#pragma once' in EEOSFriendStatus.h"
#endif
#define YEOSSDK_EEOSFriendStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSFriendStatus_h


#define FOREACH_ENUM_EEOSFRIENDSTATUS(op) \
	op(EEOSFriendStatus::NotFriends) \
	op(EEOSFriendStatus::InviteSent) \
	op(EEOSFriendStatus::InviteReceived) \
	op(EEOSFriendStatus::Friends) 

enum class EEOSFriendStatus : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSFriendStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
