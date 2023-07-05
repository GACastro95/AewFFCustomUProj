#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESSHpItemBonusLevel.h"
#include "SSHpItemBonusLevelParam.generated.h"

USTRUCT(BlueprintType)
struct FSSHpItemBonusLevelParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSHpItemBonusLevel MoveLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RecoveryRate;
    
    ABP_200508_API FSSHpItemBonusLevelParam();
};

