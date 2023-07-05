#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELWrestlerSkill_Passive.generated.h"

USTRUCT(BlueprintType)
struct FELWrestlerSkill_Passive : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PassiveEquip;
    
    ELITE_GAME_API FELWrestlerSkill_Passive();
};

