#pragma once
#include "CoreMinimal.h"
#include "CareerRecordsOtherItem.generated.h"

USTRUCT(BlueprintType)
struct FCareerRecordsOtherItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OtherName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OtherValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    ABP_200508_API FCareerRecordsOtherItem();
};

