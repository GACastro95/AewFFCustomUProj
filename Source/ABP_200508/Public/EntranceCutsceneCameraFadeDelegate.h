#pragma once
#include "CoreMinimal.h"
#include "EntranceCutsceneCameraFadeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEntranceCutsceneCameraFade, bool, IsFadeOut, float, Duration);

