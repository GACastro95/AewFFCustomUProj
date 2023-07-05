#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StSystemRefereeSubmission.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FStSystemRefereeSubmission : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Release;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* End;
    
    ABP_200508_API FStSystemRefereeSubmission();
};

