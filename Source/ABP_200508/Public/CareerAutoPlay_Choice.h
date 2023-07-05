#pragma once
#include "CoreMinimal.h"
#include "CareerAutoPlay_Choice.generated.h"

USTRUCT(BlueprintType)
struct FCareerAutoPlay_Choice {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 No;
    
    ABP_200508_API FCareerAutoPlay_Choice();
};

