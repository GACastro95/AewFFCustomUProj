#pragma once
#include "CoreMinimal.h"
#include "EEOSAntiCheatActionReason.h"
#include "EOSAntiCheatClientActionRequiredDispatcherDelegate.generated.h"

class UEOSIDs;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEOSAntiCheatClientActionRequiredDispatcher, UEOSIDs*, UserId, EEOSAntiCheatActionReason, ActionReason, const FString&, ActionReasonString);

