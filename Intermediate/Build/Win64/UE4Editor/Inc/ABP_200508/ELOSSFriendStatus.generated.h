// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ELOSSFriendStatus_generated_h
#error "ELOSSFriendStatus.generated.h already included, missing '#pragma once' in ELOSSFriendStatus.h"
#endif
#define ABP_200508_ELOSSFriendStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELOSSFriendStatus_h


#define FOREACH_ENUM_ELOSSFRIENDSTATUS(op) \
	op(ELOSSFriendStatus::Unknown) \
	op(ELOSSFriendStatus::NotFound) \
	op(ELOSSFriendStatus::Offline) \
	op(ELOSSFriendStatus::Online) \
	op(ELOSSFriendStatus::PlayingThisGame) 

enum class ELOSSFriendStatus : uint8;
template<> ABP_200508_API UEnum* StaticEnum<ELOSSFriendStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
