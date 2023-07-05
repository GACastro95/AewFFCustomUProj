// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSSessionState_generated_h
#error "EEOSSessionState.generated.h already included, missing '#pragma once' in EEOSSessionState.h"
#endif
#define YEOSSDK_EEOSSessionState_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSSessionState_h


#define FOREACH_ENUM_EEOSSESSIONSTATE(op) \
	op(EEOSSessionState::None) \
	op(EEOSSessionState::Creating) \
	op(EEOSSessionState::Pending) \
	op(EEOSSessionState::Starting) \
	op(EEOSSessionState::InProgress) \
	op(EEOSSessionState::Ending) \
	op(EEOSSessionState::Ended) \
	op(EEOSSessionState::Destroying) 

enum class EEOSSessionState : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSSessionState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
