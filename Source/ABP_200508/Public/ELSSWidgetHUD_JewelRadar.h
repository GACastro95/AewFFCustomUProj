#pragma once
#include "CoreMinimal.h"
#include "ELSSWidgetBase.h"
#include "ELSSWidgetHUD_JewelRadar.generated.h"

class UUserWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_JewelRadar : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RadarLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* LevelUpAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> GaugeWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> GaugeEmptyAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> GaugeLevelUpAnims;
    
public:
    UELSSWidgetHUD_JewelRadar();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBonusText();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelUP();
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyRadarLevel(int32 inLevel);
    
};

