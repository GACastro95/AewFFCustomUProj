#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DummyItem01Value_Param.generated.h"

USTRUCT(BlueprintType)
struct ABP_200508_API FDummyItem01Value_Param : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FDummyItem01Value_Param();
};

