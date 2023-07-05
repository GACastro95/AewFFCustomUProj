#pragma once
#include "CoreMinimal.h"
#include "PersonalityParam.generated.h"

USTRUCT(BlueprintType)
struct ELITE_GAME_API FPersonalityParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> IntParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> BitParam;
    
    FPersonalityParam();
};

