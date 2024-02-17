#pragma once
#include "CoreMinimal.h"
#include "ESSModeLaunchType.generated.h"

UENUM(BlueprintType)
enum class ESSModeLaunchType : uint8 {
    DefaultClient,
    DedicatedServer,
    MapDirectlyFromEditor,
    DebugMenu,
    LocalPlay,
    InGameDirect_Standalone,
    InGameDirect_DedicatedServer,
    InGameDirect_Client,
    InGameDirect_ListenServer,
};

