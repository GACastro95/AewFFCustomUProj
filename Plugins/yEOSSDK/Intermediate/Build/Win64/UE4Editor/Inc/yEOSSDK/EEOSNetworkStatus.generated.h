// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSNetworkStatus_generated_h
#error "EEOSNetworkStatus.generated.h already included, missing '#pragma once' in EEOSNetworkStatus.h"
#endif
#define YEOSSDK_EEOSNetworkStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSNetworkStatus_h


#define FOREACH_ENUM_EEOSNETWORKSTATUS(op) \
	op(EEOSNetworkStatus::Disabled) \
	op(EEOSNetworkStatus::Offline) \
	op(EEOSNetworkStatus::Online) 

enum class EEOSNetworkStatus : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSNetworkStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
