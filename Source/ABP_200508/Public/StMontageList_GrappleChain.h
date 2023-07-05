#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StMontageList_GrappleChain.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FStMontageList_GrappleChain : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> LoopList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> BreakoutList;
    
    ABP_200508_API FStMontageList_GrappleChain();
};

