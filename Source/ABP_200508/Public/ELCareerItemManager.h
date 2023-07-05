#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CareerItemData.h"
#include "ECareerDisappearItemEffect.h"
#include "ECareerItemEffect.h"
#include "ECareerItemNo.h"
#include "ELCareerItemManager.generated.h"

class UELCareerGameParam;

UCLASS(Blueprintable)
class ABP_200508_API AELCareerItemManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCareerItemData> m_CareerItemTableBase;
    
public:
    AELCareerItemManager();
    UFUNCTION(BlueprintCallable)
    bool UseItems(UELCareerGameParam* _pGameParam, ECareerItemNo _ItemNo);
    
    UFUNCTION(BlueprintCallable)
    TArray<FCareerItemData> GetCareerItemTableBase();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCareerItemData GetCareerItemData(ECareerItemNo _ItemNo);
    
    UFUNCTION(BlueprintCallable)
    void DeactiveItemEffect(UELCareerGameParam* _pGameParam, ECareerDisappearItemEffect _DisappearItemEffect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseItem(ECareerItemEffect _ItemEffect) const;
    
    UFUNCTION(BlueprintCallable)
    void AddCareerItemData(FCareerItemData _Data);
    
    UFUNCTION(BlueprintCallable)
    void ActiveItemEffect(UELCareerGameParam* _pGameParam);
    
};

