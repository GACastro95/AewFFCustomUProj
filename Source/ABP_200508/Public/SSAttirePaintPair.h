#pragma once
#include "CoreMinimal.h"
#include "EEditTexTarget.h"
#include "EditPaintParam.h"
#include "SSAttirePaintPair.generated.h"

USTRUCT(BlueprintType)
struct ABP_200508_API FSSAttirePaintPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEditTexTarget Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditPaintParam Value;
    
    FSSAttirePaintPair();
};

