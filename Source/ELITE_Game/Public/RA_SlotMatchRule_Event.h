#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERA_Slot_MatchRule.h"
#include "RA_SlotMatchRule_Event.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct ELITE_GAME_API FRA_SlotMatchRule_Event : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERA_Slot_MatchRule CueEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* SoundData;
    
    FRA_SlotMatchRule_Event();
};

