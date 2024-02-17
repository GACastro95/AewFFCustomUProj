#pragma once
#include "CoreMinimal.h"
#include "ESSItemType.generated.h"

UENUM(BlueprintType)
enum class ESSItemType : uint8 {
    None,
    Hp,
    Exp,
    RecoveryShield,
    Carrot,
    Jewel,
    BlackDia,
    JewelRadar,
};

