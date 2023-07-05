#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELWrestlerSkill_Action.generated.h"

USTRUCT(BlueprintType)
struct FELWrestlerSkill_Action : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ActionEquip;
    
    ELITE_GAME_API FELWrestlerSkill_Action();
};

