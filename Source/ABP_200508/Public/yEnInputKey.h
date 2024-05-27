#pragma once
#include "CoreMinimal.h"
#include "yEnInputKey.generated.h"

UENUM()
enum class yEnInputKey : uint32 {
    None,
    FaceButtonUp,
    FaceButtonLeft,
    FaceButtonDown = 4,
    FaceButtonRight = 8,
    DPadUp = 16,
    DPadLeft = 32,
    DPadDown = 64,
    DPadRight = 128,
    BumperL = 256,
    TriggerL = 512,
    BumperR = 1024,
    TriggerR = 2048,
    Start = 4096,
    Select = 8192,
    AnalogL = 16384,
    AnalogR = 32768,
    LStickUp = 65536,
    LStickLeft = 131072,
    LStickDown = 262144,
    LStickRight = 524288,
    RStickUp = 1048576,
    RStickLeft = 2097152,
    RStickDown = 4194304,
    RStickRight = 8388608,
    MouseButtonR = 16777216,
    RotationBrotherLeft = 33554432,
    RotationBrotherRight = 67108864,
    CreateSessionKey = 134217728,
};

