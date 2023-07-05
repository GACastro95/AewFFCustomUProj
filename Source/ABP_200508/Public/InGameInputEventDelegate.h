#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "yEnInputKey.h"
#include "InGameInputEventDelegate.generated.h"

class APlayerController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FInGameInputEvent, yEnInputKey, InputKey, TEnumAsByte<EInputEvent>, KeyEvent, APlayerController*, PlayerController);

