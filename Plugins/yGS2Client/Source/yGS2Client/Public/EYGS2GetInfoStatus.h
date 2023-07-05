#pragma once
#include "CoreMinimal.h"
#include "EYGS2GetInfoStatus.generated.h"

UENUM(BlueprintType)
enum class EYGS2GetInfoStatus : uint8 {
    Unknown,
    Retail,
    Staging,
    QA,
    Test_Maintenance,
    Maintenance,
    Development,
};

