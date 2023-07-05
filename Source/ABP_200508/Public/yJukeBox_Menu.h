#pragma once
#include "CoreMinimal.h"
#include "ELDebugMenuRootBase.h"
#include "yJukeBox_Menu.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UyJukeBox_Menu : public UELDebugMenuRootBase {
    GENERATED_BODY()
public:
    UyJukeBox_Menu();
    UFUNCTION(BlueprintCallable)
    bool IsEnableJukeBoxMenu();
    
};

