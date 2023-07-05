#pragma once
#include "CoreMinimal.h"
#include "EEOSAntiCheatClientViolationType.h"
#include "EOSAntiCheatClientPollStatusDispatcherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEOSAntiCheatClientPollStatusDispatcher, EEOSAntiCheatClientViolationType, ViolationType, const FString&, StatusMessage);

