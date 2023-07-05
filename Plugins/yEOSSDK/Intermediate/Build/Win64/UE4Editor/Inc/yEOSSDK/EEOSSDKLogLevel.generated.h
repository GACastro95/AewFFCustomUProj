// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSSDKLogLevel_generated_h
#error "EEOSSDKLogLevel.generated.h already included, missing '#pragma once' in EEOSSDKLogLevel.h"
#endif
#define YEOSSDK_EEOSSDKLogLevel_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSSDKLogLevel_h


#define FOREACH_ENUM_EEOSSDKLOGLEVEL(op) \
	op(EEOSSDKLogLevel::Off) \
	op(EEOSSDKLogLevel::SDK_Error) \
	op(EEOSSDKLogLevel::SDK_Warn) \
	op(EEOSSDKLogLevel::SDK_Info) \
	op(EEOSSDKLogLevel::SDK_ALL) 

enum class EEOSSDKLogLevel : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSSDKLogLevel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
