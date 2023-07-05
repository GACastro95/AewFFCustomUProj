// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_eSSLobbyState_generated_h
#error "eSSLobbyState.generated.h already included, missing '#pragma once' in eSSLobbyState.h"
#endif
#define ABP_200508_eSSLobbyState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_eSSLobbyState_h


#define FOREACH_ENUM_ESSLOBBYSTATE(op) \
	op(eSSLobbyState::eSSLobbyState_None) \
	op(eSSLobbyState::eSSLobbyState_LobbyCheck) \
	op(eSSLobbyState::eSSLobbyState_GameStart) \
	op(eSSLobbyState::eSSLobbyState_HotTestSetup) \
	op(eSSLobbyState::eSSLobbyState_HotPlayer) \
	op(eSSLobbyState::eSSLobbyState_END) \
	op(eSSLobbyState::eSSLobbyState_EmptyLobby) 

enum class eSSLobbyState : uint8;
template<> ABP_200508_API UEnum* StaticEnum<eSSLobbyState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
