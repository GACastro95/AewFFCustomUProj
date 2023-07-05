#pragma once
#include "CoreMinimal.h"
#include "PSTitleInfo.generated.h"

USTRUCT(BlueprintType)
struct FPSTitleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PS5UniqueAppId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PS4TitleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PS4Fingerprint;
    
    ELITE_GAME_API FPSTitleInfo();
};

