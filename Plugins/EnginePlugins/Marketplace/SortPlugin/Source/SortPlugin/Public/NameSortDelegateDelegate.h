#pragma once
#include "CoreMinimal.h"
#include "NameSortDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FNameSortDelegate, const FName&, A, const FName&, B, bool&, Result);

