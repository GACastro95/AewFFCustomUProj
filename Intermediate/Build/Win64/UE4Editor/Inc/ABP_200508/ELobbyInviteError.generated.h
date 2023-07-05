// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ELobbyInviteError_generated_h
#error "ELobbyInviteError.generated.h already included, missing '#pragma once' in ELobbyInviteError.h"
#endif
#define ABP_200508_ELobbyInviteError_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELobbyInviteError_h


#define FOREACH_ENUM_ELOBBYINVITEERROR(op) \
	op(ELobbyInviteError::None) \
	op(ELobbyInviteError::Timeout) \
	op(ELobbyInviteError::OfflineLobbyOwner) \
	op(ELobbyInviteError::PartyMemberIsFull) \
	op(ELobbyInviteError::PartyUnableJoin) \
	op(ELobbyInviteError::PartyJoinFailed) 

enum class ELobbyInviteError : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ELobbyInviteError>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
