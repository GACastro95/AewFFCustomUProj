// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EELSessionPacketNotifyType_generated_h
#error "EELSessionPacketNotifyType.generated.h already included, missing '#pragma once' in EELSessionPacketNotifyType.h"
#endif
#define ABP_200508_EELSessionPacketNotifyType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EELSessionPacketNotifyType_h


#define FOREACH_ENUM_EELSESSIONPACKETNOTIFYTYPE(op) \
	op(EELSessionPacketNotifyType::NOTIFY_REQUEST_LEAVESESSION) \
	op(EELSessionPacketNotifyType::NOTIFY_REQUEST_INVITEPARTYPLAYER) \
	op(EELSessionPacketNotifyType::NOTIFY_RECIEVE_POSITIONDATA) \
	op(EELSessionPacketNotifyType::NOTIFY_REQUEST_RESENDPLAYERSTATE) \
	op(EELSessionPacketNotifyType::NOTIFY_REQUEST_RESENDPLAYERDATA) \
	op(EELSessionPacketNotifyType::NOTIFY_TEST) \
	op(EELSessionPacketNotifyType::NOTIFY_TEST_RESPONSE) 

enum class EELSessionPacketNotifyType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EELSessionPacketNotifyType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
