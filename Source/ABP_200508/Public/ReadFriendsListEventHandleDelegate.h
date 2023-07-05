#pragma once
#include "CoreMinimal.h"
#include "ReadFriendsListEventHandleDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReadFriendsListEventHandle, bool, bWasSuccessful);

