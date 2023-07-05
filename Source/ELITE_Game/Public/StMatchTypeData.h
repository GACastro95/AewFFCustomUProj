#pragma once
#include "CoreMinimal.h"
#include "EELMatchRuleType.h"
#include "EELMatchType.h"
#include "StMatchTypeData.generated.h"

USTRUCT(BlueprintType)
struct FStMatchTypeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELMatchType MatchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELMatchRuleType MatchType_Rule;
    
    ELITE_GAME_API FStMatchTypeData();
};

