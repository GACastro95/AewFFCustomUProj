#pragma once
#include "CoreMinimal.h"
#include "ECareerItemPurchaseState.generated.h"

UENUM(BlueprintType)
enum class ECareerItemPurchaseState : uint8 {
    None,
    LackMoney_AvailablePurchase,
    LcakMoney_HasNoEffect,
    Purchased,
    HasNoEffect,
    AvailablePurchase,
};

