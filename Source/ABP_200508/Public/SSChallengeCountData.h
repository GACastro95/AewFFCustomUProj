#pragma once
#include "CoreMinimal.h"
#include "ESSWrestlerType.h"
#include "SSChallengeCountData.generated.h"

USTRUCT(BlueprintType)
struct FSSChallengeCountData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSWrestlerType WrestlerType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count[18];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Fixed;
    
    ABP_200508_API FSSChallengeCountData();
};

