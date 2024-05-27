#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ELAnimNotifyMotionEnd.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, CollapseCategories)
class ELITE_GAME_API UELAnimNotifyMotionEnd : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Section_N;
    
    UELAnimNotifyMotionEnd();

};

