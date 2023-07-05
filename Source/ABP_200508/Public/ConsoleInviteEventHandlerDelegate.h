#pragma once
#include "CoreMinimal.h"
#include "ConsoleInviteEventHandlerDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FConsoleInviteEventHandler, const FString&, _lobbyID);

