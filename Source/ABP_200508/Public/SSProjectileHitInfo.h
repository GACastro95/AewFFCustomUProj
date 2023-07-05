#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "SSProjectileHitInfo.generated.h"

USTRUCT(BlueprintType)
struct FSSProjectileHitInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize ImpactLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize ImpactPower;
    
    ABP_200508_API FSSProjectileHitInfo();
};

