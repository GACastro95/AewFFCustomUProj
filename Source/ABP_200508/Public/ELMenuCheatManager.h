#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "ELMenuCheatManager.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UELMenuCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UELMenuCheatManager();
    UFUNCTION(BlueprintCallable, Exec)
    bool ToggleDisplayUnitType();
    
};

