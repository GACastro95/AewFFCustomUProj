#pragma once
#include "CoreMinimal.h"
#include "ELSSWeaponBase.h"
#include "SSWeaponThrowParam.h"
#include "ELSSWeaponThrow.generated.h"

class AELSSWeaponThrowProjectile;

UCLASS(Blueprintable)
class ABP_200508_API AELSSWeaponThrow : public AELSSWeaponBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSWeaponThrowParam WeaponSubParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoveId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSWeaponThrowProjectile* StockedProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSWeaponThrowProjectile* VisualProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Quantity, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
public:
    AELSSWeaponThrow(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void SetQuantity(int32 inQuantity);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Quantity();
    
public:
    UFUNCTION(BlueprintCallable)
    int32 GetQuantity() const;
    
    UFUNCTION(BlueprintCallable)
    int32 DecreaseQuantity();
    
};

