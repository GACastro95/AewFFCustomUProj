#pragma once
#include "CoreMinimal.h"
#include "EELEntranceNameplateCommentCompareType.generated.h"

UENUM(BlueprintType)
enum class EELEntranceNameplateCommentCompareType : uint8 {
    None,
    Equal,
    EqualOver,
    EqualUnder,
};

