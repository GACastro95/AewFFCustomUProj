#pragma once
#include "CoreMinimal.h"
#include "ESSAbilitySlotType.h"
#include "SSAbilitySlotParam.generated.h"

USTRUCT(BlueprintType)
struct FSSAbilitySlotParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSAbilitySlotType ESSAbilitySlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoveCost;
    
    ABP_200508_API FSSAbilitySlotParam();
};

