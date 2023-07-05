#pragma once
#include "CoreMinimal.h"
#include "EOSPlayerSanction.h"
#include "EOSSanctionsQueryPlayerSanctionsDispatcherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEOSSanctionsQueryPlayerSanctionsDispatcher, const FString&, ProductUserID, const TArray<FEOSPlayerSanction>&, PlayerSanctions);

