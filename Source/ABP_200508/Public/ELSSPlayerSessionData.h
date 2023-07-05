#pragma once
#include "CoreMinimal.h"
#include "ELSSPlayerData.h"
#include "ELSSPlayerSessionData.generated.h"

USTRUCT(BlueprintType)
struct FELSSPlayerSessionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELSSPlayerData PlayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString playerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString playerSessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Status;
    
    ABP_200508_API FELSSPlayerSessionData();
};

