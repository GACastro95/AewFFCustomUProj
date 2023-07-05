#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StChopBattleData.generated.h"

USTRUCT(BlueprintType)
struct FStChopBattleData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fBonusMomentumValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TurnMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fCameraZoomSec_ST;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fCameraZoomSec_LO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fCameraZoomSec_EN;
    
    ABP_200508_API FStChopBattleData();
};

