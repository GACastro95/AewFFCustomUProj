// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSAntiCheatAuthStatus_generated_h
#error "EEOSAntiCheatAuthStatus.generated.h already included, missing '#pragma once' in EEOSAntiCheatAuthStatus.h"
#endif
#define YEOSSDK_EEOSAntiCheatAuthStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSAntiCheatAuthStatus_h


#define FOREACH_ENUM_EEOSANTICHEATAUTHSTATUS(op) \
	op(EEOSAntiCheatAuthStatus::Invalid) \
	op(EEOSAntiCheatAuthStatus::LocalAuthComplete) \
	op(EEOSAntiCheatAuthStatus::RemoteAuthComplete) 

enum class EEOSAntiCheatAuthStatus : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSAntiCheatAuthStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
