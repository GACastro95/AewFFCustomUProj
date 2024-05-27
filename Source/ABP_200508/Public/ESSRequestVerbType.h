#pragma once
#include "CoreMinimal.h"
#include "ESSRequestVerbType.generated.h"

UENUM(BlueprintType)
enum class ESSRequestVerbType : uint8 {
    ESSRequestVerbType_GET,
    ESSRequestVerbType_POST,
    ESSRequestVerbType_PUT,
    ESSRequestVerbType_NUM,
};

