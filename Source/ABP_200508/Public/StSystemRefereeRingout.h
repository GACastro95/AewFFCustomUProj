#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StSystemRefereeRingout.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FStSystemRefereeRingout : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> CountArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* End;
    
    ABP_200508_API FStSystemRefereeRingout();
};

