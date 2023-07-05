#pragma once
#include "CoreMinimal.h"
#include "EOSUserRemovedDispatcherDelegate.generated.h"

class UEOSUserBase;
class UEOSUserManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEOSUserRemovedDispatcher, UEOSUserManager*, UserManager, UEOSUserBase*, EOSUserBase, bool, ProductUser);

