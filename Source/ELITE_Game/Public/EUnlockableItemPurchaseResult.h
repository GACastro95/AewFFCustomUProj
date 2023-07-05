#pragma once
#include "CoreMinimal.h"
#include "EUnlockableItemPurchaseResult.generated.h"

UENUM(BlueprintType)
enum class EUnlockableItemPurchaseResult : uint8 {
    None,
    Success,
    AccessFailureOfCash,
    InsufficientFundsOfCash,
    AccessFailureOfGold,
    InsufficientFundsOfGold,
    NotFoundItem,
    NetworkError,
    SystemError,
};

