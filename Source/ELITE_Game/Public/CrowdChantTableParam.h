#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EWrestlerID_N.h"
#include "CrowdChantTableParam.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct FCrowdChantTableParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWrestlerID_N WrestlerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* Momentum_High;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* Momentum_Low;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* TagTeamPartner;
    
    ELITE_GAME_API FCrowdChantTableParam();
};

