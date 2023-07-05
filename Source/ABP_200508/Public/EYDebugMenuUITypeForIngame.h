#pragma once
#include "CoreMinimal.h"
#include "EYDebugMenuUITypeForIngame.generated.h"

UENUM(BlueprintType)
enum class EYDebugMenuUITypeForIngame : uint8 {
    None,
    BugReporter,
    SaveDataSystem,
    AudioOption,
    GraphicsOptions,
    ScreenShot,
    AutoMatch,
    Highlights,
    GameMoney,
    JukeBox,
    DebugCamera,
    BattlePass,
    Challenge,
    UnlockableItem,
    PossessedItem,
    Creation,
    YGS2,
    Achievement,
    MiniGameAutoPlay,
    MiniGameOptions,
    AutoPlay,
    MenuUI,
    GamePadMonitor,
    Crate,
    DebugLevels,
    RosterModelPreview,
    Credit,
    StadiumStampede,
};

