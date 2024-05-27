#pragma once
#include "CoreMinimal.h"
#include "ELDebugMenuRootBase.h"
#include "yAchievement_Menu.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UyAchievement_Menu : public UELDebugMenuRootBase {
    GENERATED_BODY()
public:
    UyAchievement_Menu();

    UFUNCTION(BlueprintCallable)
    bool IsEnableAchievementMenu();
    
};

