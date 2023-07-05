#pragma once
#include "CoreMinimal.h"
#include "EOSCommunityUserAddedDispatcherDelegate.generated.h"

class UEOSCommunityInfoBase;
class UEOSCommunityUserBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEOSCommunityUserAddedDispatcher, UEOSCommunityInfoBase*, EOSCommunityInfoBase, UEOSCommunityUserBase*, EOSUserBase);

