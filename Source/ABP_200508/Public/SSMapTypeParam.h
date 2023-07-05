#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SSMapTypeParam.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSSMapTypeParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MapTexture;
    
    ABP_200508_API FSSMapTypeParam();
};

