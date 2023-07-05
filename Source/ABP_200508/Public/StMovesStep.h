#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StMovesStep.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FStMovesStep : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Left;
    
    ABP_200508_API FStMovesStep();
};

