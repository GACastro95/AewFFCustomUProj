#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CareerSE.generated.h"

USTRUCT(BlueprintType)
struct FCareerSE : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SENo;
    
    ABP_200508_API FCareerSE();
};

