#pragma once
#include "CoreMinimal.h"
#include "EGfeSDKReturnCode.generated.h"

UENUM(BlueprintType)
enum class EGfeSDKReturnCode : uint8 {
    Success,
    SuccessIpcOldSdk,
    SuccessIpcOldGfe,
    Error,
    ErrorGfeVersion,
    ErrorSdkVersion,
    ErrorModuleNotLoaded,
    ErrorWrongTimeRangeSet,
    ErrorGeneric,
    ErrorNotImplemented,
    ErrorInvalidParameter,
    ErrorNotSet,
    ErrorShadowplayIRDisabled,
    ErrorSDKInUse,
    ErrorGroupNotFound,
    ErrorFileNotFound,
    ErrorHighlightsSetupFailed,
    ErrorHighlightsNotConfigured,
    ErrorHighlightSaveFailed,
    ErrorUnexpectedException,
    ErrorNoHighlights,
    ErrorNoConnection,
    ErrorPermissionNotGranted,
    ErrorPermissionDenied,
    ErrorInvalidHandle,
    ErrorUnhandledException,
    ErrorOutOfMemory,
    ErrorLoadLibrary,
    ErrorLibraryCallFailed,
    ErrorIPCFailed,
    ErrorConnection,
    ErrorLibCallTimeout = 32,
    ErrorApplicationLookupFailed,
    ErrorApplicationNotKnown,
    ErrorFeatureDisabled,
    ErrorAppNoOptimization,
    ErrorAppSettingsRead,
    ErrorAppSettingsWrite,
};

