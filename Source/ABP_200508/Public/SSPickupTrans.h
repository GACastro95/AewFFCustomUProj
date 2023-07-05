#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "SSPickupTrans.generated.h"

USTRUCT(BlueprintType)
struct FSSPickupTrans {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    ABP_200508_API FSSPickupTrans();
};

