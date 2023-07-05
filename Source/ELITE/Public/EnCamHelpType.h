#pragma once
#include "CoreMinimal.h"
#include "EnCamHelpType.generated.h"

UENUM(BlueprintType)
enum class EnCamHelpType : uint8 {
    Back,
    Practice,
    SelectTemplate,
    Favorite,
    AllDeselect,
    Temporary,
    Search,
    UnFavorite,
};

