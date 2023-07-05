#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "SSStateRequestParam.h"
#include "SSMoveRequestData.generated.h"

USTRUCT(BlueprintType)
struct ABP_200508_API FSSMoveRequestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SendHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSStateRequestParam StateRequest;
    
    FSSMoveRequestData();
};

