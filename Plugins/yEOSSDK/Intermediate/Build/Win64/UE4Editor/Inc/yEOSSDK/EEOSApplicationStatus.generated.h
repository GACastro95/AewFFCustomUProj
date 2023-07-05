// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSApplicationStatus_generated_h
#error "EEOSApplicationStatus.generated.h already included, missing '#pragma once' in EEOSApplicationStatus.h"
#endif
#define YEOSSDK_EEOSApplicationStatus_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSApplicationStatus_h


#define FOREACH_ENUM_EEOSAPPLICATIONSTATUS(op) \
	op(EEOSApplicationStatus::BackgroundConstrained) \
	op(EEOSApplicationStatus::BackgroundUnconstrained) \
	op(EEOSApplicationStatus::BackgroundSuspended) \
	op(EEOSApplicationStatus::Foreground) 

enum class EEOSApplicationStatus : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSApplicationStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
