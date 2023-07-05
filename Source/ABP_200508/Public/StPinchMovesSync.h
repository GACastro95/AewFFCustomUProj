#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StSyncMontageObj.h"
#include "StPinchMovesSync.generated.h"

USTRUCT(BlueprintType)
struct FStPinchMovesSync : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStSyncMontageObj SyncMontage_00;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStSyncMontageObj SyncMontage_01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStSyncMontageObj SyncMontage_02;
    
    ABP_200508_API FStPinchMovesSync();
};

