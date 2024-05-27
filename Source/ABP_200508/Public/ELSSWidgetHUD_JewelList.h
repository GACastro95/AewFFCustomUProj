#pragma once
#include "CoreMinimal.h"
#include "ELSSWidgetBase.h"
#include "ELSSWidgetHUD_JewelList.generated.h"

class UImage;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSWidgetHUD_JewelList : public UELSSWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> GaugeMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> DiffGaugeMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* TildeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CountMinute_01Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CountSecond_10Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CountSecond_01Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Minutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Seconds;
    
public:
    UELSSWidgetHUD_JewelList();

protected:
    UFUNCTION(BlueprintCallable)
    void SetVisibleTilde(bool inIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRankText(int32 InRank, int32 InSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetJewelNumText(int32 InJewelNum, int32 InSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetGaugeType(bool InSelfData, int32 InSlot);
    
    UFUNCTION(BlueprintCallable)
    void SetGaugeRatio(int32 InJewelNum, int32 InMaxJewelNum, int32 InSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayChangeRankAnim(int32 InSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init();
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyMatchTimeCountDown(float InSecond);
    
    UFUNCTION(BlueprintCallable)
    void ApplyJewelRankData(int32 InRank, int32 InJewelNum, int32 InMaxJewelNum, bool InSelfData, int32 InSlot, bool InPlayChangeRankAnim);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ApplyCountText(bool InIsMinute);
    
};

