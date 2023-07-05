#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESSHeatSkillCategory.h"
#include "ESSHeatSkillSlotState.h"
#include "SSHeatSkillDefaultSettingsOld.generated.h"

USTRUCT(BlueprintType)
struct FSSHeatSkillDefaultSettingsOld : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSHeatSkillCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSHeatSkillSlotState Slot05;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSHeatSkillSlotState Slot10;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSHeatSkillSlotState Slot15;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSHeatSkillSlotState Slot20;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSHeatSkillSlotState Slot25;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSHeatSkillSlotState Slot30;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSHeatSkillSlotState Slot35;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSHeatSkillSlotState Slot40;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSHeatSkillSlotState Slot45;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSHeatSkillSlotState Slot50;
    
    ABP_200508_API FSSHeatSkillDefaultSettingsOld();
};

