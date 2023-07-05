#pragma once
#include "CoreMinimal.h"
#include "CareerEventBaseInfo.generated.h"

USTRUCT(BlueprintType)
struct FCareerEventBaseInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Title_TextID;
    
    ABP_200508_API FCareerEventBaseInfo();
};

