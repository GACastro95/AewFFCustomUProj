#pragma once
#include "CoreMinimal.h"
#include "WrestlingSkillParam.generated.h"

USTRUCT(BlueprintType)
struct ELITE_GAME_API FWrestlingSkillParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> AbilityScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> Passive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> Action;
    
    FWrestlingSkillParam();
};

