#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ETrainingReversalKind.h"
#include "ELTrainingBase.generated.h"

class AELCharacter_Native;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELTrainingBase : public UUserWidget {
    GENERATED_BODY()
public:
    UELTrainingBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Tick_UpdateTargetCharacter();
    
    UFUNCTION(BlueprintCallable)
    void SetTargetCharacter(AELCharacter_Native* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangedReversalKind_BP(ETrainingReversalKind Kind);
    
    UFUNCTION(BlueprintCallable)
    void OnChangedReversalKind(ETrainingReversalKind Kind);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangedLastHitMovesSituationIndex_BP(int32 MovesSituationIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnChangedLastHitMovesSituationIndex(int32 MovesSituationIndex);
    
};

