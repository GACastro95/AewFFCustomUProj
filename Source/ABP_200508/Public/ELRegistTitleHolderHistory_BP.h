#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EWrestlerID_N.h"
#include "ELRegistTitleHolderHistory_BP.generated.h"

USTRUCT(BlueprintType)
struct FELRegistTitleHolderHistory_BP {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWrestlerID_N WrestlerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid UID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WrestlerName;
    
    ABP_200508_API FELRegistTitleHolderHistory_BP();
};

