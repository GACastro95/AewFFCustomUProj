#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ELCareerSequencePlayerBase.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELCareerSequencePlayerBase : public AActor {
    GENERATED_BODY()
public:
    AELCareerSequencePlayerBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaySequenceBP(int32 No);
    
};

