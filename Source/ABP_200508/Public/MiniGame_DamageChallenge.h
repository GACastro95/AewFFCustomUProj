#pragma once
#include "CoreMinimal.h"
#include "MiniGame_DamageChallenge.generated.h"

USTRUCT(BlueprintType)
struct FMiniGame_DamageChallenge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCPUNotWorking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamageNum;
    
    ABP_200508_API FMiniGame_DamageChallenge();
};

