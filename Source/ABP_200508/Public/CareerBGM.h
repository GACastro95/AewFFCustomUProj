#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CareerBGM.generated.h"

USTRUCT(BlueprintType)
struct FCareerBGM : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BgmNo;
    
    ABP_200508_API FCareerBGM();
};

