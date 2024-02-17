#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AttireParam.h"
#include "CommunityPersonData.h"
#include "EditBodyParam.h"
#include "NamedPresetParam.h"
#include "CommunityWrestlerData.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FCommunityWrestlerData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommunityPersonData PersonData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditBodyParam BodyParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttireParam DefaultAttire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttireParam PlainClothes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNamedPresetParam> Presets;
    
    FCommunityWrestlerData();
};

