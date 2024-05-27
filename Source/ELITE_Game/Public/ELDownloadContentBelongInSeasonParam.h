#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELDownloadContentBelongInSeasonType.h"
#include "ELDownloadContentParam.h"
#include "ELDownloadContentBelongInSeasonParam.generated.h"

USTRUCT(BlueprintType)
struct FELDownloadContentBelongInSeasonParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELDownloadContentBelongInSeasonType SeasonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> DlcItemNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibleLoadingTitleDLC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELDownloadContentParam EntitlementId;
    
    ELITE_GAME_API FELDownloadContentBelongInSeasonParam();
};

