#pragma once
#include "CoreMinimal.h"
#include "EUnlockableItemCurrencyType.generated.h"

UENUM(BlueprintType)
enum class EUnlockableItemCurrencyType : uint8 {
    Cash,
    Gold,
    CareerCash,
};

