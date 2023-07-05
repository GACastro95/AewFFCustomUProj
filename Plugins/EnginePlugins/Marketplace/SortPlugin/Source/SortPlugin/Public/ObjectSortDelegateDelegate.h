#pragma once
#include "CoreMinimal.h"
#include "ObjectSortDelegateDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FObjectSortDelegate, const UObject*, A, const UObject*, B, bool&, Result);

