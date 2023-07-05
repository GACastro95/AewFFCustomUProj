#pragma once
#include "CoreMinimal.h"
#include "ELInteractiveVictoryCutsceneParamMontageSet.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FELInteractiveVictoryCutsceneParamMontageSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> Winners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> Losers;
    
    ABP_200508_API FELInteractiveVictoryCutsceneParamMontageSet();
};

