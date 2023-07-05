#pragma once
#include "CoreMinimal.h"
#include "SSAttackOverlap.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FSSAttackOverlap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> OverlapActors;
    
    ABP_200508_API FSSAttackOverlap();
};

