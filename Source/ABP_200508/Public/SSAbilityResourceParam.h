#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SSAbilityResourceParam.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSSAbilityResourceParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* IconImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* IconImageWithOutline;
    
    ABP_200508_API FSSAbilityResourceParam();
};

