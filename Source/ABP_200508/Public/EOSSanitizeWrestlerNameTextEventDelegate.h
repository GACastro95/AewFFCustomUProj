#pragma once
#include "CoreMinimal.h"
#include "WrestlerNameText.h"
#include "EOSSanitizeWrestlerNameTextEventDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FEOSSanitizeWrestlerNameTextEvent, const FWrestlerNameText&, WrestlerNameText, UObject*, UserObject);

