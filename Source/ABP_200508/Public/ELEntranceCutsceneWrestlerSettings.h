#pragma once
#include "CoreMinimal.h"
#include "EWrestlerID_N.h"
#include "Engine/DataTable.h"
#include "ELEntranceCutsceneWrestlerSettings.generated.h"

USTRUCT(BlueprintType)
struct FELEntranceCutsceneWrestlerSettings : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWrestlerID_N WrestlerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseRingModelWhenNonDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseRingModelWhenTagEntrance;
    
    ABP_200508_API FELEntranceCutsceneWrestlerSettings();
};

