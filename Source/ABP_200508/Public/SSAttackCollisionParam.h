#pragma once
#include "CoreMinimal.h"
#include "SSAttackCollisionParam.generated.h"

USTRUCT(BlueprintType)
struct FSSAttackCollisionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttackHitId;
    
    ABP_200508_API FSSAttackCollisionParam();
};

