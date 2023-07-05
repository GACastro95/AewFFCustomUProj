#pragma once
#include "CoreMinimal.h"
#include "ELEmoteCutsceneTriggerCondition.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FELEmoteCutsceneTriggerCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> Winners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> Losers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    ABP_200508_API FELEmoteCutsceneTriggerCondition();
};

