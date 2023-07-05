#pragma once
#include "CoreMinimal.h"
#include "ELSSWeaponBase.h"
#include "SSWeaponTrapParam.h"
#include "ELSSWeaponTrap.generated.h"

class AELSSWeaponTrapObject;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ABP_200508_API AELSSWeaponTrap : public AELSSWeaponBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent_Attach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSWeaponTrapParam WeaponSubParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StockedObject, meta=(AllowPrivateAccess=true))
    AELSSWeaponTrapObject* StockedObjectRep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSWeaponTrapObject* StockedObjectLocal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Quantity, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
public:
    AELSSWeaponTrap();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetQuantity(int32 inQuantity);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_StockedObject();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Quantity();
    
public:
    UFUNCTION(BlueprintCallable)
    int32 GetQuantity() const;
    
    UFUNCTION(BlueprintCallable)
    int32 DecreaseQuantity();
    
};

