#pragma once
#include "CoreMinimal.h"
#include "ESSAttentionAddLevel.generated.h"

UENUM(BlueprintType)
enum class ESSAttentionAddLevel : uint8 {
    None,
    Lv1,
    Lv2,
    Lv3,
    Lv4,
    Lv5,
    Finisher,
};

