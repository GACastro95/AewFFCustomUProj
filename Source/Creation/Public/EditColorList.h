#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EditColorList.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FEditColorList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FLinearColor> Colors;
    
    FEditColorList();
};

