// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NVIDIAGFESDK_EGfeSDKHighlightSignificance_generated_h
#error "EGfeSDKHighlightSignificance.generated.h already included, missing '#pragma once' in EGfeSDKHighlightSignificance.h"
#endif
#define NVIDIAGFESDK_EGfeSDKHighlightSignificance_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_EnginePlugins_Runtime_Nvidia_NVIDIAGfeSDK_Source_NVIDIAGfeSDK_Public_EGfeSDKHighlightSignificance_h


#define FOREACH_ENUM_EGFESDKHIGHLIGHTSIGNIFICANCE(op) \
	op(EGfeSDKHighlightSignificance::NONE) \
	op(EGfeSDKHighlightSignificance::ExtremelyBad) \
	op(EGfeSDKHighlightSignificance::VeryBad) \
	op(EGfeSDKHighlightSignificance::Bad) \
	op(EGfeSDKHighlightSignificance::Neutral) \
	op(EGfeSDKHighlightSignificance::Good) \
	op(EGfeSDKHighlightSignificance::VeryGood) \
	op(EGfeSDKHighlightSignificance::ExtremelyGood) 

enum class EGfeSDKHighlightSignificance : uint8;
template<> NVIDIAGFESDK_API UEnum* StaticEnum<EGfeSDKHighlightSignificance>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
