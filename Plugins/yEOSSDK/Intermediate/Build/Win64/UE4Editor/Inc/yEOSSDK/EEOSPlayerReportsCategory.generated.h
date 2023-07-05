// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef YEOSSDK_EEOSPlayerReportsCategory_generated_h
#error "EEOSPlayerReportsCategory.generated.h already included, missing '#pragma once' in EEOSPlayerReportsCategory.h"
#endif
#define YEOSSDK_EEOSPlayerReportsCategory_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EEOSPlayerReportsCategory_h


#define FOREACH_ENUM_EEOSPLAYERREPORTSCATEGORY(op) \
	op(EEOSPlayerReportsCategory::Invalid) \
	op(EEOSPlayerReportsCategory::Cheating) \
	op(EEOSPlayerReportsCategory::Exploiting) \
	op(EEOSPlayerReportsCategory::OffensiveProfile) \
	op(EEOSPlayerReportsCategory::VerbalAbuse) \
	op(EEOSPlayerReportsCategory::Scamming) \
	op(EEOSPlayerReportsCategory::Spamming) \
	op(EEOSPlayerReportsCategory::Other) 

enum class EEOSPlayerReportsCategory : uint8;
template<> YEOSSDK_API UEnum* StaticEnum<EEOSPlayerReportsCategory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
