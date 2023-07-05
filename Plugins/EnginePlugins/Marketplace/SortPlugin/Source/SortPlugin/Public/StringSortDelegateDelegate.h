#pragma once
#include "CoreMinimal.h"
#include "StringSortDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FStringSortDelegate, const FString&, A, const FString&, B, bool&, Result);

