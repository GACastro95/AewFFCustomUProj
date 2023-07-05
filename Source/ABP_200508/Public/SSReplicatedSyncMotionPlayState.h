#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "SSReplicatedSyncMotionPlayState.generated.h"

USTRUCT(BlueprintType)
struct FSSReplicatedSyncMotionPlayState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReceiverFloorHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize OriginLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize ReceiverLocation;
    
    ABP_200508_API FSSReplicatedSyncMotionPlayState();
};

