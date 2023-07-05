#pragma once
#include "CoreMinimal.h"
#include "AttireData.h"
#include "EPreviewAttire.h"
#include "AttireDataSet.generated.h"

USTRUCT(BlueprintType)
struct FAttireDataSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPreviewAttire, FAttireData> Map;
    
    ELITE_API FAttireDataSet();
};

