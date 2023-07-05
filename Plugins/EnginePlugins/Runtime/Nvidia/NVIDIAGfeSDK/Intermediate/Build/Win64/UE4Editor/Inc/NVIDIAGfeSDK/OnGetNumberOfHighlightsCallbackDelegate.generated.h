// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGfeSDKReturnCode : uint8;
#ifdef NVIDIAGFESDK_OnGetNumberOfHighlightsCallbackDelegate_generated_h
#error "OnGetNumberOfHighlightsCallbackDelegate.generated.h already included, missing '#pragma once' in OnGetNumberOfHighlightsCallbackDelegate.h"
#endif
#define NVIDIAGFESDK_OnGetNumberOfHighlightsCallbackDelegate_generated_h

#define AewFFCustomUProj_Plugins_EnginePlugins_Runtime_Nvidia_NVIDIAGfeSDK_Source_NVIDIAGfeSDK_Public_OnGetNumberOfHighlightsCallbackDelegate_h_6_DELEGATE \
struct _Script_NVIDIAGfeSDK_eventOnGetNumberOfHighlightsCallback_Parms \
{ \
	EGfeSDKReturnCode GfeSdkReturnCode; \
	int32 NumberOfHighlights; \
}; \
static inline void FOnGetNumberOfHighlightsCallback_DelegateWrapper(const FMulticastScriptDelegate& OnGetNumberOfHighlightsCallback, EGfeSDKReturnCode GfeSdkReturnCode, int32 NumberOfHighlights) \
{ \
	_Script_NVIDIAGfeSDK_eventOnGetNumberOfHighlightsCallback_Parms Parms; \
	Parms.GfeSdkReturnCode=GfeSdkReturnCode; \
	Parms.NumberOfHighlights=NumberOfHighlights; \
	OnGetNumberOfHighlightsCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_EnginePlugins_Runtime_Nvidia_NVIDIAGfeSDK_Source_NVIDIAGfeSDK_Public_OnGetNumberOfHighlightsCallbackDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
