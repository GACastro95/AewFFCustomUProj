#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Templates/SubclassOf.h"
#include "SSActionStateClassInfo.generated.h"

class UELSSActionStateBase;

USTRUCT(BlueprintType)
struct FSSActionStateClassInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UELSSActionStateBase> ActionStateClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StateId;
    
    ABP_200508_API FSSActionStateClassInfo();
};

