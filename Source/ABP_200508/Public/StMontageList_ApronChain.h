#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StMontageList_ApronChain.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FStMontageList_ApronChain : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> StartList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> LoopList;
    
    ABP_200508_API FStMontageList_ApronChain();
};

