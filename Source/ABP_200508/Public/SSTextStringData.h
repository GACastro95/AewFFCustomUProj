#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SSTextStringData.generated.h"

USTRUCT(BlueprintType)
struct FSSTextStringData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SearchKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextOfficial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextInfo;
    
    ABP_200508_API FSSTextStringData();
};

