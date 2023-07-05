// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGfeSDKReturnCode : uint8;
struct FGfeSDKCreateResponse;
#ifdef NVIDIAGFESDK_OnHighlightsInitCallbackDelegate_generated_h
#error "OnHighlightsInitCallbackDelegate.generated.h already included, missing '#pragma once' in OnHighlightsInitCallbackDelegate.h"
#endif
#define NVIDIAGFESDK_OnHighlightsInitCallbackDelegate_generated_h

#define AewFFCustomUProj_Plugins_EnginePlugins_Runtime_Nvidia_NVIDIAGfeSDK_Source_NVIDIAGfeSDK_Public_OnHighlightsInitCallbackDelegate_h_7_DELEGATE \
struct _Script_NVIDIAGfeSDK_eventOnHighlightsInitCallback_Parms \
{ \
	EGfeSDKReturnCode GfeSdkReturnCode; \
	FGfeSDKCreateResponse GfeSdkProperties; \
}; \
static inline void FOnHighlightsInitCallback_DelegateWrapper(const FMulticastScriptDelegate& OnHighlightsInitCallback, EGfeSDKReturnCode GfeSdkReturnCode, FGfeSDKCreateResponse GfeSdkProperties) \
{ \
	_Script_NVIDIAGfeSDK_eventOnHighlightsInitCallback_Parms Parms; \
	Parms.GfeSdkReturnCode=GfeSdkReturnCode; \
	Parms.GfeSdkProperties=GfeSdkProperties; \
	OnHighlightsInitCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_EnginePlugins_Runtime_Nvidia_NVIDIAGfeSDK_Source_NVIDIAGfeSDK_Public_OnHighlightsInitCallbackDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
