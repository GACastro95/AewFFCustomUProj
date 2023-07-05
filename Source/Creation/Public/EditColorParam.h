#pragma once
#include "CoreMinimal.h"
#include "EditColorGroupID.h"
#include "EditColorParam.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FEditColorParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultColorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEditColorGroupID> ColorGroups;
    
    FEditColorParam();
};

