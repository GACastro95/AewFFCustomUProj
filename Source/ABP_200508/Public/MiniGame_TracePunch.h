#pragma once
#include "CoreMinimal.h"
#include "MiniGame_TracePunch.generated.h"

USTRUCT(BlueprintType)
struct FMiniGame_TracePunch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDestroyBox;
    
    ABP_200508_API FMiniGame_TracePunch();
};

