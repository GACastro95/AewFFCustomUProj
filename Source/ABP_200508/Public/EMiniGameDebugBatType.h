#pragma once
#include "CoreMinimal.h"
#include "EMiniGameDebugBatType.generated.h"

UENUM(BlueprintType)
enum class EMiniGameDebugBatType : uint8 {
    List_None,
    List_Sinai,
    List_Normal,
    List_WireBat,
    List_Max,
};

