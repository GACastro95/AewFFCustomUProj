#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ELCareerPropAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UELCareerPropAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UELCareerPropAnimInstance();

    UFUNCTION(BlueprintCallable)
    void UpdateVariables(float fDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void RequestAnimation(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void InitializeVariables();
    
};

