#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ECareerOtherMenuExit.h"
#include "ECareerOtherMenuState.h"
#include "ELCareerOtherMenuManager.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELCareerOtherMenuManager : public AActor {
    GENERATED_BODY()
public:
    AELCareerOtherMenuManager();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TransitionLevel(ECareerOtherMenuExit eOtherMenuExit);
    
    UFUNCTION(BlueprintCallable)
    void SetState(ECareerOtherMenuState State);
    
    UFUNCTION(BlueprintCallable)
    void CheckState(int32 _value);
    
};

