#pragma once
#include "CoreMinimal.h"
#include "ActorFilterDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FActorFilterDelegate, const AActor*, Value, bool&, Result);

