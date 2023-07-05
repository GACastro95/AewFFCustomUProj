#pragma once
#include "CoreMinimal.h"
#include "EOSUserAddedDispatcherDelegate.generated.h"

class UEOSUserBase;
class UEOSUserManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEOSUserAddedDispatcher, UEOSUserManager*, EOSUserManager, UEOSUserBase*, EOSUserBase, bool, ProductUser);

