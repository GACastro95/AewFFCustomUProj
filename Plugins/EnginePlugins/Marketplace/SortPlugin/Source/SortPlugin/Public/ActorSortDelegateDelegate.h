#pragma once
#include "CoreMinimal.h"
#include "ActorSortDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FActorSortDelegate, const AActor*, A, const AActor*, B, bool&, Result);

