#pragma once
#include "CoreMinimal.h"
#include "EditColorGroupID.h"
#include "IndexedColor.h"
#include "EditColor.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FEditColor : public FIndexedColor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditColorGroupID GroupId;
    
    FEditColor();
};

