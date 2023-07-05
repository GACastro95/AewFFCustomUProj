// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EELP2PChannel_generated_h
#error "EELP2PChannel.generated.h already included, missing '#pragma once' in EELP2PChannel.h"
#endif
#define ABP_200508_EELP2PChannel_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EELP2PChannel_h


#define FOREACH_ENUM_EELP2PCHANNEL(op) \
	op(EELP2PChannel::Default) \
	op(EELP2PChannel::BlueprintRPC) \
	op(EELP2PChannel::PartyChat) \
	op(EELP2PChannel::FriendChat) \
	op(EELP2PChannel::SessionObject) \
	op(EELP2PChannel::PartyObject) 

enum class EELP2PChannel : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EELP2PChannel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
