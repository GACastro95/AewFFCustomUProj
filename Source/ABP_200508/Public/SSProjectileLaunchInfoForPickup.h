#pragma once
#include "CoreMinimal.h"
#include "SSProjectileLaunchInfo.h"
#include "SSProjectileLaunchInfoForPickup.generated.h"

USTRUCT(BlueprintType)
struct FSSProjectileLaunchInfoForPickup : public FSSProjectileLaunchInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GravityScale;
    
    ABP_200508_API FSSProjectileLaunchInfoForPickup();
};

