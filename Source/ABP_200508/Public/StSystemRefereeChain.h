#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StSystemRefereeChain.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FStSystemRefereeChain : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Release;
    
    ABP_200508_API FStSystemRefereeChain();
};

