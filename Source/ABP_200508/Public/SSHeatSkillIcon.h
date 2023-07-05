#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESSHeatSkillIconType.h"
#include "SSHeatSkillIcon.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSSHeatSkillIcon : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSHeatSkillIconType IconType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Image;
    
    ABP_200508_API FSSHeatSkillIcon();
};

