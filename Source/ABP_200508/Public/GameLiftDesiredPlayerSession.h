#pragma once
#include "CoreMinimal.h"
#include "GameLiftDesiredPlayerSession.generated.h"

USTRUCT(BlueprintType)
struct FGameLiftDesiredPlayerSession {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString playerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerData;
    
    ABP_200508_API FGameLiftDesiredPlayerSession();
};

