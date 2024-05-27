#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StMiniGameMashBonus.h"
#include "StPinMiniGameMash.h"
#include "StShockCounterParam.h"
#include "ELShockCounter.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABP_200508_API UELShockCounter : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStShockCounterParam ShockCounterParam_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStPinMiniGameMash> MiniGameMashParam_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStMiniGameMashBonus> MiniGameMashBonusParam_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CounterValue_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalDownSecond_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RingDownSec_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArenaDownSec_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MashBonusSecond_N;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MashBonusTotalSubSec_N;
    
public:
    UELShockCounter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SubCounterValue_N(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCounterValue_N(bool bEx, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRise_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChangeGroggyState_N() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShockCounterValue_N() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearRepeatLimit_N();
    
};

