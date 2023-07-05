#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SSWeaponCommonParam.generated.h"

USTRUCT(BlueprintType)
struct FSSWeaponCommonParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    ABP_200508_API FSSWeaponCommonParam();
};

