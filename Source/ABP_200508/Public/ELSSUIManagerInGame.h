#pragma once
#include "CoreMinimal.h"
#include "ELSSUIManagerBase.h"
#include "ELSSUIManagerInGame.generated.h"

class UELSSPanelBase;

UCLASS(Blueprintable)
class ABP_200508_API AELSSUIManagerInGame : public AELSSUIManagerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELSSPanelBase* Panel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCanPushSwitchMapMode;
    
public:
    AELSSUIManagerInGame();
    UFUNCTION(BlueprintCallable)
    void SetAbilityVisible(bool inIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void ResetAbility();
    
};

