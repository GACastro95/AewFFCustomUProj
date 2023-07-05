#pragma once
#include "CoreMinimal.h"
#include "ESSHeatLevelSkillType.h"
#include "SSAbilitySlotParam.h"
#include "SSWrestlerMovePresetParam.generated.h"

USTRUCT(BlueprintType)
struct FSSWrestlerMovePresetParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> AbilityId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSAbilitySlotParam> AbilitySlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESSHeatLevelSkillType> HeatLevelSkill;
    
    ABP_200508_API FSSWrestlerMovePresetParam();
};

