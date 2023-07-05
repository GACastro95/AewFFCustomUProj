#pragma once
#include "CoreMinimal.h"
#include "EYDBGMailMIMEType.generated.h"

UENUM(BlueprintType)
enum class EYDBGMailMIMEType : uint8 {
    PlainText,
    HTML,
    Jpeg,
    PNG,
    Zip,
    Other,
};

