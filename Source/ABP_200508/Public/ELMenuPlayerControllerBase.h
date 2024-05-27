#pragma once
#include "CoreMinimal.h"
#include "ELGameCommonPlayerControllerBase.h"
#include "ELMenuPlayerControllerBase.generated.h"

class AELCareerMultiPadManager;

UCLASS(Blueprintable)
class ABP_200508_API AELMenuPlayerControllerBase : public AELGameCommonPlayerControllerBase {
    GENERATED_BODY()
public:
    AELMenuPlayerControllerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveActionWithMultiPadManager();
    
    UFUNCTION(BlueprintCallable)
    void BindActionWithMultiPadManager(AELCareerMultiPadManager* pPadManager);
    
};

