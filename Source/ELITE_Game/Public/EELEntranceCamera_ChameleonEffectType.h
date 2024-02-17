#pragma once
#include "CoreMinimal.h"
#include "EELEntranceCamera_ChameleonEffectType.generated.h"

UENUM(BlueprintType)
enum class EELEntranceCamera_ChameleonEffectType : uint8 {
    None,
    Monochrome,
    MonitorEffects,
    Scratches,
    Squares,
    SpeedLines,
    HuePanner,
    ScreenDecals,
    CameraShake,
    LensDistortion,
    Letterboxing,
    TVNoise,
    Mosaic_Head,
    Mosaic_RightHand,
    Mosaic_LeftHand,
    Mosaic_BothHand,
    Drug,
    Pulse,
};

