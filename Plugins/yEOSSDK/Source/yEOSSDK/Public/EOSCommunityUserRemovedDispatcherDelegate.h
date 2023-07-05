#pragma once
#include "CoreMinimal.h"
#include "EOSCommunityUserRemovedDispatcherDelegate.generated.h"

class UEOSCommunityInfoBase;
class UEOSCommunityUserBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEOSCommunityUserRemovedDispatcher, UEOSCommunityInfoBase*, EOSCommunityInfoBase, UEOSCommunityUserBase*, EOSUserBase);

