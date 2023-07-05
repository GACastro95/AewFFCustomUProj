#pragma once
#include "CoreMinimal.h"
#include "OnMiniGameOwnerSelectInfoDelegate.generated.h"

class UELEOSLobbyMiniGameOwnerSelectInfo;
class UEOSUserBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnMiniGameOwnerSelectInfo, UEOSUserBase*, Owner, UELEOSLobbyMiniGameOwnerSelectInfo*, Info);

