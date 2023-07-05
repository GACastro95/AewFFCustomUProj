#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StMontageList_CornerChain.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FStMontageList_CornerChain : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PushCorner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Front_ST;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Front_LO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Back_ST;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Back_LO;
    
    ABP_200508_API FStMontageList_CornerChain();
};

