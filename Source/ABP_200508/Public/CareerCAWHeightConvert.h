#pragma once
#include "CoreMinimal.h"
#include "EBodyHeightType.h"
#include "Engine/DataTable.h"
#include "CareerCAWHeightConvert.generated.h"

USTRUCT(BlueprintType)
struct FCareerCAWHeightConvert : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBodyHeightType HeightType;
    
    ABP_200508_API FCareerCAWHeightConvert();
};

