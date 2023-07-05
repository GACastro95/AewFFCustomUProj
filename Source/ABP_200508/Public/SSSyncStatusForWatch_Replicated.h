#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "SSSyncStatusForWatch_Replicated.generated.h"

class AELSSPlayerState;

USTRUCT(BlueprintType)
struct FSSSyncStatusForWatch_Replicated {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSPlayerState* WatchTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize10 CameraDirection;
    
    ABP_200508_API FSSSyncStatusForWatch_Replicated();
};

