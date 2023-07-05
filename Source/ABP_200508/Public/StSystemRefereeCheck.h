#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StSystemRefereeCheck.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FStSystemRefereeCheck : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Anger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PreDQ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DQ;
    
    ABP_200508_API FStSystemRefereeCheck();
};

