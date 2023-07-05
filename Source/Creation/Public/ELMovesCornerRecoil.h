#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELMovesCornerRecoil.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FELMovesCornerRecoil : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PunchKick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Grapple;
    
    FELMovesCornerRecoil();
};

