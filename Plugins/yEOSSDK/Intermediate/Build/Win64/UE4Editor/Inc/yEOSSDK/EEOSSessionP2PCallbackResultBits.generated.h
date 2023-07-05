// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSSessionP2PCallbackResultBits_generated_h
#error "EEOSSessionP2PCallbackResultBits.generated.h already included, missing '#pragma once' in EEOSSessionP2PCallbackResultBits.h"
#endif
#define YEOSSDK_EEOSSessionP2PCallbackResultBits_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSSessionP2PCallbackResultBits_h


#define FOREACH_ENUM_EEOSSESSIONP2PCALLBACKRESULTBITS(op) \
	op(EEOSSessionP2PCallbackResultBits::Success) \
	op(EEOSSessionP2PCallbackResultBits::Skiped) \
	op(EEOSSessionP2PCallbackResultBits::Success_EndCallback) \
	op(EEOSSessionP2PCallbackResultBits::Success_CachePacket) 

enum class EEOSSessionP2PCallbackResultBits : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSSessionP2PCallbackResultBits>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
