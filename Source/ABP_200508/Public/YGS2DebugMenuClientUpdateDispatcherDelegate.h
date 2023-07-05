#pragma once
#include "CoreMinimal.h"
#include "EYGS2DebugMenuClientStep.h"
#include "YGS2CommandData.h"
#include "YGS2DebugMenuClientUpdateDispatcherDelegate.generated.h"

class UYGS2DebugMenuClient;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FYGS2DebugMenuClientUpdateDispatcher, EYGS2DebugMenuClientStep, YGS2DebugMenuClientStep, const FYGS2CommandData&, YGS2CommandData, UYGS2DebugMenuClient*, YGS2DebugMenuClient);

