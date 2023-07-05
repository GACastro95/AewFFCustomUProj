#pragma once
#include "CoreMinimal.h"
#include "EELEntranceCamera_ChameleonEffectType.h"
#include "Engine/DataTable.h"
#include "ELEntranceCutsceneScreenFilterData.generated.h"

USTRUCT(BlueprintType)
struct FELEntranceCutsceneScreenFilterData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELEntranceCamera_ChameleonEffectType EffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnlockItemId;
    
    ABP_200508_API FELEntranceCutsceneScreenFilterData();
};

