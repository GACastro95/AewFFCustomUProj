#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StMontageList_HandsInPocketPin.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FStMontageList_HandsInPocketPin : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* KickOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Cancel;
    
    ABP_200508_API FStMontageList_HandsInPocketPin();
};

