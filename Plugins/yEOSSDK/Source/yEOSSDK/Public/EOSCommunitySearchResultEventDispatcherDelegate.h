#pragma once
#include "CoreMinimal.h"
#include "EOSCommunitySearchResultEventDispatcherDelegate.generated.h"

class UEOSCommunityBase;
class UEOSSearchResultsBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEOSCommunitySearchResultEventDispatcher, UEOSCommunityBase*, EOSCommunityBase, UEOSSearchResultsBase*, EOSSearchResultsBase);

