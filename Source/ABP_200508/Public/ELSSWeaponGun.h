#pragma once
#include "CoreMinimal.h"
#include "ELSSWeaponBase.h"
#include "SSWeaponGunParam.h"
#include "ELSSWeaponGun.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELSSWeaponGun : public AELSSWeaponBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSWeaponGunParam WeaponSubParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Ammo, meta=(AllowPrivateAccess=true))
    int32 ammo;
    
public:
    AELSSWeaponGun();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetAmmo(int32 NewAmmo);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Ammo();
    
public:
    UFUNCTION(BlueprintCallable)
    int32 GetAmmo() const;
    
    UFUNCTION(BlueprintCallable)
    int32 DecreaseAmmo();
    
};

