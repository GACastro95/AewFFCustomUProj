#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EBodyHeightType.h"
#include "ELWrestlerProfile_BodyHeight.generated.h"

USTRUCT(BlueprintType)
struct FELWrestlerProfile_BodyHeight : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBodyHeightType BodyHeightType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Heigth;
    
    ELITE_GAME_API FELWrestlerProfile_BodyHeight();
};

