#pragma once
#include "CoreMinimal.h"
#include "ELSSWeaponBase.h"
#include "ELSSWeaponMelee.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELSSWeaponMelee : public AELSSWeaponBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RemainDurability, meta=(AllowPrivateAccess=true))
    int32 RemainDurability;
    
public:
    AELSSWeaponMelee();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetRemainDurability(int32 Durability);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RemainDurability();
    
public:
    UFUNCTION(BlueprintCallable)
    int32 GetRemainDurability() const;
    
    UFUNCTION(BlueprintCallable)
    int32 DecreaseRemainDurability();
    
};

