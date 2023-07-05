#pragma once
#include "CoreMinimal.h"
#include "EEOSAntiCheatClientViolationType.h"
#include "EOSAntiCheatIntegrityViolatedDispatcherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEOSAntiCheatIntegrityViolatedDispatcher, EEOSAntiCheatClientViolationType, ViolationType, const FString&, StatusMessage);

