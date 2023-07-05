#pragma once
#include "CoreMinimal.h"
#include "EUserProfileSortType.generated.h"

UENUM(BlueprintType)
enum class EUserProfileSortType : uint8 {
    Default,
    Minigame,
    Crate,
    Online,
};

