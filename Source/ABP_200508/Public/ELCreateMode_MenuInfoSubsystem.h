#pragma once
#include "CoreMinimal.h"
#include "EGender.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EELMainMenuAction.h"
#include "ELCreateMode_MenuInfoSubsystem.generated.h"

UCLASS(Blueprintable)
class UELCreateMode_MenuInfoSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UELCreateMode_MenuInfoSubsystem();
    UFUNCTION(BlueprintCallable)
    void SetMainMenuAction(EELMainMenuAction _MainMenuAction);
    
    UFUNCTION(BlueprintCallable)
    void SetGender(EGender _Gender);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNewData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMaleData();
    
    UFUNCTION(BlueprintCallable)
    EELMainMenuAction GetMainMenuAction();
    
    UFUNCTION(BlueprintCallable)
    EGender GetGender();
    
};

