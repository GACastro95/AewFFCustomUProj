#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StSyncMontageObj.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FStSyncMontageObj : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage_A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage_B;
    
    ABP_200508_API FStSyncMontageObj();
};

