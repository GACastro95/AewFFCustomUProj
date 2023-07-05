#pragma once
#include "CoreMinimal.h"
#include "ETutorialDialogType.generated.h"

UENUM(BlueprintType)
enum class ETutorialDialogType : uint8 {
    ThreePicture_Text,
    SinglePicture_Text,
    TextOnly,
    PictureOnly,
};

