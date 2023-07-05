#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StLimbHP.generated.h"

USTRUCT(BlueprintType)
struct FStLimbHP : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Head;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Arm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Leg;
    
    ABP_200508_API FStLimbHP();
};

