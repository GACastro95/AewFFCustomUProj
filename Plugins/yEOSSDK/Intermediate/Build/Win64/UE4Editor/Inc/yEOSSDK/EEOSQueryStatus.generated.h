// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSQueryStatus_generated_h
#error "EEOSQueryStatus.generated.h already included, missing '#pragma once' in EEOSQueryStatus.h"
#endif
#define YEOSSDK_EEOSQueryStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSQueryStatus_h


#define FOREACH_ENUM_EEOSQUERYSTATUS(op) \
	op(EEOSQueryStatus::NotQueried) \
	op(EEOSQueryStatus::Querying) \
	op(EEOSQueryStatus::Queried) 

enum class EEOSQueryStatus : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSQueryStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
