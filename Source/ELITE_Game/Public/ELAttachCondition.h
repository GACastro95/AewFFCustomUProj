#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ELAttachCondition.generated.h"

USTRUCT(BlueprintType)
struct ELITE_GAME_API FELAttachCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AxisCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParentBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SocketOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AttachOffset;
    
    FELAttachCondition();
};

