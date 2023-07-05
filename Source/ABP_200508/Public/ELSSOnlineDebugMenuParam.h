#pragma once
#include "CoreMinimal.h"
#include "EWrestlerID_N.h"
#include "Engine/DataTable.h"
#include "ELSSOnlineDebugMenuParam.generated.h"

USTRUCT(BlueprintType)
struct FELSSOnlineDebugMenuParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWrestlerID_N PlayerWrestlerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WrestlerNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinWrestlerNum;
    
    ABP_200508_API FELSSOnlineDebugMenuParam();
};

