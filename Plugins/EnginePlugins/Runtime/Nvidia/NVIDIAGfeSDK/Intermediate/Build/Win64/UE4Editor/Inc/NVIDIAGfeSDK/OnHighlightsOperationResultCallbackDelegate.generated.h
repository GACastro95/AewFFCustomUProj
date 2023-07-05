// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EGfeSDKReturnCode : uint8;
#ifdef NVIDIAGFESDK_OnHighlightsOperationResultCallbackDelegate_generated_h
#error "OnHighlightsOperationResultCallbackDelegate.generated.h already included, missing '#pragma once' in OnHighlightsOperationResultCallbackDelegate.h"
#endif
#define NVIDIAGFESDK_OnHighlightsOperationResultCallbackDelegate_generated_h

#define AewFFCustomUProj_Plugins_EnginePlugins_Runtime_Nvidia_NVIDIAGfeSDK_Source_NVIDIAGfeSDK_Public_OnHighlightsOperationResultCallbackDelegate_h_6_DELEGATE \
struct _Script_NVIDIAGfeSDK_eventOnHighlightsOperationResultCallback_Parms \
{ \
	EGfeSDKReturnCode GfeSdkReturnCode; \
}; \
static inline void FOnHighlightsOperationResultCallback_DelegateWrapper(const FMulticastScriptDelegate& OnHighlightsOperationResultCallback, EGfeSDKReturnCode GfeSdkReturnCode) \
{ \
	_Script_NVIDIAGfeSDK_eventOnHighlightsOperationResultCallback_Parms Parms; \
	Parms.GfeSdkReturnCode=GfeSdkReturnCode; \
	OnHighlightsOperationResultCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_EnginePlugins_Runtime_Nvidia_NVIDIAGfeSDK_Source_NVIDIAGfeSDK_Public_OnHighlightsOperationResultCallbackDelegate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
