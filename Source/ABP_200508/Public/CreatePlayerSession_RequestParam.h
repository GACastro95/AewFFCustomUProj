#pragma once
#include "CoreMinimal.h"
#include "CreatePlayerSession_RequestParam.generated.h"

USTRUCT(BlueprintType)
struct FCreatePlayerSession_RequestParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString gameSessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString playerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerData;
    
    ABP_200508_API FCreatePlayerSession_RequestParam();
};

