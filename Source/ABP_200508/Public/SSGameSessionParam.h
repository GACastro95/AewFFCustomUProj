#pragma once
#include "CoreMinimal.h"
#include "SSGameSessionParam.generated.h"

USTRUCT(BlueprintType)
struct FSSGameSessionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 maxPlayerNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 minPlayerNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float secMatchTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float lobbyForceEndLimit;
    
    ABP_200508_API FSSGameSessionParam();
};

