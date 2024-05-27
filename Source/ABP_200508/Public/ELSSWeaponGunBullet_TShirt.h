#pragma once
#include "CoreMinimal.h"
#include "ELSSWeaponGunBullet.h"
#include "ELSSWeaponGunBullet_TShirt.generated.h"

class USoundAtomCue;

UCLASS(Blueprintable)
class ABP_200508_API AELSSWeaponGunBullet_TShirt : public AELSSWeaponGunBullet {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* SoundCue_TShirt;
    
public:
    AELSSWeaponGunBullet_TShirt(const FObjectInitializer& ObjectInitializer);

};

