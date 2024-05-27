#pragma once
#include "CoreMinimal.h"
#include "eSSRequestResultType.generated.h"

UENUM(BlueprintType)
enum class eSSRequestResultType : uint8 {
    eSSRequestResultType_Success,
    eSSRequestResultType_Failed,
    eSSRequestResultType_ErrDialog,
};

