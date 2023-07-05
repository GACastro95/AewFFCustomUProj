#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERA_Slot_CutScene_Type.h"
#include "ERA_Slot_Victory.h"
#include "RA_SlotVictory_Event.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct ELITE_GAME_API FRA_SlotVictory_Event : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERA_Slot_Victory CueEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* SoundData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERA_Slot_CutScene_Type CutSceneType;
    
    FRA_SlotVictory_Event();
};

