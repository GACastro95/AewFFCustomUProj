#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StDivingStartPart.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FStDivingStartPart : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Mirror;
    
    ABP_200508_API FStDivingStartPart();
};

