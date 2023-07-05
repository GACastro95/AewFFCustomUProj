// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSSessionGameEventRequestType_generated_h
#error "EEOSSessionGameEventRequestType.generated.h already included, missing '#pragma once' in EEOSSessionGameEventRequestType.h"
#endif
#define YEOSSDK_EEOSSessionGameEventRequestType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSSessionGameEventRequestType_h


#define FOREACH_ENUM_EEOSSESSIONGAMEEVENTREQUESTTYPE(op) \
	op(EEOSSessionGameEventRequestType::None) \
	op(EEOSSessionGameEventRequestType::NotifyCurrentStatus) \
	op(EEOSSessionGameEventRequestType::RequestGetCurrentStatus) 

enum class EEOSSessionGameEventRequestType : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSSessionGameEventRequestType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
