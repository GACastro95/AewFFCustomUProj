#pragma once
#include "CoreMinimal.h"
#include "PickableItemIDTableRow.h"
#include "HomeTown.generated.h"

USTRUCT(BlueprintType)
struct ELITE_GAME_API FHomeTown : public FPickableItemIDTableRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CountryText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText StateText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CityText;
    
    FHomeTown();
};

