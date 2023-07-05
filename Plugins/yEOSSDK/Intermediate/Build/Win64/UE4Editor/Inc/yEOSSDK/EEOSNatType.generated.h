// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSNatType_generated_h
#error "EEOSNatType.generated.h already included, missing '#pragma once' in EEOSNatType.h"
#endif
#define YEOSSDK_EEOSNatType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSNatType_h


#define FOREACH_ENUM_EEOSNATTYPE(op) \
	op(EEOSNatType::Unknown) \
	op(EEOSNatType::Open) \
	op(EEOSNatType::Moderate) \
	op(EEOSNatType::Strict) 

enum class EEOSNatType : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSNatType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
