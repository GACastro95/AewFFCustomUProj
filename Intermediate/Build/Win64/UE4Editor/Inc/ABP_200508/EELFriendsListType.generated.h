// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EELFriendsListType_generated_h
#error "EELFriendsListType.generated.h already included, missing '#pragma once' in EELFriendsListType.h"
#endif
#define ABP_200508_EELFriendsListType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EELFriendsListType_h


#define FOREACH_ENUM_EELFRIENDSLISTTYPE(op) \
	op(EELFriendsListType::Default) \
	op(EELFriendsListType::OnlinePlayers) \
	op(EELFriendsListType::InGamePlayers) \
	op(EELFriendsListType::InGameAndSessionPlayers) 

enum class EELFriendsListType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EELFriendsListType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
