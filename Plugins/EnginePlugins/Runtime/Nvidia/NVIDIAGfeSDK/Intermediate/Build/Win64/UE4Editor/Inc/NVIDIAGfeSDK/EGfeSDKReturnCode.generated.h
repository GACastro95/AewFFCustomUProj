// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NVIDIAGFESDK_EGfeSDKReturnCode_generated_h
#error "EGfeSDKReturnCode.generated.h already included, missing '#pragma once' in EGfeSDKReturnCode.h"
#endif
#define NVIDIAGFESDK_EGfeSDKReturnCode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_EnginePlugins_Runtime_Nvidia_NVIDIAGfeSDK_Source_NVIDIAGfeSDK_Public_EGfeSDKReturnCode_h


#define FOREACH_ENUM_EGFESDKRETURNCODE(op) \
	op(EGfeSDKReturnCode::Success) \
	op(EGfeSDKReturnCode::SuccessIpcOldSdk) \
	op(EGfeSDKReturnCode::SuccessIpcOldGfe) \
	op(EGfeSDKReturnCode::Error) \
	op(EGfeSDKReturnCode::ErrorGfeVersion) \
	op(EGfeSDKReturnCode::ErrorSdkVersion) \
	op(EGfeSDKReturnCode::ErrorModuleNotLoaded) \
	op(EGfeSDKReturnCode::ErrorWrongTimeRangeSet) \
	op(EGfeSDKReturnCode::ErrorGeneric) \
	op(EGfeSDKReturnCode::ErrorNotImplemented) \
	op(EGfeSDKReturnCode::ErrorInvalidParameter) \
	op(EGfeSDKReturnCode::ErrorNotSet) \
	op(EGfeSDKReturnCode::ErrorShadowplayIRDisabled) \
	op(EGfeSDKReturnCode::ErrorSDKInUse) \
	op(EGfeSDKReturnCode::ErrorGroupNotFound) \
	op(EGfeSDKReturnCode::ErrorFileNotFound) \
	op(EGfeSDKReturnCode::ErrorHighlightsSetupFailed) \
	op(EGfeSDKReturnCode::ErrorHighlightsNotConfigured) \
	op(EGfeSDKReturnCode::ErrorHighlightSaveFailed) \
	op(EGfeSDKReturnCode::ErrorUnexpectedException) \
	op(EGfeSDKReturnCode::ErrorNoHighlights) \
	op(EGfeSDKReturnCode::ErrorNoConnection) \
	op(EGfeSDKReturnCode::ErrorPermissionNotGranted) \
	op(EGfeSDKReturnCode::ErrorPermissionDenied) \
	op(EGfeSDKReturnCode::ErrorInvalidHandle) \
	op(EGfeSDKReturnCode::ErrorUnhandledException) \
	op(EGfeSDKReturnCode::ErrorOutOfMemory) \
	op(EGfeSDKReturnCode::ErrorLoadLibrary) \
	op(EGfeSDKReturnCode::ErrorLibraryCallFailed) \
	op(EGfeSDKReturnCode::ErrorIPCFailed) \
	op(EGfeSDKReturnCode::ErrorConnection) \
	op(EGfeSDKReturnCode::ErrorLibCallTimeout) \
	op(EGfeSDKReturnCode::ErrorApplicationLookupFailed) \
	op(EGfeSDKReturnCode::ErrorApplicationNotKnown) \
	op(EGfeSDKReturnCode::ErrorFeatureDisabled) \
	op(EGfeSDKReturnCode::ErrorAppNoOptimization) \
	op(EGfeSDKReturnCode::ErrorAppSettingsRead) \
	op(EGfeSDKReturnCode::ErrorAppSettingsWrite) 

enum class EGfeSDKReturnCode : uint8;
template<> NVIDIAGFESDK_API UEnum* StaticEnum<EGfeSDKReturnCode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
