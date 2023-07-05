#pragma once
#include "CoreMinimal.h"
#include "ELIngameHUDBase.h"
#include "ELIngameHUDMatchFormatBase.generated.h"

class UELIngameHUDHPGaugeBase;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELIngameHUDMatchFormatBase : public UELIngameHUDBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UELIngameHUDHPGaugeBase*> HUDs;
    
public:
    UELIngameHUDMatchFormatBase();
    UFUNCTION(BlueprintCallable)
    void AddMomentumMeterHUD(UELIngameHUDHPGaugeBase* HUD1, UELIngameHUDHPGaugeBase* HUD2, UELIngameHUDHPGaugeBase* HUD3, UELIngameHUDHPGaugeBase* HUD4);
    
};

