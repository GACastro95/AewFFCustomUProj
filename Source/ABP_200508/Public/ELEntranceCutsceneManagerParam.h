#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELEntranceCutsceneManagerParam.generated.h"

USTRUCT(BlueprintType)
struct FELEntranceCutsceneManagerParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraSwitch_Delay;
    
    ABP_200508_API FELEntranceCutsceneManagerParam();
};

