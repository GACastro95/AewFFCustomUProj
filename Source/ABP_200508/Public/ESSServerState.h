#pragma once
#include "CoreMinimal.h"
#include "ESSServerState.generated.h"

UENUM(BlueprintType)
enum class ESSServerState : uint8 {
    None,
    Initialize,
    DownloadTitleStorage,
    WaitStartGameSession,
    DataLoading,
    Matching,
    WaitSpawnClientActor,
    InProgress,
    Closing,
    Exit,
};

