#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OpeningMovieSubtitle.generated.h"

USTRUCT(BlueprintType)
struct FOpeningMovieSubtitle : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Subtitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DispTime;
    
    ELITE_API FOpeningMovieSubtitle();
};

