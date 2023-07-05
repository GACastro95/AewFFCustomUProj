#pragma once
#include "CoreMinimal.h"
#include "GameLiftPlacePlayerSession.generated.h"

USTRUCT(BlueprintType)
struct FGameLiftPlacePlayerSession {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString playerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString playerSessionId;
    
    ABP_200508_API FGameLiftPlacePlayerSession();
};

