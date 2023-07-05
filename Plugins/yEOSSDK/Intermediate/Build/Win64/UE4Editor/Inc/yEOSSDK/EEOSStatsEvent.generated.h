// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSStatsEvent_generated_h
#error "EEOSStatsEvent.generated.h already included, missing '#pragma once' in EEOSStatsEvent.h"
#endif
#define YEOSSDK_EEOSStatsEvent_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSStatsEvent_h


#define FOREACH_ENUM_EEOSSTATSEVENT(op) \
	op(EEOSStatsEvent::IngestStat) \
	op(EEOSStatsEvent::IngestStatErr) \
	op(EEOSStatsEvent::QueryStat) \
	op(EEOSStatsEvent::QueryStatErr) 

enum class EEOSStatsEvent : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSStatsEvent>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
