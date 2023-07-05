// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSSessionResponceType_generated_h
#error "EEOSSessionResponceType.generated.h already included, missing '#pragma once' in EEOSSessionResponceType.h"
#endif
#define YEOSSDK_EEOSSessionResponceType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSSessionResponceType_h


#define FOREACH_ENUM_EEOSSESSIONRESPONCETYPE(op) \
	op(EEOSSessionResponceType::Success) \
	op(EEOSSessionResponceType::Broken) \
	op(EEOSSessionResponceType::Broken_NeedToRetry) \
	op(EEOSSessionResponceType::UnknownUser) 

enum class EEOSSessionResponceType : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSSessionResponceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
