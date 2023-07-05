#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StMontageList_AutoTracking.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FStMontageList_AutoTracking : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Left;
    
    ABP_200508_API FStMontageList_AutoTracking();
};

