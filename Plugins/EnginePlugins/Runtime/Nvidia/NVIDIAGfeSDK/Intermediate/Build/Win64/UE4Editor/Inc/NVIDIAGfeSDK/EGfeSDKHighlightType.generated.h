// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NVIDIAGFESDK_EGfeSDKHighlightType_generated_h
#error "EGfeSDKHighlightType.generated.h already included, missing '#pragma once' in EGfeSDKHighlightType.h"
#endif
#define NVIDIAGFESDK_EGfeSDKHighlightType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_EnginePlugins_Runtime_Nvidia_NVIDIAGfeSDK_Source_NVIDIAGfeSDK_Public_EGfeSDKHighlightType_h


#define FOREACH_ENUM_EGFESDKHIGHLIGHTTYPE(op) \
	op(EGfeSDKHighlightType::NONE) \
	op(EGfeSDKHighlightType::Milestone) \
	op(EGfeSDKHighlightType::Achievement) \
	op(EGfeSDKHighlightType::Incident) \
	op(EGfeSDKHighlightType::StateChange) \
	op(EGfeSDKHighlightType::Unannounced) 

enum class EGfeSDKHighlightType : uint8;
template<> NVIDIAGFESDK_API UEnum* StaticEnum<EGfeSDKHighlightType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
