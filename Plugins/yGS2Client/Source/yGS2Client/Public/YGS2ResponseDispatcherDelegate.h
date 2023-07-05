#pragma once
#include "CoreMinimal.h"
#include "EYGS2ErrorType.h"
#include "YGS2ResponseDispatcherDelegate.generated.h"

class UYGS2RequestBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYGS2ResponseDispatcher, EYGS2ErrorType, YGS2ErrorType, UYGS2RequestBase*, YGS2RequestBase);

