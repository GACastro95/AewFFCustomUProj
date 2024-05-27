#pragma once
#include "CoreMinimal.h"
#include "EELEntranceCutsceneBeltPositionType.h"
#include "ELEntranceCutsceneWeaponBase.h"
#include "ELEntranceCutsceneBelt.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELEntranceCutsceneBelt : public AELEntranceCutsceneWeaponBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttachCastID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELEntranceCutsceneBeltPositionType Position;
    
    AELEntranceCutsceneBelt(const FObjectInitializer& ObjectInitializer);

};

