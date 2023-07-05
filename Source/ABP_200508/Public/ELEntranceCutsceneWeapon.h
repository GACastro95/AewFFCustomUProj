#pragma once
#include "CoreMinimal.h"
#include "ELEntranceCutsceneWeaponBase.h"
#include "ELEntranceCutsceneWeapon.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELEntranceCutsceneWeapon : public AELEntranceCutsceneWeaponBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool VanishedWhenNonDefaultEntrance;
    
    AELEntranceCutsceneWeapon();
};

