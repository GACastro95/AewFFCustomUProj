#pragma once
#include "CoreMinimal.h"
#include "SSLastPlayRecord.generated.h"

USTRUCT(BlueprintType)
struct FSSLastPlayRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttentionPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SurvivorRank;
    
    ABP_200508_API FSSLastPlayRecord();
};

