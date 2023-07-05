#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERA_Slot_TeamName.h"
#include "RA_SlotTeamName_Event.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct ELITE_GAME_API FRA_SlotTeamName_Event : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERA_Slot_TeamName CueEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* SoundData;
    
    FRA_SlotTeamName_Event();
};

