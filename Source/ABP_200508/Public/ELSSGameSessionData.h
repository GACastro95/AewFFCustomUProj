#pragma once
#include "CoreMinimal.h"
#include "ELSSGameSessionData.generated.h"

USTRUCT(BlueprintType)
struct FELSSGameSessionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 playerMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 lobbyTime;
    
    ABP_200508_API FELSSGameSessionData();
};

