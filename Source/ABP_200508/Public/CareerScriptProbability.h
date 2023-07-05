#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CareerScriptProbability.generated.h"

USTRUCT(BlueprintType)
struct FCareerScriptProbability : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Percent;
    
    ABP_200508_API FCareerScriptProbability();
};

