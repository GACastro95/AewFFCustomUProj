#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EBodyWeightType.h"
#include "ELWrestlerProfile_BodyWeight.generated.h"

USTRUCT(BlueprintType)
struct FELWrestlerProfile_BodyWeight : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBodyWeightType BodyWeightType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    ELITE_GAME_API FELWrestlerProfile_BodyWeight();
};

