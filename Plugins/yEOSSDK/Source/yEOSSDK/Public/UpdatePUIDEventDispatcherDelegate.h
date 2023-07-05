#pragma once
#include "CoreMinimal.h"
#include "UpdatePUIDEventDispatcherDelegate.generated.h"

class UEOSUserBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdatePUIDEventDispatcher, UEOSUserBase*, _FriendUser);

