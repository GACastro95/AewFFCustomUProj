#pragma once
#include "CoreMinimal.h"
#include "EYDebugMenuSimpleUIType.generated.h"

UENUM(BlueprintType)
enum class EYDebugMenuSimpleUIType : uint8 {
    Text,
    TextWrapped,
    TextBox,
    TextBoxForInt,
    TextBoxForFloat,
    CheckBox,
    ComboBox,
    SliderBarForInt,
    SliderBarForFloat,
    SliderBarForAngle,
    Button,
    Spacer,
};

