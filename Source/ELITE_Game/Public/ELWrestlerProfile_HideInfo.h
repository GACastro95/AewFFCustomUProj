#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELWrestlerProfile_HideInfo.generated.h"

USTRUCT(BlueprintType)
struct FELWrestlerProfile_HideInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HideWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HideBirthDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UneditableStreetClothes;
    
    ELITE_GAME_API FELWrestlerProfile_HideInfo();
};

