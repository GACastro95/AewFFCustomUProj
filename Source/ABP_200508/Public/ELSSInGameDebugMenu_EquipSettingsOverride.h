#pragma once
#include "CoreMinimal.h"
#include "ELSSInGameDebugMenuRootBase.h"
#include "ELSSInGameDebugMenu_EquipSettingsOverride.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UELSSInGameDebugMenu_EquipSettingsOverride : public UELSSInGameDebugMenuRootBase {
    GENERATED_BODY()
public:
    UELSSInGameDebugMenu_EquipSettingsOverride();
    UFUNCTION(BlueprintCallable)
    bool CreateMenu();
    
};

