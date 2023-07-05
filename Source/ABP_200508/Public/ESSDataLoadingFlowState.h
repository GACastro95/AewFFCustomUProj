#pragma once
#include "CoreMinimal.h"
#include "ESSDataLoadingFlowState.generated.h"

UENUM(BlueprintType)
enum class ESSDataLoadingFlowState : uint8 {
    None,
    Initialize,
    MasterDataUpdate,
    AssetLoading,
    NextLevelLoading,
    Closing,
    Exit,
};

