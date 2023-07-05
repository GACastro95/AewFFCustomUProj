// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EPopupOnlineStatusType_generated_h
#error "EPopupOnlineStatusType.generated.h already included, missing '#pragma once' in EPopupOnlineStatusType.h"
#endif
#define ABP_200508_EPopupOnlineStatusType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EPopupOnlineStatusType_h


#define FOREACH_ENUM_EPOPUPONLINESTATUSTYPE(op) \
	op(EPopupOnlineStatusType::None) \
	op(EPopupOnlineStatusType::Invitation) \
	op(EPopupOnlineStatusType::Completed_Join) \
	op(EPopupOnlineStatusType::Completed_Leave) \
	op(EPopupOnlineStatusType::Kick) \
	op(EPopupOnlineStatusType::Joined_OtherPlayer) \
	op(EPopupOnlineStatusType::Leaved_OtherPlayer) \
	op(EPopupOnlineStatusType::Kick_OtherPlayer) \
	op(EPopupOnlineStatusType::Promote_Me) \
	op(EPopupOnlineStatusType::Promote_Other) 

enum class EPopupOnlineStatusType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EPopupOnlineStatusType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
