#pragma once
#include "CoreMinimal.h"
#include "ObjectFilterDelegateDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FObjectFilterDelegate, const UObject*, Value, bool&, Result);

