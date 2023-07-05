// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSApiResult_generated_h
#error "EEOSApiResult.generated.h already included, missing '#pragma once' in EEOSApiResult.h"
#endif
#define YEOSSDK_EEOSApiResult_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSApiResult_h


#define FOREACH_ENUM_EEOSAPIRESULT(op) \
	op(EEOSApiResult::Unknown) \
	op(EEOSApiResult::Success) \
	op(EEOSApiResult::ConnectionError) \
	op(EEOSApiResult::ServerError) \
	op(EEOSApiResult::GatewayError) \
	op(EEOSApiResult::BadRequest) 

enum class EEOSApiResult : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSApiResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
