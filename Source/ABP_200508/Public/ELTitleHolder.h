#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EWrestlerID_N.h"
#include "ELTitleHolder.generated.h"

USTRUCT(BlueprintType)
struct FELTitleHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWrestlerID_N WrestlerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid UID;
    
    ABP_200508_API FELTitleHolder();
};

