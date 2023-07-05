#pragma once
#include "CoreMinimal.h"
#include "EditColorGroupRow.h"
#include "IndexedColor.h"
#include "EditColorItem.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FEditColorItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditColorGroupRow Group;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIndexedColor> IndexedColors;
    
    FEditColorItem();
};

