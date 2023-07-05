#pragma once
#include "CoreMinimal.h"
#include "EOSCommunityClosedDispatcherDelegate.generated.h"

class UEOSCommunityInfoBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEOSCommunityClosedDispatcher, UEOSCommunityInfoBase*, EOSCommunityInfoBase);

