#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERA_SlotIntro_Gender.h"
#include "ERA_SlotIntro_Order.h"
#include "ERA_Slot_ChampionState.h"
#include "ERA_Slot_CutScene_Type.h"
#include "RA_SlotIntro_Info.generated.h"

USTRUCT(BlueprintType)
struct ELITE_GAME_API FRA_SlotIntro_Info : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERA_SlotIntro_Order Order;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERA_SlotIntro_Gender Gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERA_Slot_ChampionState ChampionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERA_Slot_CutScene_Type EntranceType;
    
    FRA_SlotIntro_Info();
};

