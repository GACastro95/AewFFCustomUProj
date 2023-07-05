#pragma once
#include "CoreMinimal.h"
#include "ESSMainMenuInputType.generated.h"

UENUM(BlueprintType)
enum class ESSMainMenuInputType : uint8 {
    ESSMainMenuInputType_StartOnline,
    ESSMainMenuInputType_StartOffline,
    ESSMainMenuInputType_BackLevel,
    ESSMainMenuInputType_TopMenuSelect,
    ESSMainMenuInputType_ButtonStartPlay,
    ESSMainMenuInputType_WrestlerChange,
    ESSMainMenuInputType_ResetCamera,
    ESSMainMenuInputType_MatchCancel,
    ESSMainMenuInputType_ButtonStartPlayRelease,
};

