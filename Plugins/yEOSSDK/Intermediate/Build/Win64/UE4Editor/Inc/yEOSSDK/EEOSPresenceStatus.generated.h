// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSPresenceStatus_generated_h
#error "EEOSPresenceStatus.generated.h already included, missing '#pragma once' in EEOSPresenceStatus.h"
#endif
#define YEOSSDK_EEOSPresenceStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSPresenceStatus_h


#define FOREACH_ENUM_EEOSPRESENCESTATUS(op) \
	op(EEOSPresenceStatus::Offline) \
	op(EEOSPresenceStatus::Online) \
	op(EEOSPresenceStatus::Away) \
	op(EEOSPresenceStatus::ExtendedAway) \
	op(EEOSPresenceStatus::DoNotDisturb) 

enum class EEOSPresenceStatus : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSPresenceStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
