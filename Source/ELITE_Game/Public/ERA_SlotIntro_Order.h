#pragma once
#include "CoreMinimal.h"
#include "ERA_SlotIntro_Order.generated.h"

UENUM(BlueprintType)
enum class ERA_SlotIntro_Order : uint8 {
    FIRST,
    OPPONENT,
    PARTNER,
    THEREAFTER,
    CAREEROPPONENT,
    ERA_SlotIntro_MAX UMETA(Hidden),
};

