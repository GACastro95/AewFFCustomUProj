// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ELobbyPrivateMatchStatus_generated_h
#error "ELobbyPrivateMatchStatus.generated.h already included, missing '#pragma once' in ELobbyPrivateMatchStatus.h"
#endif
#define ABP_200508_ELobbyPrivateMatchStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELobbyPrivateMatchStatus_h


#define FOREACH_ENUM_ELOBBYPRIVATEMATCHSTATUS(op) \
	op(ELobbyPrivateMatchStatus::None) \
	op(ELobbyPrivateMatchStatus::Wait) \
	op(ELobbyPrivateMatchStatus::Ready) \
	op(ELobbyPrivateMatchStatus::MatchStart) 

enum class ELobbyPrivateMatchStatus : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ELobbyPrivateMatchStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
