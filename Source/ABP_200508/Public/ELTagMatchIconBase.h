#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELIngameHUDBase.h"
#include "ELTagMatchIconBase.generated.h"

class AELCharacter_Native;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELTagMatchIconBase : public UELIngameHUDBase {
    GENERATED_BODY()
public:
    UELTagMatchIconBase();
    UFUNCTION(BlueprintCallable)
    void Update(AELCharacter_Native* Player, FVector2D Location);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TagWaitChanged(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetNativeParam(UWidgetAnimation* In, UWidgetAnimation* Out);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnChangedTagWait(bool Flag);
    
};

