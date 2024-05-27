#pragma once
#include "CoreMinimal.h"
#include "eErrorStatusType.generated.h"

UENUM(BlueprintType)
enum class eErrorStatusType : uint8 {
    eErrorStatusType_None,
    eErrorStatusType_OK,
    eErrorStatusType_AwsSdkException,
    eErrorStatusType_RequestValidationError,
    eErrorStatusType_GameSessionNotActive,
    eErrorStatusType_BuildVersionMissmatch,
    eErrorStatusType_Maintenance,
};

