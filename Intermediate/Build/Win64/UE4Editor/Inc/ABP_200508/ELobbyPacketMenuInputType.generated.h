// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ELobbyPacketMenuInputType_generated_h
#error "ELobbyPacketMenuInputType.generated.h already included, missing '#pragma once' in ELobbyPacketMenuInputType.h"
#endif
#define ABP_200508_ELobbyPacketMenuInputType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELobbyPacketMenuInputType_h


#define FOREACH_ENUM_ELOBBYPACKETMENUINPUTTYPE(op) \
	op(ELobbyPacketMenuInputType::NONE) \
	op(ELobbyPacketMenuInputType::MOVE_UP) \
	op(ELobbyPacketMenuInputType::MOVE_DOWN) \
	op(ELobbyPacketMenuInputType::MOVE_LEFT) \
	op(ELobbyPacketMenuInputType::MOVE_RIGHT) \
	op(ELobbyPacketMenuInputType::DECIDE) \
	op(ELobbyPacketMenuInputType::CANCEL) 

enum class ELobbyPacketMenuInputType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ELobbyPacketMenuInputType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
