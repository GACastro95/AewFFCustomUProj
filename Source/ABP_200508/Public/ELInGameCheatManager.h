#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "ELInGameCheatManager.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UELInGameCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UELInGameCheatManager();
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDisplayAttachPoint();
    
};

