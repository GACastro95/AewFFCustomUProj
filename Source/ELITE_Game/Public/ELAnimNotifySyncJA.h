#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ELAnimNotifySyncJA.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, CollapseCategories)
class ELITE_GAME_API UELAnimNotifySyncJA : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontageA_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontageB_N;
    
    UELAnimNotifySyncJA();
};

