#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SSStormSchedule.h"
#include "ELSSStormZone.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELSSStormZone : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentSchedule, meta=(AllowPrivateAccess=true))
    FSSStormSchedule currentSchedule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TimeSinceStart, meta=(AllowPrivateAccess=true))
    float timeSinceStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSStormSchedule> schedules;
    
public:
    AELSSStormZone();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdateTransform();
    
    UFUNCTION(BlueprintCallable)
    void UpdateCurrentSchedule(int32 phaseLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetTimeSinceStart(float Sec);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TimeSinceStart();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentSchedule();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRadius() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetLatestSchedulePhase();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckOutside(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable)
    FVector CalcDamageAreaSELocation(const FVector& inPlayerLocation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void AddSchedule(const FSSStormSchedule& schedule);
    
};

