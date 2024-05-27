#pragma once
#include "CoreMinimal.h"
#include "ELSSWeaponTrapObject.h"
#include "SSDamageEvent.h"
#include "ELSSWeaponTrapObject_Barricade.generated.h"

class AActor;
class USkeletalMesh;
class USoundAtomCue;

UCLASS(Abstract, Blueprintable)
class ABP_200508_API AELSSWeaponTrapObject_Barricade : public AELSSWeaponTrapObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsBroken, meta=(AllowPrivateAccess=true))
    bool IsBroken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionProfile_BeforeBroken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionProfile_AfterBroken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh_BeforeBroken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh_AfterBroken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* SoundCue_Break;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpulseStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageToPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeSpanAfterBroken;
    
public:
    AELSSWeaponTrapObject_Barricade(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void TakeDamage_Imple(int32 Damage, const FSSDamageEvent& SSDamageEvent, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsBroken();
    
    UFUNCTION(BlueprintCallable)
    void Break_Imple();
    
};

