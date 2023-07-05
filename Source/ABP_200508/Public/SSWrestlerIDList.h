#pragma once
#include "CoreMinimal.h"
#include "EWrestlerID_N.h"
#include "Engine/DataTable.h"
#include "SSWrestlerIDList.generated.h"

USTRUCT(BlueprintType)
struct FSSWrestlerIDList : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EWrestlerID_N> IDs;
    
    ABP_200508_API FSSWrestlerIDList();
};

