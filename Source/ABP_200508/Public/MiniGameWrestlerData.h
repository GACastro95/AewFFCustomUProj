#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MiniGameWrestlerData.generated.h"

USTRUCT(BlueprintType)
struct ABP_200508_API FMiniGameWrestlerData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WrestlerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MANorAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GameScore;
    
    FMiniGameWrestlerData();
};

