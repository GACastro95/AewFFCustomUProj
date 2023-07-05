#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EMomentumStateType.h"
#include "StMiniGameMashBonus.generated.h"

USTRUCT(BlueprintType)
struct FStMiniGameMashBonus : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMomentumStateType MeterState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Momentun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MashBonus;
    
    ABP_200508_API FStMiniGameMashBonus();
};

