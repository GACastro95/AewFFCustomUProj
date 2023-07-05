#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TipsLoadingResourceInfo.h"
#include "TipsLoadingParam.generated.h"

USTRUCT(BlueprintType)
struct FTipsLoadingParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTipsLoadingResourceInfo> ResourceInfoList;
    
    ELITE_GAME_API FTipsLoadingParam();
};

