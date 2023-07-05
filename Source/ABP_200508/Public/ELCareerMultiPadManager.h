#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ELCareerMultiPadManager.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELCareerMultiPadManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pControlledActor;
    
public:
    AELCareerMultiPadManager();
    UFUNCTION(BlueprintCallable)
    void SetControlledActor(AActor* pControlledActor);
    
};

