#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EUpperBodyBlendCondition.h"
#include "StUpperBodyBlendInfo.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FStUpperBodyBlendInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUpperBodyBlendCondition ConditionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Arg01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Arg02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> AnimationList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 limit;
    
    ABP_200508_API FStUpperBodyBlendInfo();
};

