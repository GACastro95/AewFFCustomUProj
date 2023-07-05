#pragma once
#include "CoreMinimal.h"
#include "EOSAsyncTaskDispatcherDelegate.generated.h"

class UEOSAsyncTask;
class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEOSAsyncTaskDispatcher, UEOSAsyncTask*, EOSAsyncTask, UObject*, Object);

