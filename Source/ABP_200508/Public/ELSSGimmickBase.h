#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ELSSActorCommonInterface.h"
#include "ELSSGimmickBase.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELSSGimmickBase : public AActor, public IELSSActorCommonInterface {
    GENERATED_BODY()
public:
    AELSSGimmickBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActorLanding(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActorLanded(AActor* Actor);
    
    
    // Fix for true pure virtual functions not being implemented
};

