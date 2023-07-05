#pragma once
#include "CoreMinimal.h"
#include "ESSHeatSkillCategory.h"
#include "SSHeatSkillInfo.generated.h"

USTRUCT(BlueprintType)
struct FSSHeatSkillInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSHeatSkillCategory Category;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Active;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeatSkillId;
    
    ABP_200508_API FSSHeatSkillInfo();
};

