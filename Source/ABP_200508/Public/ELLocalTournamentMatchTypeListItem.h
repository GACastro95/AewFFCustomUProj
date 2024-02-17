#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EELLocalTournamentMatchType.h"
#include "ELLocalTournamentMatchTypeListItem.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FELLocalTournamentMatchTypeListItem : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELLocalTournamentMatchType MatchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Thumbnail;
    
    ABP_200508_API FELLocalTournamentMatchTypeListItem();
};

