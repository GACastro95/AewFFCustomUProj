// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ELobbyCheckStepForHost_generated_h
#error "ELobbyCheckStepForHost.generated.h already included, missing '#pragma once' in ELobbyCheckStepForHost.h"
#endif
#define ABP_200508_ELobbyCheckStepForHost_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELobbyCheckStepForHost_h


#define FOREACH_ENUM_ELOBBYCHECKSTEPFORHOST(op) \
	op(ELobbyCheckStepForHost::None) \
	op(ELobbyCheckStepForHost::MemberJoined) \
	op(ELobbyCheckStepForHost::MemberUpdatedAfterMemberJoined) \
	op(ELobbyCheckStepForHost::Callback) \
	op(ELobbyCheckStepForHost::CallbackAfterMemberJoined) \
	op(ELobbyCheckStepForHost::Canceled_AccountType) 

enum class ELobbyCheckStepForHost : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ELobbyCheckStepForHost>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
