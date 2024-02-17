#pragma once
#include "CoreMinimal.h"
#include "SSVehicleAttackedHistory.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSSVehicleAttackedHistory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AttackedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElapsedTime;
    
    ABP_200508_API FSSVehicleAttackedHistory();
};

