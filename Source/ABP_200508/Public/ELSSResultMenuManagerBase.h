#pragma once
#include "CoreMinimal.h"
#include "ELPauseMenuManagerBase.h"
#include "ELSSResultMenuManagerBase.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELSSResultMenuManagerBase : public AELPauseMenuManagerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFocusGame;
    
public:
    AELSSResultMenuManagerBase();
    UFUNCTION(BlueprintCallable)
    void Tick(float inDeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Decide();
    
};

