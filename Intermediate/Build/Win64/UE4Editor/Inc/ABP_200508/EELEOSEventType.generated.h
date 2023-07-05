// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_EELEOSEventType_generated_h
#error "EELEOSEventType.generated.h already included, missing '#pragma once' in EELEOSEventType.h"
#endif
#define ABP_200508_EELEOSEventType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_EELEOSEventType_h


#define FOREACH_ENUM_EELEOSEVENTTYPE(op) \
	op(EELEOSEventType::Login) \
	op(EELEOSEventType::Logout) \
	op(EELEOSEventType::UpdateUserInfo) \
	op(EELEOSEventType::UpdateFriendUserInfo) \
	op(EELEOSEventType::NoConnection) \
	op(EELEOSEventType::UnexpectedError) \
	op(EELEOSEventType::RequestLogout) \
	op(EELEOSEventType::InvalidLinkedUser) \
	op(EELEOSEventType::LinkEpicAccount) 

enum class EELEOSEventType : uint8;
template<> ABP_200508_API UEnum* StaticEnum<EELEOSEventType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
