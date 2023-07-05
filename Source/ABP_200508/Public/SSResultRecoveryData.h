#pragma once
#include "CoreMinimal.h"
#include "SSResultRecoveryData.generated.h"

USTRUCT(BlueprintType)
struct FSSResultRecoveryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ExistsRecoveryData;
    
    ABP_200508_API FSSResultRecoveryData();
};

