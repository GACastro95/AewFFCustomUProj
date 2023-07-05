#pragma once
#include "CoreMinimal.h"
#include "MiniGame_SpotLight.generated.h"

USTRUCT(BlueprintType)
struct FMiniGame_SpotLight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCPUNotWorking;
    
    ABP_200508_API FMiniGame_SpotLight();
};

