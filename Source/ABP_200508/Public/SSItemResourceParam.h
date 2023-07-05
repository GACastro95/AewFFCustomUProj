#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SSItemResourceParam.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSSItemResourceParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* IconImage;
    
    ABP_200508_API FSSItemResourceParam();
};

