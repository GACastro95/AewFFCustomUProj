#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "SSProjectileLaunchInfo.generated.h"

USTRUCT(BlueprintType)
struct FSSProjectileLaunchInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LaunchTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize LaunchLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize LaunchPower;
    
    ABP_200508_API FSSProjectileLaunchInfo();
};

