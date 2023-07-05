#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELSSPickupBase.h"
#include "SSShieldParam.h"
#include "ELSSShieldBase.generated.h"

class AActor;
class AELSSPlayer;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ABP_200508_API AELSSShieldBase : public AELSSPickupBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDurability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RemainDurability, meta=(AllowPrivateAccess=true))
    int32 RemainDurability;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableAbsorbMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPerformAbsorbMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbsorbMovementDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbsorbMovementDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbsorbMovementTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PickupStartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OriginalScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbsorbMovementEndScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AbsorbMoveTo, meta=(AllowPrivateAccess=true))
    AELSSPlayer* AbsorbMoveTo;
    
public:
    AELSSShieldBase();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void StartAbsorbMovement(AActor* OtherActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Setup(const FSSShieldParam& shieldParam);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetRemainDurability(int32 Durability);
    
private:
    UFUNCTION(BlueprintCallable)
    void PerformAbsorbMovement(float DeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RemainDurability();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_AbsorbMoveTo();
    
    UFUNCTION(BlueprintCallable)
    void OnEndPerformAbsorbMovement();
    
public:
    UFUNCTION(BlueprintCallable)
    float GetRemainDurabilityRatio() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetRemainDurability() const;
    
    UFUNCTION(BlueprintCallable)
    int32 AddDurabilityByRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    int32 AddDurability(int32 Value);
    
};

