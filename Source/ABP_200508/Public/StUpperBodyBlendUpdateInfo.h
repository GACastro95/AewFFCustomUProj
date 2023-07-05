#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "StUpperBodyBlendInfo.h"
#include "StUpperBodyBlendUpdateInfo.generated.h"

USTRUCT(BlueprintType)
struct FStUpperBodyBlendUpdateInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStUpperBodyBlendInfo Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolTime;
    
    ABP_200508_API FStUpperBodyBlendUpdateInfo();
};

