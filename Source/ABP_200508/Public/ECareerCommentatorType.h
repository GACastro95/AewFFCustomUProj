#pragma once
#include "CoreMinimal.h"
#include "ECareerCommentatorType.generated.h"

UENUM(BlueprintType)
enum class ECareerCommentatorType : uint8 {
    NONE,
    COMMENTATOR,
    JR,
    EX,
    TZ,
    TK,
    UN,
};

