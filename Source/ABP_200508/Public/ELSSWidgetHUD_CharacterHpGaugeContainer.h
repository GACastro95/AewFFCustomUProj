#pragma once
#include "CoreMinimal.h"
#include "ELSSWidgetBase.h"
#include "ESSCharacterHpType.h"
#include "ELSSWidgetHUD_CharacterHpGaugeContainer.generated.h"

class AActor;
class UELSSWidgetHUD_HpGauge;
class UELSSWidgetHUD_ShieldGauge;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_CharacterHpGaugeContainer : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UELSSWidgetHUD_HpGauge*> HpGaugeArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UELSSWidgetHUD_ShieldGauge*> ShieldGaugeArray;
    
public:
    UELSSWidgetHUD_CharacterHpGaugeContainer();

protected:
    UFUNCTION(BlueprintCallable)
    void Update(float InDeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetVisibleContainer(bool inIsVisible);
    
    UFUNCTION(BlueprintCallable)
    bool ApplyCharacterHpGauge(AActor* InActor, int32 InNowHp, int32 InIdealHp, int32 inMaxHP, ESSCharacterHpType InType);
    
};

